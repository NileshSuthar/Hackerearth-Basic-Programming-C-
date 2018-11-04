#include<iostream>
using namespace std;
int main() {
    int i,n,flag=0;
    string st;
    cin >> st;
    n = st.length();
    for(i=0;i<n/2;i++){
        if(st[i] != st[n-i-1]){
            flag =1;
        }
    }
    if(flag == 1){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    return 0;
}
