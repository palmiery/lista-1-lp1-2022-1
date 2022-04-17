#include <iostream>
#include "pt_in_rect.hpp"

using namespace std;


int pt_in_rect (const Ponto &ie, const Ponto &sd, const Ponto &p){

    Ponto x, y;

   if(((p.x > ie.x && p.x < sd.x) && (p.y > ie.y && p.y < sd.y)) || ((p.x > sd.x && p.x < ie.x) && (p.y > sd.y && p.y < ie.y)) || ((p.x < ie.x && p.x > sd.x) && (p.y > ie.y && p.y < sd.y))){
        cout << "P está dentro do retângulo." << endl;
        return 0;

    }
    if(p.x == ie.x || p.x == sd.x || p.y == ie.y || p.y == sd.y){
        cout << "P está na borda do retangulo." << endl;
        return 1;
    }else{
        cout << "P não está dento do retangulo." << endl;
        return 2;
    }

}
