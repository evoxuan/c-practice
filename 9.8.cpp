#include <iostream>

using namespace std;
int c[8];//奖章承载
int a[7];//中奖号码
int b[1000][7];//小明买的号码
int main(){
    int n;
    cin>>n;//小明买的彩票张数
    for (int i = 0;i<7;i++){
        cin>>a[i];

    }
    for (int i = 0;i<n;i++){
        for (int j = 0;j<7;j++){
            cin>>b[i][j];//小明买的号码
        }
    }
  
    //特等奖
    for (int i = 0;i<n;i++){
          //中奖判断
          int cnt = 0;
        for (int j = 0;j<7;j++){
            for (int k = 0;k<7;k++){
                if (b[i][j]==a[k]){
                    cnt ++;
                }
            }
           
        }
        c[cnt]++;//对应等级的彩票数量加1

    }
    cout << c[7]<<" ";
    for (int i = 6;i>0;i--){
        cout<<c[i]<<" ";
    }
    
    return 0;
}
