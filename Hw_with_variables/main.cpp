//
//  main.cpp
//  Hw_with_variables
//
//  Created by Apple on 9/1/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // create variable named mynum and assign it to 50
    int mynum = 50;
   cout << mynum << endl;
    // print some text
    // insert name
    string name;
    cout << "Welcome to cpp\n";
    cout << "What is your name?\n";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    // insert values
    cout << "Please Enter a value.\n";
    int firstnumber;
    int secondnumber;
    cin >> firstnumber;
    cout << "Please Enter Another value.\n";
    cin >> secondnumber;
    cout << "The sum of two number is: " << firstnumber + secondnumber << endl;
    return 0;
}
