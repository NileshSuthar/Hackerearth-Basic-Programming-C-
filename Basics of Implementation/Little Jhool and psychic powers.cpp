#include<iostream>
#include <cstring>
using namespace std;
int main(){
    string n;
    int i,k,flag = 0,counto=0,countz=0,len;
    cin >> n;
    len = n.length()-5;
    for(i = 0;i<len;i++){
        if(n[i] == '1' ){
            counto = 0;
            for(k=0;k<6;k++){
                if(n[i+k] == '1'){
                    counto +=1;
                 }
             }
             if(counto >5){
                flag = 1;
             }
        }
    }
    for(i = 0;i<len;i++){
        if(n[i] == '0' ){
            countz = 0;
            for(k=0;k<6;k++){
                if(n[i+k] == '0'){
                    countz +=1;
                 }
             }
             if(countz >5){
                flag = 1;
             }
        }
    }
    //cout << counto << " "<< countz << endl;
    if(flag == 1 ){
        cout << "Sorry, sorry!" << endl;
    }
    else{
        cout << "Good luck!" << endl;
    }
    return 0;
}
