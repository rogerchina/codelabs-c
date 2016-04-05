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

void printAltName(void) {
    int16_t me16;
    me16 = 4593;
    printf("First assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inittypes.h: ");
    printf("me16 = %" PRId16 "\n", me16);
}

void printTooBig2(void) {
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);
}

void floatErr(void) {
    float a, b, c;
    //c = 2.0e20;
    c = 2.0e4;
    b = c + 1.0;
    a = b - c;
    printf("%f \n",  a);
}

void printTypeSize(void) {
    printf("Type char has a size %lu bytes. \n", sizeof(char));
    printf("Type short has a size %lu bytes. \n", sizeof(short));
    printf("Type int has a size %lu bytes. \n", sizeof(int));
    printf("Type long has a size %lu bytes. \n", sizeof(long));
    printf("Type long long has a size %lu bytes. \n", sizeof(long long));
    
    printf("Type float has a size %lu bytes. \n", sizeof(float));
    printf("Type double has a size %lu bytes. \n", sizeof(double));
}

void printEscape(void) {
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee\n");
}

void testIntOverflow(void) {
    
    // for unsigned
    //unsigned char ch = 255;
    // for signed
    signed char ch = 127;
    ch += 1;
    printf("ch + 1 = %d", ch);
}

void testFloatOverflow(void) {
    //overflow
    float toobig = 3.4e38 * 100.0f;
    printf("toobig = %e\n", toobig);
    
    //underflow
    //TODO: 
}

void printDataType(void) {
    //12
    int a1 = 12;
    short a2 = 12;
    char a3 = 12;
    printf("a1=%d, a2=%hd, a3=%d\n", a1, a2, a3);
    
    //0x3
    int b1 = 0x3;
    printf("b1=%#x\n", b1);
    
    //'C'
    char c1 = 'C' ;
    printf("c1 = %c\n", c1);
    
    //2.34e07
    float d = 2.34e07;
    printf("d = %.2e\n", d);
    
    //'\040' --> 32
    char e = '\040';
    printf("e = %c\n", e);
    
    //7.0
    float f = 7.0;
    double f1 = 7.0;
    printf("f = %.1f\n", f);
    printf("f1 = %.1f\n", f1);
    
    //6L
    long int g = 812L;
    printf("g = %ld\n", g);
    //printf("g = %.1f\n", g); //error formate identifier
}

void printSomeType(void) {
    int imate = 2;
    long shot = 53456;
    char grade = 'A';
    float log = 2.71828;
    printf("The odds against the %d were %ld to 1.\n", imate, shot);
    printf("A score of %.5f is not an %c grade. \n", log, grade);
}

void printEnterChar(void) {
    // method-1
    char ch = '\n';
    printf("have a look at effect: %c", ch);
    printf("hello");
    
    printf("\n");
    
    // method-2
    char ch2 = 10;
    printf("have a look at effect: %c", ch2);
    printf("hello");
    
    printf("\n");
    
    // method-3
    char ch3 = '\012';
    printf("have a look at effect: %c", ch3);
    printf("hello");
    
    printf("\n");
    
    // method-4
    char ch4 = '\xA';
    printf("have a look at effect: %c", ch4);
    printf("hello");
}