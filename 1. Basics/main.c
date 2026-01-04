// Basics - 4
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void) 
{
    int var;
    var = 9;
    printf("%d\n", var);
    printf("%d\n", sum(10,10));
    return 0;
}

// Keywords in C

// char, double, float, int, long, short, signed, unsigned, void "Data Type"
// sizeof, typedef, return, goto "Operator & Utility"
// if, else, switch, case, default, for, while, do, break, continue "Control Flow"
// auto, register, extern, static "Storage Class"
// const, volatile "Type Qualifiers"
// union, struct, enum "User Defined Types"