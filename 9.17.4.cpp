#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    string win;
     int max = -1;
    int win1,win2,win3;
    for (int i = 0;i<n;i++){
       string name;
        cin>>name;
        int s1,s2,s3;
        int sum;
        cin>>s1>>s2>>s3;
        sum= s1+s2+s3;
        if (sum >max){
            max = sum;
            win = name;
            win1 = s1;
            win2 = s2;
            win3 = s3;
        }
    }
    cout<<win<<' '<<win1<<' '<<win2<<' '<<win3;
    return 0;
}