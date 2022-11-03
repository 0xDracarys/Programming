#include<iostream>
using namespace std;



int main()
{   
        int a;
        cin >>a;
        int b = 0;
        int c = 1;
        cout << a << ", " << b<<endl;
        int nextTerm;
        for(int i = 0; i<=a; i++){
            nextTerm = b + c;
            b = c;
            c = nextTerm;
            cout << nextTerm<<endl;
        }

return 0;
}