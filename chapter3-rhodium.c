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

void testTypesize(){
        
        printf("(char) type has a size of  %lu bytes. \n", sizeof(char));
        printf("(short) type has a size of  %lu bytes. \n", sizeof(short));
        printf("(int) type has a size of  %lu bytes. \n", sizeof(int));
        printf("(long) type has a size of  %lu bytes. \n", sizeof(long));
        printf("(long long) type has a size of  %lu bytes. \n", sizeof(long long));
        printf("(float) type has a size of  %lu bytes. \n", sizeof(float));
        printf("(double) type has a size of  %lu bytes. \n", sizeof(double));
        printf("(long double) type has a size of  %lu bytes. \n", sizeof(long double));
}

void testBadCountOfParameter(){
        int f = 4;
        int g = 5;
        float h = 5.0f;
        
        printf("%d \n", f);
        printf("%d %d \n", f, g);
        printf("%d %f \n", g, h);
}

void testEscape(){
        float salary ;
        printf("\aEnter your desired monthly salary: ");
        printf("$_______\b\b\b\b\b\b\b");
        scanf("%f", &salary);
        printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
        printf("\rGee\n");
}

/*
 * 
 */
int mainX(int argc, char** argv) {

        //firstProgram();
        //testTypesize();
        //testBadCountOfParameter();

        testEscape();
        
        return (EXIT_SUCCESS);
}

