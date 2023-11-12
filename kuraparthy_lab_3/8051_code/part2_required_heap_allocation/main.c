/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 10/18/22
 * Attributions: Material given in class
                https://stackoverflow.com/questions/7775991/how-to-get-hexdump-of-a-structure-data
   ---------------------------------------------------------------------------------*/

/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */

#include <at89c51ed2.h>       //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lab3_part22.h"


/* -------------------------------------------------- */
//          Virtual DEBUG port
/* -------------------------------------------------- */

#define DEBUG
#ifdef DEBUG
#define DEBUGPORT(x) dataout(x);
#else
#define DEBUGPORT(X)
#endif // DEBUG


/* -------------------------------------------------- */
//          SDCC external start up initialization
/* -------------------------------------------------- */

_sdcc_external_startup(){
    AUXR |=0x0C;                                                                /*enabling internal ram size=1024*/
    return 0;
}

/* -------------------------------------------------- */
//          HEAP initialization
/* -------------------------------------------------- */

#ifndef HEAP_SIZE
#define HEAP_SIZE 5000
#endif

__xdata char __sdcc_heap[HEAP_SIZE];
const unsigned int __sdcc_heap_size = HEAP_SIZE;


/* -------------------------------------------------- */
//          GLOBALS
/* -------------------------------------------------- */

typedef struct bufferInformation_t{
    uint8_t buffernumber;
    uint16_t *bufferStartaddress;
    uint16_t buffersize;
} bufferInformation;                                            /*Creating a structure to hold information about created buffers*/

bufferInformation heap[30];                                     /*Array of structures to hold current buffers*/

