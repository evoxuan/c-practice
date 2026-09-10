#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double sum = 1.0*(a+b+c)/3;
    printf("%.2f",sum);

    return 0;
}