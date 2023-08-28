#include <iostream>
#include "recurse_header.h"

/******************************************************************************* 
** Program Filename: recursion.cpp
** Author: Kaden ("The Kadenator") Fugate
** Date: December 4th, 2022
** Description: This program allows the user to make a recursive fractal pattern of the users choice.
** Input: number of *'s, number of whitespaces (' ')
** Output: recursive fractal pattern
********************************************************************************/

int main(){

    int chars = 0;
    int space = -1;

    check_input(chars, space); // get correct user input
    pattern(chars, space); // print the pattern

    return 0;

}



