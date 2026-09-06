#include <stdio.h>


int find_index(const int a[],int n,int target){
    for (int i =0;i<n;i++){
        if (a[i]== target){
            return i;
        }
    }
    return -1;
}

int my_strlen(const char s[]){
    int i = 0;
    while (s[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    int a[] = {4,7,2,7};
    int sb = find_index(a,4,7);
    printf("%d",sb);
    int ss = find_index(a, 4, 9); // 返回 -1
    printf("%d",ss);
    printf("\n");
    
}