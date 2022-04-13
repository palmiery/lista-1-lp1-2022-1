#include <iostream>
#include "mimmax.hpp"

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int min_max ( int V[], int n );

int main(){
 
    int num = 0;
    cout << "Digite a quantidade de números:";
    cin >> num;

    int min_maxV[num];
    
    for(int i = 0; i < num; i++){
        cin >> min_maxV[i];
        
    }     
   
    min_max(min_maxV, num);

    return 0;
}