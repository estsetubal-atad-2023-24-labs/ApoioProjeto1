/**
 * @file example.h
 * @author your name (you@domain.com)
 * @brief Module example. Header file containing type definition for Example and related functions.
 * @version 0.1
 * @date 2024-04-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#define MAX_LEN 100

typedef struct example {
    int member1;
    char member2[MAX_LEN];
} Example;

/**
 * @brief Creates an instance of Example
 * 
 * @param value1 [in] the value for member1
 * @param value2  [in] the value for member2
 * @return a new Example instance initialized with the specified parameters 
 */
Example exampleCreate(int value1, char value2[]);

/**
 * @brief Prints an instance of Example to the standard output
 * 
 * @param ex the instance to print
 */
void examplePrint(Example ex);