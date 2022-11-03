#include<iostream>
using namespace std;
int main()
{   

    int row = 1;
    int input;
    cin >> input;

    while (row <= input){
        int col = 1;
        while(col <= row){
            char ch = ('A' + row - 1);
            cout << ch;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }



return 0;
}