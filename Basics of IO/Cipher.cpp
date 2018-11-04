/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include <cmath>
using namespace std;

int main(){
    string inp;
    int i,n;
    getline(cin,inp);
    cin >> n;
    for(i =0;i<inp.length();i++){
        if(inp[i]>=97 && inp[i]<=122){
            if(inp[i]+n > 122){
                inp[i] = inp[i]+n-(ceil((inp[i]+n-122)/26.0)*26);
            }
            else{
                inp[i] = inp[i]+n;
            }
        }
        if(inp[i]>=65 && inp[i]<=90){
            if(inp[i]+n > 90){
                inp[i] = inp[i]+n-(ceil((inp[i]+n-90)/26.0)*26);
            }
            else{
                inp[i] = inp[i]+n;
            }
        }
            if(inp[i]>=48 && inp[i]<=57){
                if(inp[i]+n > 57){
                    inp[i] = inp[i]+n-(ceil((inp[i]+n-57)/10.0)*10);
                }
                else{
                    inp[i] = inp[i]+n;
                }
            }
    }
    cout << inp<< endl;
    return 0;
}
