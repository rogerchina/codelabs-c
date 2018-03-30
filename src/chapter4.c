/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   chapter4.c
 * Author: roger
 *
 * Created on 2015年9月27日, 上午8:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <inttypes.h>
#define DENSITY 62.4
#define PRAISE "What a super marvelous name!"
#define PI 3.14159

void testTalkBack(void) {
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi, what's your first name? \n");
    scanf("%s", name);
    printf("%s, what's your weight in pound? \n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cube feet. \n", name, volume);
    printf("Also, your first name has %d letters.\n", letters);
    printf("and we have %d bytes to store it in. \n", size);
}

#define PRAISE2 "What a super marvelous name!"

void testPraise2(void) {
    char name[40];
    printf("What's your name? \n");
    scanf("%s", name);
    printf("Hello, %s, %s \n", name, PRAISE);

    printf("name array string length is %ld, storage space is %ld.\n", strlen(name), sizeof(name));
    printf("PRAISE string length is %ld, storage space is %ld.\n", strlen(PRAISE), sizeof(PRAISE));
}

void testPraise1(void) {
    printf("charactor x=%c, charactor string x=%s \n", 'x',"x");
    printf("char x has %ld bits, char string x has %ld bits. \n", sizeof('x'), sizeof("x"));
}

void testConstant(void) {
    float area, circum, radius;

    printf("What is the radius of the pizza? \n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("%ld\n", sizeof(2.0f));
    printf("%ld, %ld\n", sizeof (float), sizeof(double));
    printf("circum data type is float or double? type size is %ld.\n", sizeof(circum));
    printf("Your basic pizza parameter as follow: \n");
    printf("cirum is = %1.2f, area = %1.2f \n", circum, area);
}

/**
 * test some common constant in limits.h and float.h header file.
 */
void testSystemPredefinedConstant(void) {
    printf("Max int value on this system is %d \n", INT_MAX);
    printf("There are %d bits in one char.\n", CHAR_BIT);
    printf("Long long min value is %lld.\n", LLONG_MIN);
    printf("Max double value is %e.\n", DBL_MAX);
    printf("Float has %d valid digits.\n", FLT_DIG);
}

#define NAME "roger"

void testFormatModifier(void) {
    printf("*%s*\n", NAME);
    printf("*%-10s*\n", NAME);
    printf("*%10s*\n", NAME);
    printf("*%2s*\n", NAME);

    float num = -10.0;
    printf("%+6.2f \n", num);
    printf("% 6.2f \n", num);

    int n = 20;
    printf("%#o\n", n);
    printf("%#x\n", n);

    float m = -30.1;
    printf("*%#8.0f* \n", m);
    printf("%+#10.3f \n", m);
    printf("%0#10.3f \n", m);
    
    getchar();
}

void testFloat(void){
    float a;
    _Bool x;
    uint32_t num;
}

#define PI 3.14159
void testPizza(void) {
    float area, circum, radius;
    printf("What is the radius of your pizzas?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters as follows:\n");
    printf("circum is %1.2f, ares is %1.2f\n", circum, area);
}

void testConstantInLimitsHeader(void) {
    printf("Maximum int value on this system = %d\n", INT_MAX);
    printf("Minimum int value on this system = %d\n", INT_MIN);
    
    printf("Maximum short int value on this system = %d\n", SHRT_MAX);
    printf("Minimum short int value on this system = %d\n", SHRT_MIN);
    
    printf("Maximum long int value on this system = %ld\n", LONG_MAX);
    printf("Minimum long int value on this system = %ld\n", LONG_MIN);
}

void testDefines(void) {
    printf("Some number limits for this system: \n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest unsigned long: %lld\n", LLONG_MIN);
    printf("One byte = %d on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
}

