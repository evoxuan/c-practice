#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string rev(string s){
    reverse(s.begin(),s.end());
    int i = 0;
    while (i<s.length()-1&&s[i]=='0'){
        i++;
    }
    return s.substr(i);
}

int main(){
    string s;
    cin>>s;
    if (s.find('.')!=string::npos){
        int pos = s.find('.');
        string tp1 = s.substr(0,pos);
        string tp2 = s.substr(pos+1);
        tp1 = rev(tp1);
        reverse(tp2.begin(),tp2.end());
        while (tp2.length()>1&&tp2.back()=='0'){
            tp2.pop_back();
        }

        cout<< tp1<<'.'<<tp2;
    }
    else if (s.find('/')!=string::npos){
        int pos = s.find('/');
        string tp1 = s.substr(0,pos);
        string tp2 = s.substr(pos+1);
        cout<< rev(tp1)<<'/'<<rev(tp2);
    }else if (s.find('%')!=string::npos){
        s.pop_back();
        cout<<rev(s)<<'%';
    }else 
    {
        cout<<rev(s);
    }
    return 0;
}