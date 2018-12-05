/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
    int i,t;
    long long int a,x;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> a;
        x = a/3;
        if(x == 0){
            cout << -1 << endl;
        }
        else{
            cout << x << " "<< 2*x << " " << 3*x << endl;
        }

    }

    return 0;
}
