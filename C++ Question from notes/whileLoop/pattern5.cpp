#include<iostream>
using namespace std;
int main()
{    
    int input;
    int row = 1;
    cout << "Enter the input : ";
    cin >> input;

    while(row <= input){
        //Ist triangle
        int space = input - row;
        while(space){
        cout << " ";
        space = space - 1;
        }
    
    //2nd triangle
    int col = 1;
    while (col <= row){
        cout << col;
        col = col + 1;
    }
    // 3rd triangle
    int start = row - 1;
    while(start){
        cout << start;
        start = start - 1;

    }





cout << endl;
row = row + 1;
    }


    return 0;
}