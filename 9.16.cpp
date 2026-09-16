#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int a[26];//存贮数字
int main(){
    string s;
    for (int i = 0;i<4;i++)
    {
        string tp;
        getline(cin,tp);
        s+=tp;
    }
    //统计

    for (int i = 0;i<s.length();i++){
        if (s[i]>='A'&&s[i]<='Z'){
            int tp = s[i]-'A';
            a[tp]++;
        }
    }
    //输出
    int max = a[0];
    for (int i = 0;i<26;i++){
        //找到最大值
        if (a[i]>max){
            max = a[i];
        }
    }
    for (int i = max;i>0;i--){
        for (int j = 0;j<26;j++){
            if (a[j]-i>=0){
                cout<<'*';
            }else{
                cout <<' ';
            }
            if (j==25){
                break;
            }
            cout <<' ';
        }
        cout << endl;
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}