#include<iostream>
using namespace std;

int main(){
    int i,n,x,y,num,min,max;
    cin >> n>>x>>y;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> num;
        arr[i] = num;
    }
    min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>min){
            max = arr[i];
        }
    }
    if(x<=min && y>=max){
        cout<< "YES"; 
    }
    else{
        cout<< "NO";
    }
}
