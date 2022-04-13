#include <iostream>
#define TAM 5

using std::cout;
using std::cin;
using std::endl;

int main(){

    int v[TAM];
    int negativos = 0;
    for(int i = 0; i < TAM; i++){
        cin >> v[i];
        if(v[i] < 0 ){
            negativos++;
        }
    }

    cout << "" << negativos << endl;

    return 0;
}