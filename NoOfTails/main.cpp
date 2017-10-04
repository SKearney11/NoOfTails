//
//  main.cpp
//  NoOfTails
//
//  Calculates number for a given range.
//
//  Created by Sean Kearney on 21/09/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include <iostream>
using namespace std;
#include "library.hpp"

int main(int argc, const char * argv[]) {
    cout << numberOfDistinctTails(1,10) << endl;
    cout << numberOfDistinctTails(0, 50) << endl;
    //for(unsigned long i=0; i<= 50; ++i) cout << "\""<< tail(i) << "\",";
    
    return 0;
}
 
