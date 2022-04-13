#include <iostream>
#include <string>
#include <array>

using namespace std;
//#include "inverter.hpp"
//
//void reverse ( std::array <std::string, 4> &arr );

int main(){

    //std::array<std::string, 4> arr = { std::string("um"), std::string("dois"), std::string("três"), std::string("quatro") };
    //std::array<int,4> arr = {"um", "dois", "três", "quatro"} ;
    std::array<std::string, 4> arr= {"um", "dois", "três", "quatro"} ;
    std::array<std::string, 4> arr2= {"quatro", "três", "dois", "um"} ;

    arr.swap(arr2);

    cout <<"[";
    for(int i=0; i<4;i++){
        cout << arr[i]<< "," ;
    }
    cout << "]" << endl;
    return 0;
}