//
//  fractionmain.cpp
//  learning_cpp
//
//  Created by Ron on 6/29/20.
//  Copyright © 2020 Ron. All rights reserved.
//

#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1(2, 3);
    Fraction f2(5, 8);
    
    cout << f1.getnumer() << "/" << f1.getdenom() << endl;
    f2.setnumer(10);
    f2.setdenom(12);
    
    cout << f2.getvalue() << endl;
    return 0;
}
