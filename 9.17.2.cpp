#include <iostream>
using namespace std;

bool zhi(int n){
    if (n<2){
        return false;
    }
    if (n==2){
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
    for (int i = 0;i<n;i++){
        int tp;
        cin>>tp;
        if (zhi(tp)){
            cout << tp <<' ';
        }
    }
    return 0;
}