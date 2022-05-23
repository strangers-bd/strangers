#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        cout << "'" << ch << "' " << "is alphabet." << endl;
    }
    else if(ch >= 48 && ch <= 57){
        cout << "'" << ch << "' " << "is digit." << endl;
    }
    else if((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)){
        cout << "'" << ch << "' " << "is special character." <<endl;
    }
    return 0;
}
