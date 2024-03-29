/*
 * File:   common.h
 * Author: roger
 *
 * Created on 2015年9月28日, 下午10:11
 */

#ifndef COMMON_H
#define COMMON_H


/** Define function prototype**/

void testArray(void);


/**
 * chapter2.c
 */
void printMyName(void);
void printPersonalInfo(void);
void print4th(void);
void printToes(void);
void printSmile(int num);
void one_three(void);
void print1(void);

/*
 * chapter3-rhodium.c
 */
void testInt(void) ;
void printBase(void) ;
void printTooBig(void) ;
void printNotPrintChar(void) ;
void printCharCode(void) ;
void printAltName(void);
void printTooBig2(void);
void floatErr(void);
void printTypeSize(void);
void printEscape(void);
void testIntOverflow(void);
void printDataType(void);
void printSomeType(void);
void printEnterChar(void);
void testFloatOverflow(void);

/*
 *  chapter4.c file
 */
void testTalkBack(void);
void testPraise1(void);
void testPraise2(void);
void testConstant(void);
void testSystemPredefinedConstant(void);
void testFormatModifier(void);
void testPizza(void);
void testConstantInLimitsHeader(void);
void testDefines(void);





#ifdef __cplusplus
extern "C" {
#endif

/* do something...*/


#ifdef __cplusplus
}
#endif

#endif /* COMMON_H */

