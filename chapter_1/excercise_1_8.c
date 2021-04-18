/*Excercise 1-8 : Write a program to count balnks, tabs and newlines.*/

#include<stdio.h>

int main()
{
    int nblanks=0,ntabs=0,nlines=0,c;

    while((c=getchar())!=EOF)
        if(c=='\n')
            nlines++;
        else if (c=='\t')
            ntabs++;
        else if(c==' ')
            nblanks++;

    printf("number of blanks : %d\n",nblanks);
    printf("number of tabs : %d\n",ntabs);
    printf("number of lines : %d\n",nlines);
    return 0;
}
