#include<iostream>
using namespace std;
int main()
{   
    int t,a;
    cin >>t;
    while(t--){
        cin >>a;
        if(a>98){
            cout <<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}