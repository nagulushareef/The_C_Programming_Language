/*
Excercise 1-14 : Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include<stdio.h>

int main()
{
    int c=0,i=0,j=0;

    int charCounter[128];

    for(i=0;i<128;i++)
        charCounter[i]=0;

    while((c=getchar())!=EOF)
    {
        ++charCounter[c];
    }

    for(i=0;i<128;i++)
    {
        if(charCounter[i]>0)
        {
            printf("%c : ",i);
            for(j=0;j<charCounter[i];j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
