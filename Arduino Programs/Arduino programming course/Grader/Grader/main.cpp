//
//  main.cpp
//  Grader
//
//  Created by Scott Kenny on 2/15/18.
//  Copyright © 2018 Scott Kenny. All rights reserved.
//

#include <stdio.h>

int main()  {

int i, t1 = 0;
int t2 = 1;
int tN;

printf("Fibonacci: ");

for (i = 1; i <= 6; ++i)
{
    printf("%d, ", t1);
    tN= t1 + t2;
    t1 = t2;
    t2 = tN;
}
return 0;
}
