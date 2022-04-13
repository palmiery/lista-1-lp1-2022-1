#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int m = 0;
    int n = 0;
    int resultado = 0;

    cin >> m;
    do{
        cin >> n;      
    }while(n > 1000 || n < -10000);

        if(n ==0){
                resultado = m;
        }

        if(n > 0){           
            for(int i = 0; i < n; i++){               
                resultado = resultado + m;
                m++;               
            }
        }else{
            n = n *(-1);
                for(int i = 0; i < n; i++){
                    resultado = resultado + m;
                    m--;
                
                }
        }
  
    cout << "" << resultado << endl;
    
    return 0;
}