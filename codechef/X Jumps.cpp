#include<iostream>
using namespace std;
int main()
{   int t;
    cin >> t;
    while(t--){
        int a,b,c,count = 1;
        cin >>a>>b;
        if(a>b){
            
            int x,y;
            x = (a / b);
            y = (a % b);
            cout <<x + y<<endl;
        }
        else if (a < b){
            cout << a;
        }
        else{
                cout <<"1"<<endl;
        }
    }
    return 0;
}
