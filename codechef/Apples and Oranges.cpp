#include<iostream>
using namespace std;
int main()
{   
    int t;
    cin>>t;
        int price,product1,product2;
        cin>>price;
        cin>>product1>>product2;
        int sum;
        sum = product1 + product2;
        cout << "sum is " <<sum<<endl;
        if(price>=sum){
            cout <<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    return 0;
}