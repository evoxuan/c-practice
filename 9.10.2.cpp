#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    string eassy;
    cin>>a;
    cin.ignore();
    getline(cin,eassy);
    //大小写转化T
    for (int i =0;i<a.size();i++){
        if (a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }

    for (int i =0;i<eassy.size();i++){
     
        if (eassy[i]>='A'&&eassy[i]<='Z'){
            eassy[i]=eassy[i]-'A'+'a';
        }
    }
  
    int cnt= 0;
    int si = 0;
    int tp = a.size();
    for (int i = 0;i<=eassy.size()-tp;i++){
        
        if (eassy.substr(i,tp)==a
            &&(i+tp ==eassy.size()||eassy[i+tp]==' ')
            &&(eassy[i-1]==' '||i == 0)){
            cnt ++;
            if (cnt ==1){
                si = i;
            }
        }
    }
    if (cnt>0){
        cout<< cnt <<" "<< si;
    }else{
        cout << -1;
    }
    return 0;
}