void main(void)
{
__xdata uint16_t* buffer0=NULL;                             /*initializing buffer0 and buffer1 pointers*/
__xdata uint16_t* buffer1=NULL;
uint8_t* newbuffers[20];                                    /*array of pointers to hold new buffers*/
unsigned char size0[15];
uint8_t isFlag=0;
int total_size=0;
unsigned char character[5];                                 /*string to hold command and storage characters*/
uint16_t buffer0ptr=0;                                      /*points to elements in buffer0*/
uint16_t buffer0CurrentSize=0;
unsigned char newBuffersize[10];                            /*string to hold size of new buffers*/
int newbuffersizeint;
uint8_t newBufferscount=0;
unsigned char deleteBufferNumber[10];                       /*string to hold the number of buffer to delete*/
int deleteBufferNumberint;
uint16_t numOfCharactersReceived=0;                         /*holds the numbers of characters received*/

serial_init();                                              /*initializes serial communication*/

while(1){
    if (isFlag==0){
        puts("Enter the size between 48-4800 to allocate buffers\n\r");
        getstr(size0);
        total_size=atoi(size0);                             /*converts the received string size to int*/
        printf_tiny("size entered= %d \n\r", total_size);
        if (((total_size>47) && (total_size<4801)) && (total_size%16==0)){                  /*buffer size conditions*/
            isFlag=1;
            buffer0= (uint16_t *)(malloc(total_size));                          /*malloc the buffer0 and buffer1 pointers with required size*/
            buffer1= (uint16_t *)(malloc(total_size));
           if ((buffer0!=NULL) && (buffer1!=NULL)){
                heap[0].buffernumber=0;                                         /*hold the buffer information in heap array structure*/
                heap[0].bufferStartaddress=buffer0;
                heap[0].buffersize=total_size;
                heap[1].buffernumber=1;
                heap[1].bufferStartaddress=buffer1;
                heap[1].buffersize=total_size;
                printf("Buffer0 at location %p has size %d\n\r", buffer0, total_size);
                printf("Buffer1 at location %p has size %d\n\r", buffer1, total_size);
                DEBUGPORT(33);                                                  /*virtual debug port*/
           }

           else{
             if (buffer0==NULL || buffer1==NULL){                               /*if buffer is not initialized, free the memory*/
                    free(buffer0);
                    free(buffer1);
                    isFlag=0;
                    puts("FAILING HERE");
             }
             puts("buffer0 & buffer1 not initialized\n\r");
           }
        }
    }
    else{
        puts("<<Enter command for operation>>\n\r");
        getstr(character);
        numOfCharactersReceived++;
         if ((character[0] >= 'A') && (character[0] <= 'Z')){                               /*if storage characters are received*/
            puts("storage character entered\n\r");
            if (buffer0ptr<total_size){
                buffer0[buffer0ptr]=character[0];                                           /*hold the storage character in buffer0*/
                buffer0ptr++;                                                               /*increment buffer0 pointer and current size*/
                buffer0CurrentSize++;
            }
            else{
                puts("no space in buffer0");                                                /*storage limit reached in buffer0*/
            }
            printf_small("storage character received= %c \n\r", character[0]);
         }

         else if(character[0]=='+'){                                    /*condition to create new buffer*/
         puts("+ Symbol received \n\r");
         puts("Enter no of bytes between 30 & 300\n\r");
         getstr(newBuffersize);
         newbuffersizeint=atoi(newBuffersize);                          /*converts the received buffer size to int*/
         DEBUGPORT(44);                                                 /*virtual debug port*/
         if (newbuffersizeint>29 && newbuffersizeint<301){
            if (newBufferscount<50){
                    newbuffers[newBufferscount]=malloc(newbuffersizeint);       /*malloc new buffers array with received size */
                if (newbuffers[newBufferscount]!=NULL){
                    printf("new buffer%d at location %p has size %d\n\r",(newBufferscount+2), newbuffers[newBufferscount], newbuffersizeint);
                    heap[newBufferscount+2].buffernumber=newBufferscount+2;
                    heap[newBufferscount+2].buffersize=newbuffersizeint;                        /*hold the buffer information in heap array structure*/
                    heap[newBufferscount+2].bufferStartaddress=newbuffers[newBufferscount];
                    newBufferscount++;                                    /*increment buffers count*/
                }
            }
            else{
                puts("Allocation limit reached\n\r");
            }
         }
         else {
            puts("Enter buffer size between 30 & 300\n\r");                         /*requests to enter appropriate size*/
         }
         }

         else if(character[0]=='-'){                                       /*condition to delete buffer*/
            puts("- Symbol received \n\r");
            puts("Enter the buffer number to be deleted \n\r");
            getstr(deleteBufferNumber);
            deleteBufferNumberint=atoi(deleteBufferNumber);

            if(deleteBufferNumberint==0){
                puts("Cannot delete buffer0 \n\r");
            }

            free(heap[deleteBufferNumberint].bufferStartaddress);           /*free the deleted buffer start address*/
            heap[deleteBufferNumberint].buffersize=0;                       /*clear out information held in heap*/
            heap[deleteBufferNumberint].buffernumber=0;
            heap[deleteBufferNumberint].bufferStartaddress=NULL;
            printf("Size of deleted Buffer %d", heap[deleteBufferNumberint].buffersize);
            printf("Deleted the buffer %d \n\r", deleteBufferNumberint);
         }

         else if(character[0]=='?'){                                            /*requests to buffer information*/
            puts("? Symbol received \n\r");
            printf("Total number of characters received since last ?= %d \n\r", numOfCharactersReceived);
            printf("--------------------Buffer0 details------------------------\n\r");
            printf("Buffer number= %d \n\r", heap[0].buffernumber);                                     /*prints buffer0 information*/
            printf("Buffer start address= %p \n\r", heap[0].bufferStartaddress);
            printf("Buffer end address= %p \n\r", heap[0].bufferStartaddress+heap[0].buffersize/2);
            printf("Buffer size= %d \n\r", heap[0].buffersize);
            printf("Number of storage characters in buffer0= %d \n\r", buffer0CurrentSize);
            printf("Amount of free space in buffer0= %d \n\r", (heap[0].buffersize-buffer0CurrentSize));


            for (int i=1; i<30; i++){
                if(heap[i].buffersize!=0){
                    printf("----------------------Buffer %d details ------------------------\n\r", heap[i].buffernumber);
                    printf("Buffer number= %d \n\r", heap[i].buffernumber);                                     /*prints next buffers information*/
                    printf("Buffer start address= %p \n\r", heap[i].bufferStartaddress);
                    printf("Buffer size= %d \n\r", heap[i].buffersize);
                    printf("Buffer end address= %p \n\r", heap[i].bufferStartaddress+heap[i].buffersize/2);
                }
            }
            puts("**********Storage characters at Buffer0:**********\r");
            for (int i=0; i< buffer0CurrentSize; i++){                                  /*prints storage characters in buffer0*/
                if(i%15==0 && i!=0){                                                    /*prints 32 ASCII characters per line*/
                    printf("%d\n\r", heap[0].bufferStartaddress[i]);
                }
                else{
                    printf("%d ", heap[0].bufferStartaddress[i]);
                }
            }
            puts("\n\r");
            for (int i=0; i< heap[0].buffersize; i++){
                heap[0].bufferStartaddress[i]=0;                            /*clears out buffer0*/
            }
            buffer0ptr=0;                                                   /*initializes buffer0 to start*/
            buffer0CurrentSize=0;
            numOfCharactersReceived=0;
         }
         else if (character[0]=='=') {                                      /*request to print hexadecimal values of storage characters in buffer0*/
            puts("= Symbol received \n\r");
            puts("Hexadecimal values of storage characters at Buffer0 \n\r");
            hexDump(buffer0, buffer0CurrentSize*2, 32);
            puts("\n\r");
         }
         else if (character[0]=='@'){                                       /*request to free all buffers*/
            puts("@ Symbol received \n\r");
            puts("Freeing all buffers \n\r");

            for(int i=0; i<30; i++){
                if(heap[i].bufferStartaddress!=NULL){
                    free(heap[i].bufferStartaddress);                       /*free all buffers start addresses*/
                    heap[i].buffernumber=0;                                 /*clearing out buffer information on heap*/
                    heap[i].buffersize=0;
                    heap[i].bufferStartaddress=NULL;
                }
            }

            for (int i=0; i<buffer0CurrentSize; i++){
                heap[0].bufferStartaddress[i]=0;                            /*clearing out storage characters in buffer0*/
            }
            buffer0CurrentSize=0;
            buffer0ptr=0;
            newBufferscount=0;
            isFlag=0;                                                       /*starts the program again*/
        }

         else {
            puts("Command symbol received \n\r");                           /*echoes any other characters received*/
            printf("Command character= %c \n\r", character[0]);
         }
    }
}
}

