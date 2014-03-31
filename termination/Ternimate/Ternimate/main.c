//
//  main.c
//  Ternimate
//
//  Created by Vaughn Clayton on 4/1/13.
//  Copyright (c) 2013 Vaughn Clayton. All rights reserved.
//

#include <stdio.h>

int main()
{
    int sum,count,value;
    float avg;
    sum=count=0;
    while (value!=-99)
    {
        printf("Enter a value\n");
        scanf("%d",&value);
        sum=sum+value;
        count=count+1;
    }
    avg=sum/count;
    printf("\nThe Sum of the numbers are%d",sum);
    printf("\nThe Average of numbers are%.0f",avg);
    getchar();
    getchar();
}