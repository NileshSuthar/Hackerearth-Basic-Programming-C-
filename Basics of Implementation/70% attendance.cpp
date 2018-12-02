** correction in 1 test case**
** not for 3star case**

#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
int main(){
    string x,xn,yn,zn;
    cin >> x;
    int i,j=0,z=0,count=0,in[2],tn[10],min;
    int arr[x.length()];
    for(i=0;i<x.length();i++){
        if(x[i] == 42){
            count++;
            in[j] =i;
            j++;
        }
    }
    if(count == 1){
        for(i=0;i<in[0];i++){
            xn += x[i];
        }
        for(i=in[0]+1;i<x.length();i++){
            yn += x[i];
        }
        for(i = 48;i<58;i++){
            x = xn+char(i)+yn;
            stringstream geek(x);
            int s = 0;
            geek >> s;
            if(sqrt(s) == int(sqrt(s)) && sqrt(s)!= 0){
                cout <<sqrt(s);
                break;
            }
        }
    }
    if(count == 2){
        for(i=0;i<in[0];i++){
            xn += x[i];
        }
        for(i=in[0]+1;i<in[1];i++){
            yn += x[i];
        }
        for(i=in[1]+1;i<x.length();i++){
            zn += x[i];
        }
        for(i = 48;i<58;i++){
            for(j = 48;j<58;j++){
                x = xn+char(i)+yn+char(j)+zn;
                stringstream geek(x);
                int s = 0;
                geek >> s;
                if(sqrt(s) == int(sqrt(s))&& sqrt(s)!= 0){
                    tn[z] = sqrt(s);
                    z++;
                }
            }
        }
        cout << tn[0];
    }
    if(count == 0){
        stringstream geek(x);
        int s = 0;
        geek >> s;
        cout << sqrt(s);

    }

}
