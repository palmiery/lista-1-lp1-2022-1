#include <iostream>
#include "pt_in_rect.hpp"

using namespace std;

int main(){

    Ponto ie;
    Ponto sd;
    Ponto p;

    cout << "Digite as coordenadas do Ponto IE: " << endl;
    cin >> ie.x >> ie.y;

    cout << "Digite as coordenadas do Ponto SD: " << endl;
    cin >> sd.x >> sd.y;

    cout << "Digite as coordenadas do Ponto P: " << endl;
    cin >> p.x >> p.y;

    pt_in_rect (ie, sd, p);


    return 0;
}

