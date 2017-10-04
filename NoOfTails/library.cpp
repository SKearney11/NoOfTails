//
//  Library.cpp
//  NoOfTails
//
//  Created by Sean Kearney on 21/09/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include "library.hpp"
#include <sstream>
#include <set>
using namespace std;

unsigned long numberOfDistinctTails(unsigned long start, unsigned long end){
    string s = "";
    string tmp = "";
    set<string> usedNums;    
    for(long i = start; i <= end; i++)
    {
        s = to_string(i);
        for(int k = 0; k < s.size(); k++)
        {
            if(s.at(k) % 2 != 0 && s.at(k)!= 0){
                tmp += s.at(k);
            }
        }
        sort(tmp.begin(), tmp.end());
        usedNums.insert(tmp);
        s = "";
        tmp = "";
    } 
    return usedNums.size();
}

string tail(unsigned long x){
    string s = "";
    string tmp = "";
    s = to_string(x);
    for(int k = 0; k < s.size(); k++)
    {
        if(s.at(k) % 2 != 0 && s.at(k)!= 0){
            tmp += s.at(k);
        }
    }
    sort(tmp.begin(), tmp.end());
    return tmp;
}
