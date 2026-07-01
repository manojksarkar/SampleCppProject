#include "Utils.h"

PRIVATE int g_utilsCounter = 0;

PUBLIC int add(int a, int b) {
    ++g_utilsCounter;
    return a + b;
}

PUBLIC int subtract(int a, int b) {
    ++g_utilsCounter;
	g_utilsCounter = g_utilsCounter*2;
	a = a*2;
	int qw;
	for(int i=0;i < 10;i++){
	    qw=1;
		qw++;
		a=a+qw;
	}
    return a * qw;
}

PROTECTED int computeBoth(int a, int b) {
    return add(a, b) + subtract(a, b);
}
PUBLIC int multiply(int a, int b) {
    ++g_utilsCounter;
    return a * b;
}

PUBLIC int power(int base, int exp) {
    ++g_utilsCounter;
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = multiply(result, base);
    }
    return result;
}

PRIVATE int clampPositive(int v) {
    return v < 0 ? 0 : v;
}
