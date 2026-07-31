#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "lexer.h"

char *keywords[] = {"int","float","char","if","else","while","for","return"};

int is_keyword(char word[])
{
    int i;

    for(i=0;i<8;i++)
    {
        if(strcmp(word,keywords[i])==0)
        {
            return 1;
        }
    }

    return 0;
}

void lexical_analyzer(FILE *fp)
{
    char ch;
    char word[50];
    int i=0;

    while((ch=fgetc(fp))!=EOF)
    {
        if(isalpha(ch))   // identifier or keyword
        {
            word[i++]=ch;

            while(isalpha(ch=fgetc(fp)))
            {
                word[i++]=ch;
            }

            word[i]='\0';
            i=0;

            if(is_keyword(word))
                printf("Keyword : %s\n",word);
            else
                printf("Identifier : %s\n",word);
        }

        else if(isdigit(ch))  // numbers
        {
            printf("Constant : %c\n",ch);
        }

        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='=')
        {
            printf("Operator : %c\n",ch);
        }

        else if(ch==';'||ch=='('||ch==')'||ch=='{'||ch=='}')
        {
            printf("Symbol : %c\n",ch);
        }
    }
}