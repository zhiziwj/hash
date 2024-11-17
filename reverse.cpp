#include <bits/stdc++.h>
using namespace std;
int h(string str){
    long long int cnt=0;
    for(int i=0;i<str.length();i++){
        cnt+=str[i]*(i+1);
    }
    return cnt;
}
void f(long long int n,string str,int i){
    if(n<=0){
        if(n==0){
            cout<<str<<endl;
        }
        return;
    }
    for(char ch=32;ch<=126;ch++){
        f(n-ch*i,str+ch,i+1);
    }
    return;
}
int main(){
    long long int n;
    cin>>n;
    f(n,"",1);
    return 0;
}
