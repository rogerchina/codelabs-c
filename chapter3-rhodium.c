/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rhodium.c
 * Author: roger
 *
 * Created on 2015年9月23日, 上午8:51
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<inttypes.h>
#include<limits.h>

#define DENSITY 62.4

void firstProgram() {
    float weight = 0.0;
    float value = 0.0;

    printf("Are you worth your weight in rhodium? \n");
    printf("Let's check it out. \n");
    printf("Please enter your weight in pounds:");

    scanf("%f", &weight);
    value = 770 * weight * 14.5833;

    printf("Your weight in pounds is worth $%.2f. \n", value);
    printf("You are easily worth that. If rhodium drop. \n");
    printf("Eat more to maintain your value. \n");
}

void testTypesize() {

    printf("(char) type has a size of  %lu bytes. \n", sizeof(char));
    printf("(short) type has a size of  %lu bytes. \n", sizeof(short));
    printf("(int) type has a size of  %lu bytes. \n", sizeof(int));
    printf("(long) type has a size of  %lu bytes. \n", sizeof(long));
    printf("(long long) type has a size of  %lu bytes. \n", sizeof(long long));
    printf("(float) type has a size of  %lu bytes. \n", sizeof(float));
    printf("(double) type has a size of  %lu bytes. \n", sizeof(double));
    printf("(long double) type has a size of  %lu bytes. \n", sizeof(long double));
}

void testBadCountOfParameter() {
    int f = 4;
    int g = 5;
    float h = 5.0f;

    printf("%d \n", f);
    printf("%d %d \n", f, g);
    printf("%d %f \n", g, h);
}

void testEscape() {
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee\n");
}

void testInt(void) {
    int n = 1;
    printf("int n has %ld bytes\n", sizeof(n));
    printf("int has %ld bytes\n", sizeof(int));
    
    long int m = 1;
    printf("long int n has %ld bytes\n", sizeof(m));
    printf("long int has %ld bytes\n", sizeof(long int));
    
    long long int c = 1;
    printf("long long int n has %ld bytes\n", sizeof(c));
    printf("long long int has %ld bytes\n", sizeof(long long int));
}

void print1(void) {
    int ten = 10;
    int two = 2;
    printf("doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten-two);
    printf("doing it wrong: ");
    printf("%d minus %d is %d\n", ten);
}

void  printBase(void) {
    int n = 8;
    printf("decimal = %d; octal = %o; hex = %x;\n", n, n, n);
    printf("decimal = %d; octal = %#o; hex = %#x\n", n, n, n);
}

void printTooBig(void) {
    int i = 2147483647;
    unsigned int j = 4294967295;
    
    printf("%d  %d  %d\n", i, i+1, i+2);
    printf("%u  %u  %u\n", j, j+1, j+2);
}

void printNotPrintChar(void) {
    char c = '\007';
    printf("%c\n", c);
    
    printf("Hello! \007 \n");
}

void printCharCode(void) {
    char ch;
    printf("Please enter a character: \n");
    scanf("%c", &ch);
    printf("the code for %c is %d\n", ch, ch);
}
