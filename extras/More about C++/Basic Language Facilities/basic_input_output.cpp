#include <iostream>

int main(){
    
    using namespace std;
    cout << "Hello World!\n" << 5 << " " << 12 << " " << 13 << endl;
    
    int age;
    cout << "Please enter your age\n";
    cin >> age;
    cout << "You're " << age << " years old." << endl;
    
    char buffer[123];
    cout << "Please enter your name\n";
    cin >> buffer;
    cout << "Nice to meet you " << buffer << "!";

    char buffer2[512];
    cout << "Please enter your full name\n";
    cin.getline(buffer2, 64, '\n');
    cout << "Nice to meet you " << buffer2 << "!";
    return 0;
}