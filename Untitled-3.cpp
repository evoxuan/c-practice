#include <iostream>

using namespace std;
int a[10000];
int zhi_jude(int n){
    int tp = n;
    if (n<2){
        return 0;//不是质数
    }
    for (int i = 2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int L;
    cin>>L;
    int sum = 0;
    int num = 0;
    int zhi_a = 2;
    int j = 0;
    while (1){
        if (zhi_jude(zhi_a)==1){
          
            sum+=zhi_a;
              if (sum>L){
                break;
            }
            num++;
            a[j]=zhi_a;
            j++;
          
        }
        zhi_a++;

    }
    for (int i = 0;i<j;i++){
        cout<<a[i]<<endl;
    }
    cout<<num;
    return 0;
}