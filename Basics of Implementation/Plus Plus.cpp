#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m,i,j,dg,p,q,o=0,sum,max1;
    vector <int> arr;
    cin >> n >> m;
    vector<vector<int> > array2d(n, vector<int>(m, 0));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> dg;
            array2d[i][j] = dg;
        }
    }
    max1 = array2d[0][0];
    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
            for(p=1;p<n-1;p++){
                for(q=1;q<m-1;q++){
                    if(i-p>2 ||i-p<-2||j-q>2 ||j-q<-2 ){
                        sum = array2d[i-1][j]*array2d[p-1][q] + array2d[i][j-1]*array2d[p][q-1] + array2d[i+1][j]*array2d[p+1][q] + array2d[i][j]*array2d[p][q] + array2d[i][j+1]*array2d[p][q+1];
                        if(sum > max1){
                            max1 = sum;
                        }
                    }
                }
            }
        }
    }
    cout<< max1;
    return 0;
}
