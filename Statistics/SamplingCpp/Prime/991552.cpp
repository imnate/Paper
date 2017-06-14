//
//  main.cpp
//  PrimeNumber
//
//  Created by Ali on 3/18/14.
//  Copyright (c) 2014 Ali. All rights reserved.
//

#include <iostream>

using std :: cout;
using std :: cin ;
using std :: endl;

int main ()
{
    
    int PrimeNumber;
    int i ;
    int j;
    
    cout << "Please input an integer for listing all the primes less than the integer:";
    cin >>PrimeNumber;
    
    for (i = 2; i <= PrimeNumber; i++) {
        
        for (j = 2; j <= i; j++) {
            
            if (i % j == 0) {
                break;
            }
           
        }
        if (i == j){
            cout << i <<" ";
            
           
        }
     
    }

   cout << "\n";
    
    
    return 0;
}