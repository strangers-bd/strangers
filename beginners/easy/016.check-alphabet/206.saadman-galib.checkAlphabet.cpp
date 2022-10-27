#include<iostream>
using namespace std;

int main(){
    char alphabet;
    char alphabetList[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    bool noAlphabet = false;
    cout << "Enter any character: ";
    cin >> alphabet;
    alphabet = tolower(alphabet);
    for (int i = 0; i < sizeof(alphabetList); i++)
    {
        if (alphabet == alphabetList[i]){
            cout << "It is an alphabet." << endl;
            noAlphabet = true;
            break;
        } else {
            noAlphabet = false;
        }
    }
    if (noAlphabet == false){
        cout << "You have not entered an alphabet." << endl;
    }
    return 0;
}