//
// Created by ondrej on 10.5.18.
//

#ifndef LETTER_COUNTER_LETTERS_H
#define LETTER_COUNTER_LETTERS_H
#include <stdbool.h>

int Letter_Index(char * letters, int c,int total_letters);
bool Letter_Exists(char * letters, int c);
int Total_Letters(int * count, int  size);
int Index_of_Max(int * count, int  size);
int Index_of_Min(int * count, int  size);

#endif //LETTER_COUNTER_LETTERS_H
