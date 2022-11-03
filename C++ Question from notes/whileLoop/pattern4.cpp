#include<iostream>
using namespace std;
int main()
{   
    int row = 1;
    int input;

    cout << "Enter the value : ";
    cin >> input;

    while(row <= input){
        //printing space
        int space = input - row;
        while(space){
            cout << " ";
            space = space - 1;
        }
        //printing star
        int col = 1;
        while (col <= row){
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;

    }
    
    
    return 0;
}