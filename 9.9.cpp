#include <iostream>

using namespace std;

int a[3000];
int main(){
    int n,m;
    cin>>n>>m;
    for (int i =0;i<n;i++){
        cin>>a[i];
    }
    //
    int cnt = 0;
    for (int i = 0;i<m;i++){
        cnt+=a[i];
    }
    int min = cnt;
    for ( int i = 0;i<n-m;i++){
        int sum = 0;
        for (int j = i;j<i+m;j++){
            sum+=a[j];  
        }
        if (sum<min){
            min = sum;
        }
    }
    cout<<min;
    return 0;
}