//
// Created by ondrej on 10.5.18.
//

#ifndef LETTER_COUNTER_LETTERS_H
#define LETTER_COUNTER_LETTERS_H
#include <stdbool.h>
/**
 * Vrací index hledaného znaku v poly
 * Funkce prochází celý array funkcí dokud nenalezne hledaný znak nebo
 * dokud nedojde na maximální index daný číslem total_letters.
 * @param letters array písmen ve kterých se má znak hledat
 * @param c hledané písmeno
 * @param total_letters celkový počet písmen v array písmen
 * @return int vrací index najitého písmena
 */
int Letter_Index(char * letters, int c,int total_letters);
/**
 * Funkce vrací zda písmeno existuje v array písmen
 *
 * @param letters
 * @param c
 * @return bool
 */
bool Letter_Exists(char * letters, int c);
/**
 * Vrací součet počtu písmen v array count
 * @param count
 * @param size
 * @return
 */
int Total_Letters(int * count, int  size);
/**
 * Vrací index nejvyšší hodnoty v array count
 * @param count
 * @param size
 * @return
 */
int Index_of_Max(int * count, int  size);
/**
 * Vrací index nejnižší hodnoty v array count
 * @param count
 * @param size
 * @return
 */
int Index_of_Min(int * count, int  size);

#endif //LETTER_COUNTER_LETTERS_H
