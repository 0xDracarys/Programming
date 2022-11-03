#include<iostream>
using namespace std;
int main()
{   

    int input;
    cout << "Enter Input : ";
    cin >> input;
    int row = 1;

    while(row <= input){
        int col = 1;
        char value = 'A' + input - row;
        while(col <= row){
        cout << value;
        value = value + 1;
        col = col + 1;
    }
        row = row + 1;
        cout << endl;
    }







    return 0;
}