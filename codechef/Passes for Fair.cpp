#include<iostream>
using namespace std;
int main()
{   int t,a,b;
    cin>>t;
    while(t--){
        cin >>a>>b;
        if(a<b){
            cout<<"YES"<<endl;
        }else{cout<<"NO"<<endl;}
    }
    return 0;
}