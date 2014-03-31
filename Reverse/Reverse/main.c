//
//  main.c
//  Reverse
//
//  Created by Vaughn Clayton on 4/2/13.
//  Copyright (c) 2013 Vaughn Clayton. All rights reserved.
//

#include <stdio.h>
int main()
{
    int count,last,num[10];
    int num2[10];
    last=9;
    for (count=0;count<10;count++)
    {
        printf("Enter a number\n");
        scanf("%d",&num[count]);
    }
    for (count=0; count<10; count++)
    {
        num2[count]=num[last];count++;
        last=last+1;
    }
    printf("array\n");
    for (count=0; count<10; count++)
    {
        printf("%d",num2[count]);
    }
    getchar();
    getchar();
}