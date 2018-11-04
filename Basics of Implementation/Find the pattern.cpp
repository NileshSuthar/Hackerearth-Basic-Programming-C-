#include<iostream>
using namespace std;
int main(){
    long int i,n,num,max,min;
    cin >> n;
    long int arr[n];
    for(i=0;i<n;i++){
        cin >> num;
        arr[i] = num;
    }
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << max+min;
    return 0;
}
