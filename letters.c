//
// Created by ondrej on 10.5.18.
//

#include <stdbool.h>
#include "letters.h"

int Letter_Index(char * letters, int c, int total_letters) {
    int index = 0;
    while(index < total_letters && letters[index] != c) {
        index++;
    }

    return index;

}

bool Letter_Exists(char * letters, int c)
{
    int i = 0;
    while(letters[i] && letters[i] != c) {
        i++;
    }
    if(letters[i]) {
        return true;
    }
    return false;
}


int Total_Letters(int * count, int  size) {
    int i = 0;
    int total = 0;

    while(i < size) {
        if(count[i] != 0) {
            total = total + count[i];
        }
        i++;
    }
    return total;
}

int Index_of_Max(int * count, int  size) {
    int i = 0;
    int max = 0;
    while(i < size) {
        if(count[max] < count[i]) {
            max = i;
        }
        i++;
    }
    return max;
}

int Index_of_Min(int * count, int size) {
    int i = 0;
    int min = 0;
    while(i < size) {
        if(count[min] > count[i]) {
            min = i;
        }
        i++;
    }
    return min;
}

