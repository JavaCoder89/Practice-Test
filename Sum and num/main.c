//
//  main.c
//  Sum and num
//
//  Created by Vaughn Clayton on 4/1/13.
//  Copyright (c) 2013 Vaughn Clayton. All rights reserved.
//

#include <stdio.h>

int main()
{
    int numbers[10],sum,count,value;
    sum=count=0;
    printf("Enter a value\n");
    scanf("%d",&value);
    while(value!=-99)
    {
        numbers[count]=value;
        sum=sum+numbers[count];
        printf("Enter a value\n");
        scanf("%d",&value);
    }
    printf("\nsum=,%d",sum);
    getchar();
    getchar();
    return 0;
}
