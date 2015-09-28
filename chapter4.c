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
#include<string.h>
#define DENSITY 62.4
#define PRAISE "What a super marvelous name!"

void testTalkBack(void){
        float weight, volume;
        int size, letters;
        char name[40];
        
        printf("Hi, what's your first name? \n");
        scanf("%s", name);
        printf("%s, what's your weight in pound? \n", name);
        scanf("%f", &weight);
        size = sizeof(name);
        letters = strlen(name);
        volume = weight/DENSITY;
        printf("Well, %s, your volume is %2.2f cube feet. \n", name, volume);
        printf("Also, your first name has %d letters.\n", letters);
        printf("and we have %d bytes to store it in. \n", size  );
}

void testPraise1(void){
//        char name[40];
//        scanf("%s", name);
//        printf("Hello, %s, %s \n", name, PRAISE);
//        printf("function terminated!\n");
//        
//        printf("name array string length is %ld, storage space is %ld.\n", strlen(name), sizeof(name));
//        printf("PRAISE string length is %ld, storage space is %ld.\n", strlen(PRAISE), sizeof(PRAISE));
        printf("size_t is %ld.\n", sizeof(size_t));
        printf("long unsigned int is %ld.\n", sizeof(long unsigned int));
}
/*
 * 
 */
int main(int argc, char** argv) {
        //testTalkBack();
        testPraise1();
        return (EXIT_SUCCESS);
}

