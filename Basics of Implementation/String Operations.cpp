#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int i,j,q,m,k,w,z=0,count =0;
    string s,str,fin;
    char ch;
    cin >> s;
    cin >> q;
    for(i=0;i<q;i++){
        cin >> k >> ch;
        s[k-1] = ch;
    }
    str = s;
    fin = str;
    cin >> m;
    for(i=0;i<m;i++){
        cin >> k >> w;
        k = k-1;
        w = w-1;
        for(j=0;j<=w-k;j++){
            fin[k+j] = str[w-j];
        }
        if(i < m-1){
            str = fin;
        }
    }
     cout << s << endl;
     cout << fin << endl;
     for(i=0;i<s.length();i++){
         if(s[i]==fin[i]){
             count+=1;
         }
     }
     cout<<count;

}
