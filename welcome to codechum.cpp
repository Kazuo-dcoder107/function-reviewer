#include<iostream>
using namespace std;

void welcome(){
    cout<<"Welcome to CodeChum User! \n";
}

int main(){
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;
    for(int i = 0; i<num; i++){
        welcome();
    }
}
