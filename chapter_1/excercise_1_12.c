/*Exercise 1-12 : Write a program that prints its input one word per line.*/

#include<stdio.h>

int main()
{
    int c=0,prevChar=0;

    while((c=getchar())!=EOF)
    {
        if((c==' ' || c=='\t') && prevChar!=' ' && prevChar!='\t')
            putchar('\n');
        else if((c!=' ' &&  c!='\t'))
            putchar(c);

        prevChar=c;

    }
    return 0;
}
