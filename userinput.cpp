//
//  main.cpp
//  User input
//
//  Created by Apple on 9/4/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    // circumference of rectangle
    // C = 2 * (length + width)
    int l;
    int w;
    cout << "To find the circumference of rectangle, please enter the width and length\n";
    cout << "Input width: "; cin >> w;
    cout << "Input length: "; cin >> l;
    cout << "Cir rec : " << 2 * (l + w)<< endl;
    // circumference of triangle
    // C = a + b + c
    int a, b, c;
    cout << "To find the circumference of triangle, please insert side a, b and c\n";
    cout << "Insert a: "; cin >> a;
    cout << "Insert b: "; cin >> b;
    cout << "Insert c: "; cin >> c;
    cout << "Cir tri : " << a + b + c << endl;
    
       return 0;
}
