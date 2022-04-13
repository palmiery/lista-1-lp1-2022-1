#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main(){
 
    int x;
    float totalNum = 0;
    float inter025 = 0;
    float inter2550 = 0;
    float inter5075 = 0;
    float inter76100 = 0;
    float foraInter = 0;

    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25){
            inter025++;
        }else if(x >= 25 && x < 50){
            inter2550++;
        }else if(x >= 50 && x < 75){
            inter5075++;
        }else if(x >= 75 && x < 100){
            inter76100++;
        }else{
            foraInter++;
        }

    totalNum++;
}
    // digitar "." para encerar leitura e continuar execução do programa.

    std::cout << std::setprecision(4) << (inter025 *100)/totalNum << endl;
    std::cout << std::setprecision(4) << (inter2550 *100)/totalNum << endl;
    std::cout << std::setprecision(4) << (inter5075 *100)/totalNum << endl;
    std::cout << std::setprecision(4) << (inter76100 *100)/totalNum << endl;
    std::cout << std::setprecision(4) << (foraInter *100)/totalNum << endl;

    return 0;
}