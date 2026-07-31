#include<stdio.h>
#include "lexer.h"//header file
int main()
{
    FILE *fp;
    fp = fopen("input.txt","r");
    if(fp == NULL)
    {
        printf("File not found\n");
        return 0;

    }
    lexical_analyzer(fp);//function call
    fclose(fp);
    return 0;
}