#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string mbb(string s){
    int a = s.length();
    if (s[0]=='0'){
        int cnt =0;
        for (int i = 0;i<s.length();i++){
            if (s[i]!='0'){
                break;
            }else {
                cnt++;
            }
        }
        string tp;
        for (int i = cnt ;i<s.length();i++){
            tp += s[i];
        }
        s = tp;
        if (cnt==a){
            return "0";
        }
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    //四种种数字的判断
    int a =1;//整数
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
    if (a==1)
    {
        //整数的反转
        string tp ;
        reverse(s.begin(),s.end());

        tp = mbb(s);
        cout<< tp ;
    }
    else if (a == 2)
    {
        //小数的反转
        int dot = 0;
        for (int i = 0;i<s.length();i++){
            if (s[i]=='.'){
                dot = i;
                break;
            }
        }
        string tp1,tp2;
        for (int i = 0;i<dot ;i++){
            tp1 +=s[i];
        }
        for (int i = dot +1;i<s.length();i++){
            tp2+=s[i];
        }
        reverse (tp1.begin(),tp1.end());
        reverse(tp2.begin(),tp2.end());
   
        tp1 = mbb(tp1);
        tp2 = mbb(tp2);
        //小数部分额外处理，去掉末尾的零
        int k = tp2.length();
        int cnt = k;
        string tp3;//最终输出物
        if (tp2[tp2.length()-1]=='0'){
            for (int i = k-1;i>0;i--){
                if (tp2[i]=='0'){
                    cnt--;
                }
                if (tp2[i]!='0'){
                    break;
                }
            }
      
            for (int i = 0;i<cnt;i++){
                tp3+=tp2[i];
            }
            cout<< tp1<<'.'<<tp3;
            return 0;
        }
        cout << tp1<<'.'<<tp2;
    
    }
    else if (a==3)
    {   //得到/的位置
        int dot = 0;
        for (int i = 0;i<s.length();i++){
            if (s[i]=='/'){
                dot = i;
                break;
            }
        }
        string tp1,tp2;
        for (int i = 0;i<dot ;i++){
            tp1 +=s[i];
        }
        for (int i = dot +1;i<s.length();i++){
            tp2+=s[i];
        }
        reverse(tp1.begin(),tp1.end());
        reverse(tp2.begin(),tp2.end());
        tp1 = mbb(tp1);
        tp2 = mbb(tp2);
        cout << tp1<<'/'<<tp2;
    }
    else {
        string tp;
        for (int i = 0;i<s.length()-1;i++){
            tp += s[i];
        }
        reverse(tp.begin(),tp.end());
        tp = mbb(tp);
        cout<<tp<<'%';
    }



    return 0;
}