#include <iostream>
using namespace std;
int main (){
int array[] = {1,2,3,4,6,4,3,6,1,2,4,9};
cout << "Number of Array in block is 11 ";
int numberOfArray;
cout << "\nEnter the number till you want to access Array : ";
cin >> numberOfArray;

for (int i = 0; i < numberOfArray; i++){
    cout << " Array till you entered number is  " << array[i] << endl;
}

return 0;
}