#include<iostream>
using namespace std;
int main()
{     
    int input;
    cout << "Enter the input : ";
    cin >> input;
    int ones = input % 10;
    cout << "The ones value is : " <<  ones << endl;
    int tens = (input / 10)% 10;
    cout << "The tenth value is : " <<  tens << endl;
    int hundred = input / 100;
    cout << "The Hundred'th value is : " <<  hundred << endl;
    int sumOfNum = ones + tens + hundred;
    cout <<  "The sum is : " << sumOfNum << endl;
    int product = ones * tens * hundred;
    cout << "The product is : " <<  product << endl;

    return 0;
}