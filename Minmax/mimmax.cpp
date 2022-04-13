#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int min_max ( int V[], int n ){

    int min_maxVR[2];
    int max = 0;
    int min = 1000000;


     for(int i = 0; i < n; i++){
            if(V[i] > max){
                max = V[i];
            }
        }
        
        for(int i = 0; i < n; i++){
                if(V[i] < min){
                min = V[i];
            }
        }
    
        for(int i = 0; i < n; i++){
            if(V[i] == max){
                min_maxVR[1] = i; //i == max_ind
            }
            if(V[i] == min){
                min_maxVR[0] = i; //i == min_ind
            }
        }

        cout <<"{" << min_maxVR[0] << ","<< min_maxVR[1] << "}" << endl;

    return *min_maxVR;    
}

 