/*
 * File:   main.c
 * Author: roger
 *
 * Created on 2015年9月28日, 下午8:06
 */

#include <stdio.h>
#include <stdlib.h>

#include "common.h" // customized function declaration header file.

int main(int argc, char** argv) {
    testArray();
    
    // chapter2.c
    //printMyName();
    //printPersonalInfo();
    //print4th();
    //printToes() ;
    //printSmile(3);
    //one_three();
    
    // chapter3.c
    //testInt() ;
    //print1();
    //printBase();
    //printTooBig();
    //printNotPrintChar();
    //printCharCode();
    //printAltName();
    //printTooBig2();
    //floatErr();
    //printTypeSize();
    //printEscape();
    //testIntOverflow();
    //printDataType();
    //printSomeType();
    //printEnterChar();
    //testFloatOverflow();
    
    //chapter4.c
    //testTalkBack();
    //testPraise1();
    //testPraise2();
    //testConstant();
    //testSystemPredefinedConstant();
    //testFormatModifier();  
    //testPizza();
    //testConstantInLimitsHeader();
    testDefines();
        
    return (EXIT_SUCCESS);
}

