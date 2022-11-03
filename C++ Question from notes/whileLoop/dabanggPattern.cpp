#include<iostream>
using namespace std;
int main()
{
int input;
cout  << "Enter the input : ";
cin >> input;
int row = 1;
//printing first pattern
	while(row <= input){
	int col = 1;
	while(col <= input - row + 1){
	cout << col;
	col = col + 1;
	}
	int star =  (input - col + 1);
	//printing star
	while(star){
	cout << "*";
	star = star - 1;

	}
	//printing second star
	int secondStar = 1;
	while(secondStar <=input - col + 1){
		cout << "*";
		secondStar++;
		} 
	//printing second num pattern
	int secondNum = 1;
	while(secondNum <= input - row + 1){
		cout << col - secondNum;
		secondNum++;
	}
	cout << endl;
	row = row + 1;
	}
return 0;
}