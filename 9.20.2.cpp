#include <iostream>

using namespace std;
char a[100][100];

int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            char tp;
            cin>>tp;
            a[i][j]=tp;
        }
    }
    //地雷检查
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            if (a[i][j]=='*'){
                cout<<'*';
            }else{
                int cnt = 0;
                for (int p = i-1;p<=i+1;p++){
                    for (int q = j-1;q<=j+1;q++){
                        if (p<0||q<0||p>n||q>m){
                            continue;
                        }else{
                            if (a[p][q]=='*'){
                                cnt++;
                            }
                        }
                    }
                }
                cout << cnt;
            }
        }
        cout<<endl;
    }
    

    return 0;
}