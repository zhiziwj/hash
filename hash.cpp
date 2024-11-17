#include <bits/stdc++.h>
using namespace std;
int h(string str){
    long long int cnt=0;
    for(int i=0;i<str.length();i++){
        cnt+=str[i]*(i+1);
    }
    return cnt;
}
int main(){
    string str;
    while(true){
        getline(cin,str);
        cout<<h(str)<<endl;
    }
    return 0;
}
