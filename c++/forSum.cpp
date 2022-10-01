#include <iostream>
using namespace std;

int main() 
{

    int sum = 0;
    long enteredValue;
    cout << "Enter the value for the sum :  ";
    cin >> enteredValue;
    
    for(int i =1; i <= enteredValue; i++){
      sum = sum + i;
      cout << "\n" <<sum;
    }
    cout << "\n" << "Final sum of the given number is : " << sum;
    return 0;
}