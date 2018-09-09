//
//  main.cpp
//  Fibonacci Sequence Calculator
//
//  Created by Scott Kenny on 2/15/18.
//  Copyright © 2018 Scott Kenny. All rights reserved.
//

#include <stdio.h>

int main()  {
    
    int i;
    int intFirst = 0;
    int intSecond = 1;
    int intNext;
    
    printf("Fibonacci sequence: ");
    
    for (i = 1; i <= 6; ++i)
    {
        printf("%d, ", intFirst);
        intNext= intFirst + intSecond;
        intFirst = intSecond;
        intSecond = intNext;
    }
    return 0;
}
