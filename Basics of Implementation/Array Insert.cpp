#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i,j,n,q,d,l,x,r,k,sum;
    vector<int> arr;
    cin >> n >> q;
    for(i =0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    for(i = 0;i<q;i++){
        cin >> d >> l >> r;
        if(d == 1){
            arr[l] = r;
        } 
        else if(d == 2){
            if(l<n && r<n+1){
                sum = 0;
                for(j = l; j<r+1;j++){
                    sum += arr[j];
                }
                cout << sum << endl;
            }
            else{
                cout << -1;
            }
        }
    }
    return 0;
}
