#include <iostream>

using namespace std;

int main(){
    int len = 1000;

    bool primeCheck[len + 1];

    for(int i = 2; i <= len; i++){
        primeCheck[i] = true;
    }

    for(int i = 2; i <= len; i++){
        if(primeCheck[i]){
            for(int j = 2 * i; j <= len; j += i){
                primeCheck[j] = false;
            }
        }
    }

    for(int i = 2; i <= len; i++){
        if(primeCheck[i]){
            cout << i << " ";
        }
    }

    cout << endl;

    system("pause");
    return 0;
}