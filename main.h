#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct ConversionSpec - Represents a conversion specifier for printf
 * @specifier: A char pointer indicating the specifier
 * @conversionFunction: The function associated with the conversion specifier
 */

typedef struct 
{
	char *specifier;
	int (*conversionFunction)();
} cs_t;

int *_copyString(char *dest, char *src);
int _printPtrVal(va_list val);
int _printUSignedDec(va_list args);
int _printHexDecExtra(unsigned long int num);
int _stringLenConst(const char *s);
int _printHEXdecExtra(unsigned int num);
int _printExclStr(va_list val);
int _printUpCaseHex(va_list val);
int _printLowCaseHex(va_list val);
int _printOctVal(va_list val);
int _printBinVal(va_list val);
int _reverseString(va_list args);
int _printRot13(va_list args);
int _printInt(va_list args);
int _printDec(va_list args);
int _lenstr(char *s);
int _printPercSign(void);
int _printChar(va_list val);
int _printStr(va_list val);
int _printf(const char *format, ...);

#endif
