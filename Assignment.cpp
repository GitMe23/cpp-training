#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int a = 5, b = 7, c = 11;
    double avg = (a + b + c) / 3.0;
    cout<<avg<<endl;
    a += 3;
    cout<<"a: "<<a<<endl;
    int r;
    r = c % 2;
    cout<<"remainder: "<<r<<endl;
    return 0;
}