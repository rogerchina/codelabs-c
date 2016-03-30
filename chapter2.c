/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<stdio.h>

    void printMyName(void) {
        printf("Roger Zhang\n");
        printf("Roger\n");
        printf("Zhang\n");

        printf("Roger ");
        printf("Zhang\n");
    }
    
    void printMyAddress(void) {
        printf("China Shanghai");
    }
    
    void printPersonalInfo(void){
        printMyName();
        printMyAddress();
    }
    
    // 4th topic
    void printGood(void) {
        printf("For he's a jolly good fellow!\n");
    }
    
    void printLastSentence(void) {
        printf("Which nobody can deny.");
    }
    
    void print4th(void) {
        printGood();
        printGood();
        printGood();
        
        printLastSentence();
    }
    
    // 5th
    void printToes(void) {
        int toes = 10;
        int sum = toes + toes;
        int squar = toes * toes;
        printf("toes is %d \nsum of two toes is %d \nsquar of two toes is %d \n", toes, sum, squar);
    }
    
    
    //6th
    void printOneSmile(void) {
        printf("Smile");
    }
    
    void printSmile(int num) {
        for(int i=0; i<num; i++) {
            for(int j=i; j<num; j++) {
                printOneSmile();
            }
            printf("\n");
        }
    }
    
    //7th
    void one(void) {
        printf("one\n");
    }
    
    void two(void) {
        printf("two\n");
    }
    
    void three(void) {
        printf("three\n");
    }
    
    void one_three(void) {
        printf("starting now...\n");
        one();
        two();
        three();
        printf("done!\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    