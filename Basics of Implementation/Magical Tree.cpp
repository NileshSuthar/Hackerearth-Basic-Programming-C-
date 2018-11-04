#include <iostream>

using namespace std;
int main(){
    int i,j,sum,cnt,mx;
    string st;
    cin >> cnt;
    while(cnt--){
        cin >> st;
        sum = st[0]-'0';
        for(i=1;i<st.length()-1;i+=2){
            if(st[i] == '+'){
                sum = sum + int(st[i+1]-'0');
            }
            else if(st[i] == '-'){
                sum = sum - int(st[i+1]-'0');
            }
        }
        mx = max(sum,mx);
    }
    cout << mx;


}
