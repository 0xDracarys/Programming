#include<iostream>
using namespace std;
int main()
{      
    int t;
    cin>>t;
    while(t--){
        int count;
        int seats,students;
        cin >>seats>>students;
        if(students > seats){
            cout<< students - seats<<endl;
        }else{cout<<"0"<<endl;}
    }
    return 0;
}