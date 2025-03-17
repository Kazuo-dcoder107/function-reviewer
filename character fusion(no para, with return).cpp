#include <iostream>

using namespace std;

char* combineChars() {
    static char combined[2];
    cout << "Enter first character: ";
    cin >> combined[0];
    cout << "Enter second character: ";
    cin >> combined[1];
    return combined;
}

int main() {
    char* combinedChars = combineChars();
    cout << combinedChars[0] << combinedChars[1];
}
