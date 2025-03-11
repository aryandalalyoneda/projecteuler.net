//
//  projecteuler1.cpp
//  projecteuler.net
//
//  Problem 1
//  Multiples of 3 or 5
//
//  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//  The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
//
//  Created by Aryan Dalal on 3/10/25.
//  https://github.com/aryandalalyoneda
//

#include <iostream>

using namespace std;

//Function Declaration
int SumOfMultiples3And5(int max_n);

int main(int argc, const char * argv[]) {
    
    //Main Routine
    cout << SumOfMultiples3And5(1000) << endl;
    
}

//Function
int SumOfMultiples3And5(int max_n){

    int initialSum = 0;

    for (int i = 1; i < max_n; i++){

        if((i % 3 == 0) || (i % 5 == 0)){
            initialSum += i;
        }

    }

    return initialSum;
}

