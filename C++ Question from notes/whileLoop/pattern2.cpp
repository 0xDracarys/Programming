#include<iostream>
using namespace std;
int main()
{
    int input;
    int row = 1;
    cout << "Enter your input : ";
    cin >> input;
    while(row <= input){
        int col = 1;
        while(col <= row){
        char value = ('A' + row + col - 2);
            cout << value;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }





return 0;
}