#include <iostream>
using namespace std;

int main() {
    int i,l,r,k,count =0;
    cin >> l >> r >> k;
    for(i=l;i<r+1;i++){
        if(i%k == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}
