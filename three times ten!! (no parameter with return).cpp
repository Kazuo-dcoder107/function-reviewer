#include <iostream>
using namespace std;

int return10(){
    return 10;
}
int main(){
    int total = return10() + return10() + return10();
    cout<<"Total: "<<total;
    return 0;
}
