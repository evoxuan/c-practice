#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double time = 1.0*(b + c/60.0);
    double v = 1.0*a/time;
    printf("%.2f",v);


    return 0;
}