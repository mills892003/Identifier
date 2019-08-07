//  Created by Milan Patel on 2/24/19.
//  Copyright © 2019 Milan Patel. All rights reserved.
//
//  This is a program that takes in identifier names and returns back the amount of underscores and capital letters used

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 1000

void count(int * num_, int * num_upper);

int main(void)
{
    int a = 0;
    int b = 0;
    int *num_ = &a;
    int *num_upper =&b;
    
    count(num_, num_upper);     //Call count function
    
    printf("\nNumber of underscores in this identifier is: %d" , *num_);
    printf("\nNumber of uppercase letters in this identifier is: %d" , *num_upper);
    
    return 0;
}

 void count(int * num_, int * num_upper)
{
    *num_ = 0;
    *num_upper = 0;
    int i = 0;      // underscore counter
    int j = 0;      // uppercase counter
    int charcount = 0;
    
    char identifier[50];                       //Declare identifier
    printf("Enter an identifier: ");
    while (identifier[charcount] != '\n')
    {                                       //User input identifier
        identifier[++charcount] = getchar();
        if(identifier[charcount] == '_')
        {
            i++;
        }
        if (identifier[charcount] >= 'A' && identifier[charcount] <= 'Z')
        {
            j++;
        }
    }
    identifier[++charcount]='\0';
    
    printf("Your identifier is: ");
    int k = 0;
    for(k=0; k<charcount; ++k)
    {
        putchar(identifier[k+1]);
    }
    
    *num_ = i;
    *num_upper = j;
}
