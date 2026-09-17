#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string mbb(string s){
    if (s[0]=='0'){
    int cnt = 0;
    for (int i = 0;i<s.length();i++){
        if (s[i]=='0'){
           cnt ++;
        }
        if (s[i]!= '0'){
            break;
        }
    }
    if (cnt==s.length()){
        return '0';
    }
    int length = s.length();
    string tp = "";
    for (int i = cnt;i<length;i++)
    {
        tp += s[i]; 
    }
    s = tp;
  
}
  return s;
}
int main(){
    string s;
    cin>>s;
    int a =1;//三种数字的判断
    for (int i =0;i<s.length();i++){
        if (s[i]=='.'){
            a = 2;//小数
            break;
        }else if (s[i]=='/'){
            a=3;//分数
            break;
        }
        else if(s[i]=='%'){
            a=4;//百分数
            break;
        }
    }
    
    if (a==1){
        //整数
        reverse(s.begin(),s.end());
        mbb(s);
        cout<<s;
    }else if(a ==2) (
        //小数
        string tp1,tp2;
        int dot;
        for (int i = 0;i<s.length();i++){
            if (s[i]=='.'){
                dot = i;
                break;
            }
        }
        for (int i = 0;i<dot;i++){
            tp1 += s[i];
        }
        for (int i = dot+1;i<s.length();s++){
            tp2 +=s[i];
        }
        reverse(tp1.begin(),tp1.end())
        reverse(tp2.begin(),tp2.end())
        mbb(tp1);
        mbb(tp2);
        cout<< tp1<<'.'<<tp2;
       
    )else if (a ==3){
        int cnt =0;
        for (int i = 0;i<s.length();i++){
            if (s[i]=='/'){
                cnt =i;
            }
        }
        string tp1,tp2;
        for (int i = 0;i<s[cnt];i++){
            tp1+=s[i];
        }
        for (int i = cnt +1;i<s.length();i++){
            tp2 += s[i];
        }
        //调转位置
          reverse(tp1.begin(),tp1.end())
        reverse(tp2.begin(),tp2.end())
        mbb(tp1);
        mbb(tp2);
        cout<< tp1<<'/'<<tp2;
    }else if (a==4){
        string tp;
        for (int i = 0;i<s.length()-1;i++){
            tp += s[i];
        }
        reverse(tp.begin(),tp.end());
        mbb(tp);
        cout<<tp<<'%';
    }
    return 0;
}