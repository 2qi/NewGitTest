/*
 * Program to print all permutations of binary and decimal numbers for 
 * given number of digits 
 */
#include <stdio.h>
#include <iostream>
#include <string>
//#include "vector.h"

using namespace std;

void printbinary(int,string pre= "");
void printDecimal(int,string pre= "");
int main () {
printf("helloji: \n");
//printbinary(3);
printDecimal(2);
}

void printbinary(int digits,string pre ){
        if(digits == 0){
                printf("%s\n",pre.c_str());
                //printf("%s",pre);
                //cout << pre << endl;
        } else {
                //printf("pre");
                //printbinary(digits-1,pre + "0");
                printbinary(digits-1,"0" + pre );
                //printf("1");
                //printbinary(digits-1,pre + "1");
                printbinary(digits-1,"1" + pre );
        }
}

void printDecimal(int digits, string pre){
        if(digits == 0){
                printf("%s-",pre.c_str());
        } else {
                for(int i=0;i<10;i++){
                        printDecimal(digits-1,pre + (char)(i+48));
                }
                printf("\n");
        }
}