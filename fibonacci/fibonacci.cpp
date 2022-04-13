#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using namespace std;
vector <int> fib_below_n(unsigned int n){

    int fibAnterior = 0;
    int fib = 1;
    int qtd = n;
    
    std::vector<int> fibV[n];
    
    for(int i = 0; i < qtd; i++){
        //cout << "Fibonacci " << i+1 << ": " << fib << endl;
        fibV->push_back(fib);
        fib = fib + fibAnterior;
        fibAnterior = fib - fibAnterior;      
    }
    cout << "{";
     for (unsigned int i = 0; i < fibV->size(); i++) {
        cout << fibV->at(i) << ";";
    }

    cout << "}" << endl;

    return  *fibV;
}