void dataout(uint8_t v){
 uint8_t __at (0xF000) debug_address;
debug_address=v;
//printf("dataout function is wokring");
}

void serial_init(void){
    TMOD=0x20;
    TH1=0xFD;
    SCON=0x50;
    TR1=1;
    TI=1;
}

void hexDump (const void * addr, const int len, int perLine) {
    int i;
    unsigned char buff[17];
    const unsigned char * pc = (const unsigned char *)addr;

    for (i = 0; i < len; i+=2) {
        if ((i % perLine) == 0) {
            if (i != 0) printf ("  %s\n\r", buff);
            printf ("  %04x ", i);
        }
        printf (" %02x", pc[i]);
    }
    while ((i % perLine) != 0) {
        printf ("   ");
        i++;
    }
 //   printf ("  %s\n", buff);
}


int putchar (int c)
{
    while (!TI);
    while (TI == 0);
    while ((SCON & 0x02) == 0);

    SBUF = c;           // load serial port with transmit value
    TI = 0;             // clear TI flag

    return c;
}

int getchar (void)
{
    while (!RI);
    while ((SCON & 0x01) == 0);
    while (RI == 0);

    RI = 0;                         // clear RI flag
    return SBUF;                    // return character from SBUF
}

int putstr (char *s)
{
    int i = 0;
    while (*s){            // output characters until NULL found
        putchar(*s++);
        i++;
    }
    return i+1;
}

int getstr(char *a)
{

    int i = 0;
    do{
        *a = getchar();
        i++;
    }while(*a++ != '\r');

    *a = '\0';
    return i+1;
}
