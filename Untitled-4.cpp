#include <iostream>
using namespace std;

int a[40][40];

int main() {
    int N;
    cin>>N;
    int x = 1;
    int y = (N+1)/2;
    a[1][y]=1;
    for (int i = 2;i<=N*N;i++){
        //第一种情况
        if (x==1&&y!=N){
            x=N;
            y = y+1;
            a[x][y]=i;
        }
        //第二种情况
        else if (y==N&&x!=1){
            y=1;
            x=x-1;
            a[x][y]=i;
        }else if (x==1&&y==N){
            x++;
            a[x][y]=i;
        }else {
            if (a[x-1][y+1]==0){
                x-=1;
                y+=1;
                a[x][y]=i;
            }else {
                x++;
                a[x][y]=i;
            }
        }

    }








    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}