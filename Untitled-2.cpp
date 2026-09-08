#include <iostream>
#include <math.h>
int a[7][2];
int b[7];//每日的学习时间
using namespace std;

int main(){
     int bad_days =0;
    for (int i = 0;i<7;i++){
        cin>>a[i][0]>>a[i][1];
        b[i]=a[i][0]+a[i][1];
        if (b[i]>0){
            bad_days ++;
        }
    }
    if (bad_days==0){
        cout<< 0;
        return 0;
    }
    int worst_day = b[0];
    int day =0;
    for (int i = 0;i<7;i++){
        if (b[i]>worst_day){
            worst_day = b[i];
            day = i;
        }
    }
    cout<<day+1;
    return 0;
}