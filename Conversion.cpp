#include <iostream>
using namespace std;

/* A simple program to demonstrate explicit and implcit casting */

int main(int argc, char** argv) {
    double x = 45.675;
    int y = static_cast<int>(x);
    int b = true;
    int c = 'a';

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    return 0;
}