#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string name;
    int year;
    cout<<"Enter your year of birth, follwed by your full name: ";
    cin>>year;
    cin.ignore();
    getline(cin,name);
    cout<<name<<", you will be "<<2022 - year<<" years old this year."<<endl;

    return 0;
}