/*
Excercise 1-9 : Write a program to copy its input to output, replacing each string of one or more blanks by a single blank.
*/

#include<stdio.h>

int main()
{

    int c,prevc=0;

    while((c=getchar())!=EOF)
    {
        if(!(prevc==' ' && c==' ')){
            putchar(c);
        }
        prevc=c;
    }

    return 0;
}
