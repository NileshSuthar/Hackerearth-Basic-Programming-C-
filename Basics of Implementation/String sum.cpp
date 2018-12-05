#include<iostream>
using namespace std;

int main(){
    int i,sum=0;
    string x;
    cin >> x;
    for(i=0;i<x.length();i++){
        sum+=int(x[i])-96;
    }
    cout << sum;
}
