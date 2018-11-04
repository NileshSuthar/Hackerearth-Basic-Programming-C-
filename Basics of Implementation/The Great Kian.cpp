#include<iostream>
#include<vector>
using namespace std;

int main(){
    long int i,j,c,sum1 =0,sum2 =0,sum3 =0,n;
    vector<long> arr;
    cin >> n;
    for(i =0;i<n;i++){
        cin >> c;
        arr.push_back(c);
    }
    for(i=0;i<n;i+=3){
        sum1 += arr[i];
    }
    cout << sum1 << " ";
    for(i=1;i<n;i+=3){
        sum2 += arr[i];
    }
    cout << sum2 << " ";
    for(i=2;i<n;i+=3){
        sum3 += arr[i];
    }
    cout << sum3 << " ";
    return 0;
}
