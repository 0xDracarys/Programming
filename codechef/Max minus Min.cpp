#include<iostream>
using namespace std;
int main()
{   int t;
    cin>> t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        if(a>b&&b>c){
            cout << a-c<<endl;
        }else {if(b>a&&b>c){
            cout << b-c<<endl;
        }else if(c>a&&c>b){
            cout<< c-a<<endl;
        }
    }
    }
    return 0;
}