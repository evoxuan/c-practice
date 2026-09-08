// day 2

#include <stdio.h>

int a[101];


int main(){
    int n;
    scanf("%d",&n);
    int i = 1;
    while (n!=1){
        a[i]=n;
        if (n%2==0){
            n /=2;
        }else{
            n = 3*n +1;
        }
        i++;
    }
    a[i]=1;
    for (int j = i;j>0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}