#include <stdio.h>
#include <string.h>
#ifndef __ESPL_LIB_H__
#define __ESPL_LIB_H__

char* num_to_words(unsigned int num);

#endif

int main(int argc, char* argv[])
{
    int y = 1;
    char* n;
    int i;

    while(y == 1)
    {
        printf("Please enter a number: \n");
        scanf("%d",&i);
        n = num_to_words(i);
        printf("Your Letter is: ");
        printf("%c",*n);
        printf("\n");
        printf("Do you want to enter a new number?(enter 1 for yes or 0 for no) \n");
        scanf("%d", &y);

    }
    


    return 0;
}

