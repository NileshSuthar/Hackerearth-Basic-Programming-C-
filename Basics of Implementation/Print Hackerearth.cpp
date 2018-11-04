#include<iostream>
using namespace std;
int main(){
    long long int i,n,count = 0;
    int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
    char arr[1000000];
    cin >> n;
    if(n<11){
        count = 0;
    }
    else{
        cin >> arr;
        for(i=0;i<n;i++){
            switch(arr[i])
            {
                case 'h': h++;
                break;
                case 'a': a++;
                break;
                case 'c': c++;
                break;
                case 'k': k++;
                break;
                case 'e': e++;
                break;
                case 'r': r++;
                break;
                case 't': t++;
                break;
            }
        }
        while(h>1 && r >1 && e>1 && a>1 && c>0 && k>0 && t>0)
        {
                h-=2;
                r-=2;
                e-=2;
                a-=2;
                c-=1;
                k-=1;
                t-=1;
                count ++;
        }
    }
    cout << count ;
    return 0;

}
