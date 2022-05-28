#include <iostream>

using namespace std;

int main() {

    char c;

    cin>>c;

    if((c>='A' && c<='Z') || (c>='a' && c<='z')) {

        if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u') {

            cout<<c<<" is vowel.\n";

        }

        else {

            cout<<c<<" is consonant.\n";

        }

    }

    else {

        cout<<"Is not an alphabet.\n";

    }

    return 0;

}
