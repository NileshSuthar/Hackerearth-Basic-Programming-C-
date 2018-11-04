#include<iostream>
#include<vector>
using namespace std;

int main(){
    long int i,n,c,sum = 0;
    vector<long> arr;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> c;
        arr.push_back(c);
        sum+=arr[i];
    }
    cout<< sum;
}
