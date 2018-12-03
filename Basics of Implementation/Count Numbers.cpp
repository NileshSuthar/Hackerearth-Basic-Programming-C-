
#include<iostream>
using namespace std;

int main(){
    int i,j,t,n,count = 0;
    string s;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        cin >> s;
        for(j=0;j<n;j++){
            if(s[j] >=48 && s[j]<58){
                if(s[j+1] >=48 && s[j+1]<58){
                    continue;
                }
                else{
                    count++;
                }
            }
        }
        cout << count << endl;
        count =0;
    }
}
