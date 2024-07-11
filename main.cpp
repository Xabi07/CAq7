#include "mbed.h"
#include "string.h"
#include <cstdio>

DigitalOut led1(LED1);
DigitalOut led2(LED2);

UnbufferedSerial pc(USBTX, USBRX);

char che;
volatile char parse = 0;
Thread th1;
Thread th2;

void thread1(){
    while(1){
	led1 = !led1;
	ThisThread::sleep_for(2s);
    }
}

void thread2(){
    while(1){
	led2 = !led2;
	ThisThread::sleep_for(5s);
    }
}	


int main(){
	ThisThread::sleep_for(1s);
	th1.start(thread1);
    th2.start(thread2);

	
	while (1){
	
	}
	
}

