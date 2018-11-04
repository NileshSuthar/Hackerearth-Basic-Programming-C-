#include <iostream>
using namespace std;
int main() {
    int n,j,k,hl,tf;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> j;
        k = j/12;
        if(j%12 == 0){
            cout << j-11 << " ";
        }
        else{
            hl = 12*(k)+6;
            cout << 2*hl-j+1 << " ";
        }
        tf = j%6;
        switch(tf){
            case 0: cout << "WS" << endl;
            break;
            case 1: cout << "WS" << endl;
            break;
            case 2: cout << "MS" << endl;
            break;
            case 3: cout << "AS" << endl;
            break;
            case 4: cout << "AS" << endl;
            break;
            case 5: cout << "MS" << endl;
            break;
        }
        
    }
    return 0;
}
