#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    
    /* datatype for the pointer */
    int *pa = &a;
    int *pb = &b;


    cout << "Enter the First value : ";
    cin >> a;
    cout << "Enter the Second value : ";
    cin >> b; 

     cout << *pb + *pa << endl;
     cout << *pa - *pb << endl;


 return 0;
}