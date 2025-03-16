#include<iostream>
using namespace std;

string pangalan;
void generateGreeting(){
    cout<<"Please enter your name: ";
    cin>>pangalan;
    cout<<"Hello, "<<pangalan<<"!\n";
}
int main(){
    generateGreeting();
    return 0;
}
