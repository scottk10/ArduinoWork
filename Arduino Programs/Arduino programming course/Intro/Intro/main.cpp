//
//  main.cpp
//  Grader program
//
//  Created by Scott Kenny on 2/15/18.
//  Copyright © 2018 Scott Kenny. All rights reserved.
//

#include <stdio.h> int main() { int i, n=6, t1 = 0, t2 = 1, nextTerm; printf("Fibonacci Series: "); for (i = 1; i <= n; ++i) { printf("%d, ", t1); nextTerm = t1 + t2; t1 = t2; t2 = nextTerm; } }
