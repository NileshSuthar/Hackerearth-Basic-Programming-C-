#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    for(i =2;i<n;i++){
        int flag =1;
        for( int j = 2; j<=sqrt(i); j++){
            if(i%j == 0){
                flag =0;
                break;
            }
        }
        if(flag == 1){
            cout << i << " ";
        
        }
    }

    return 0;
}
