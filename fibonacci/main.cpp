#include <iostream>
#include <vector>
#include "fibonacci.hpp"

using std::cout;
using std::cin;
using std::endl;

std::vector< int > fib_below_n(unsigned int n );

int main(){
 
    int num = 0;

    cout << "Digite o quantidade da sequência:";
    cin >> num;

    std::vector<int> fibVector;

    fibVector = fib_below_n(num);

    return 0;
}