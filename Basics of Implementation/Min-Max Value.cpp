/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;

int main(){
    int n,i,j,min,max,flag = 0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(i = min;i<=max;i++){
        if(flag == 0){
            for(j=0;j<n;j++){
               if(i==arr[j]){
                   break;
               }
               else if(j==n-1){
                    cout << "NO";
                    flag = 1;
                    break;

               }
             }
        }
    }
    if(flag == 0){
        cout << "YES";
    }

}
