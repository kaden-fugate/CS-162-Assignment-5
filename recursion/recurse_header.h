#ifndef RECURSE_HEADER_H
#define RECURSE_HEADER_H
#include <iostream>

/*********************************************************************** 
** Function: check_input()
** Description: checks to make sure that the inputs are non negative and makes
** sure num_1 is odd. If not, program will ask again
** Parameters: & num_1 so "chars" will change and & num_2 so "spaces" will change
** Pre-Conditions: none
** Post-Conditions: none
************************************************************************/

void check_input(int &num_1, int &num_2){
    
    while(true){

        if(num_1 < 0 || num_1 % 2 != 1){

            std::cout << "Please enter a number of *'s: ";
            std::cin >> num_1;

        }

        if(num_1 < 0){

            std::cout << "Please enter a positive num of *'s!\n";
            continue;

        }
        else if(num_1 % 2 != 1){

            std::cout << "Please enter an odd num of *'s!\n";
            continue;

        }
        
        if(num_2 < 0){

            std::cout << "Please enter a number of whitespaces: ";
            std::cin >> num_2;
            
        }

        if(num_2 < 0){

            std::cout << "Please enter a non negative num of whitespaces!\n";
            continue;

        }

        if((num_1 > 0 && num_1 % 2 != 0) && (num_2 >= 0)){

            break;

        }
        
        

    }

}

/*********************************************************************** 
** Function: pattern(int, int)
** Description: this is a function that recursively calls itself.
** the function calls itself until pattern is equal to one (base case).
** after this, the num of whitespace is printed and the num of chars are printed.
** Parameters: number of chars, number of whitespaces
** Pre-Conditions: n must be positive and odd, col must be non negative
** Post-Conditions: none
************************************************************************/

void pattern(int n, int col){

    if( (n - 2) >= 1 ){

        pattern( (n - 2), col + 1);

    }

    for(int i = 0; i < n + col; i++){

        if(i < col){

            std::cout << "  ";

        }
        else{

            std::cout << "* ";

        }

    }
    std::cout << "\n";

    if( (n - 2) >= 1 ){

        pattern( (n - 2), col + 1);

    }

}

#endif