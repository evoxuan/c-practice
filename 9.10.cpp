#include <iostream>
#include <string.h>
using namespace std;
int b[26];
bool zhi(int n){
    if (n<2){
        return false;
    }
    if (n ==2){
        return true;
    }
    for (int i = 2;i<n;i++){
        if (n%i==0){
            return false;
        }

    }
    return true;
}

int main(){
    char a[101];
    scanf("%s",a);
  


    for (int i = 0;i<strlen(a);i++){
        char tp = a[i];
        b[tp-'a']++;
    }
    int maxn = b[0];
    int minn = 101;
    //找到最大
    for (int i = 0;i<26;i++){
        if (b[i]>maxn){
            maxn = b[i];
        }
        if (b[i]>0&&b[i]<minn){
            minn = b[i];

        }
  
    }
    int cha = maxn - minn;
    if (zhi(cha)){
        cout << "Lucky Word"<<endl;
        cout << cha;
    }else {
        cout <<"No Answer"<<endl;
        cout << 0;
    }


    return 0;
}