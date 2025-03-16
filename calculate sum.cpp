#include<iostream>
using namespace std;

int First;
int Second;


void calculate_sum(){
cout<<"Enter first number: ";
cin>>First;
cout<<"Enter second number: ";
cin>>Second;
int Result = First + Second;
cout<<"The sum is "<<Result<<endl;
}
int main(){
    
    calculate_sum();
    return 0;
}
