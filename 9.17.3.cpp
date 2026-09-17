#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    double MAX = 0;
    for (int i = 0;i<n;i++){
        int max = 0,min=10;
        int sum = 0;
        for (int j = 0;j<m;j++){    
            int tp; 
            cin>>tp;
            sum +=tp;
            if(tp>max){
                max = tp;
            }
            if (tp<min){
                min = tp;
            }
        } 

        //成绩
        double sss = 1.0*(sum -min -max) /(m-2);
        if (MAX<sss){
            MAX=sss;
        }
    }
    printf("%.2f",MAX);
    return 0;
}