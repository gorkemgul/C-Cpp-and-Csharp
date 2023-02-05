#include <iostream>
#include <string>

int main(){

    // Before C++ 11
    int a; 
    int a = 5; //copy initialization
    int b(10); //direct initialization

    std::string s;
    std::string s2 ("Hello World!");

    char w[5];
    char z[10] = {'\0'};
    char c[10] = {'g', 'o', 'r', 'k', 'e', 'm'}; // aggregate initialization
    char v[10] = {"gorkem"};

    // After C++ 11
    int l {};
    int i {3};
    
    char k[5]{};
    char m[10]{"Hello"};

    int *p = new int{};
    char *j = new char[9]{};
    char *h = new char[10]{"Hello"};
}