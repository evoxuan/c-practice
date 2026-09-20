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

int main(){
    int n;
    cin>>n;
    int tp=0;
    for (int i = 2;i<=n;i++){
        if (zhi(i)&&n%i==0){
            tp = i;
            break;
        }
    }
    int c = n/tp;
    cout<<c;

    return 0;
}