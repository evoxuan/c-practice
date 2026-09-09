#include <iostream>

using namespace std;
int a[100];
bool used[100] = {false};
int sum(int x,int y){
    int a = x +y;
    return a;
}

int main(){

    int n;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>a[i];
    }
    int cnt = 0;
    for (int i = 0;i<n-1;i++){
        for (int j = i+1;j<n;j++){
            int tp =0;
            tp = sum(a[i],a[j]);
            for (int i = 0;i<n;i++){
                if (tp == a[i]){
                    used[i]=true;
                }
            }
        }
    }
    for (int i = 0;i<n;i++){
        if (used[i]){
            cnt++;
        }
    }    
    cout<<cnt;
    return 0;
}