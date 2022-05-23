#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter your limit: ";
    cin >> n;

    for(int i = 0; i <= n; i++){

        if(i % 2 == 0){
            if(i == 0){
				continue;
			}else{
				cout << i << " ";
			}
        }
    }
    cout << "\n";

    return 0;

}
