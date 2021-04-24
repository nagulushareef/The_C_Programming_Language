/* Excercise 1-13 : Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging*/

#include<stdio.h>

#define MAXWORDLENGTH 20

int maximumFunc(int[],int);
int main()
{
    int c,i,j=0;

    int wordLength=0, wordLengthArray[MAXWORDLENGTH],wordLengthArrayNew[MAXWORDLENGTH],wordLengthArrayMax,wordLengthArrayMaxNew;
    for(i=0;i<MAXWORDLENGTH;i++)
    {
        wordLengthArray[i]=0;
    }
    while((c=getchar())!=EOF)
    {
            if(c==' ' || c=='\t' || c=='\n')
            {
                if(wordLength>0  && wordLength<MAXWORDLENGTH)
                {
                    //printf("WordLength=%d\n",wordLength);
                    ++wordLengthArray[wordLength];
                }
                wordLength=0;
            }
            else
                ++wordLength;

    }

    for(i=0;i<MAXWORDLENGTH;i++)
    {
        printf("%d  ",wordLengthArray[i]);
    }

    printf("\nHorizontal Histogram of length of words\n");
    printf("-----------------------------------------\n");
    for(i=1;i<MAXWORDLENGTH;i++)
    {
        if(wordLengthArray[i]>0)
        {
            printf("wordLength %d\t: ",i);
            for(j=0;j<wordLengthArray[i];j++)
            {
                printf("*");
            }
            printf("\n");
        }

    }

    printf("\nVertical Histogram of length of words\n");
    printf("-----------------------------------------\n");

    for(i=0;i<MAXWORDLENGTH;i++)
        wordLengthArrayNew[i]=wordLengthArray[i];


    wordLengthArrayMax=maximumFunc(wordLengthArray,MAXWORDLENGTH);
    //printf("\nwordLengthArrayMax:%d\n",wordLengthArrayMax);

    wordLengthArrayMaxNew=wordLengthArrayMax;
    for(i=0;i<wordLengthArrayMax;i++)
    {
        for(j=0;j<MAXWORDLENGTH;j++)
        {
            if(wordLengthArray[j]>0)
            {
                if(wordLengthArray[j]==wordLengthArrayMaxNew)
                {
                    printf(" * ");
                    wordLengthArray[j]=wordLengthArray[j]-1;
                }
                else
                    printf("   ");
            }
        }
        wordLengthArrayMaxNew=maximumFunc(wordLengthArray,MAXWORDLENGTH);
        //printf("wordLengthArrayMax:%d\n",wordLengthArrayMax);
        printf("\n");
    }

    for(j=0;j<MAXWORDLENGTH;j++)
    {
        if(wordLengthArrayNew[j]>0)
        {
            printf(" %d ",j);
        }
    }
    printf("\n");

    return 0;
}

int maximumFunc(int x[],int len)
{
    int i=0, max=0;
    for(i=0;i<len;i++)
    {
         if(x[i]>max)
            max=x[i];
    }
    return max;
}
