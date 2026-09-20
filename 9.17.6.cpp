#include <iostream>

using namespace std;
bool zhi(int n){
    if (n<2){
        return false;
    }
    if (n ==2){
        return true;
    }
    if (n%2==0){
        return false;
    }
    for (int i = 2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int hui(int n){
    int a = n;
    int t = n/10;
    while(t>0){
        a = a*10+t%10;
        t/=10;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    //一位质数
    for (int i = 5;i<=9;i++){
        if (i>=a&&i<=b&&zhi(i)){
            cout << i << endl;
        }
    }
    //两位质数
    if (a<=11&&b>=11){
        cout << 11 << endl;
    }
    for (int i = 10;i<9999;i++){      
        int tp = hui(i);
        if (tp>=a&&tp<=b&&zhi(tp)){
            cout << tp <<endl;
        }
    }

    return 0;
}