/**
 * @file example.c
 * @author your name (you@domain.com)
 * @brief Module example. Source file containing the implementation of functions.
 * @version 0.1
 * @date 2024-04-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <string.h>
#include "example.h"

Example exampleCreate(int value1, char value2[]) {
    Example ex;
    ex.member1 = value1;
    strcpy(ex.member2, value2);
    return ex;
}

void examplePrint(Example ex) {
    printf("Member 1: %d | Member 2: %s \n", ex.member1, ex.member2);
}