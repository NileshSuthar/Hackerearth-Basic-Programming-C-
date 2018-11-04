#include <iostream>
#include<vector>
using namespace std;

int main() {
    int i,n,j;
    vector<int> arr;
    cin >> n;
    for (i =0;i<n;i++){
        cin >> j;
        arr.push_back(j);
    }
    long ans =1;
    for(i =0;i<n;i++){
        ans = (ans*arr[i])%(1000000007);
    }
    cout << ans ;
    return 0;
}
