 #include<iostream>
 using namespace std;
bool zhi(int n)
{
    if (n<2){
        return false;
    }
    if (n == 2){
        return true;
    }
    for (int i = 2;i<n;i++)
    {
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int  a[100];
int main(){
    int n;
    cin>>n;
    for (int i = 0;i<n;i++){
        int tp;
        cin>>tp;       
        a[i]=tp;
    }
    for (int i = 0;i<n;i++){
 
        if (zhi(a[i])){
            cout<<a[i]<<' ';
        }
    }

    return 0;
}
