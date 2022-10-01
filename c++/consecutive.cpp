#include <iostream>
using namespace std;

int main() {
    //currentValue is the number we are counting; we will read new value into (value)

    int currentValue = 0;
    int value = 0;

    //It is going to read the first number and ensure that we have data to process
    cout << "Enter the value  ";
    if( cin >> currentValue ){
        int count = 1;  //stores the count for the current value  we're processing

        while (cin >> value){               // Reading for the remaining numbers
            if (value == currentValue)
                ++count;        // Add 1 to count (Pre- Increment)
        
                    
                    else {      //otherwise, print the count for the previous value
                        cout << currentValue << " occurs " << count << " times \n";
                        currentValue = value;   // remember the value
                        count = 1;              //reset the counter
                    }
                    }   //while loop ends here
                    cout << currentValue << " occurs " << count << " times \n";
    }       //outermost IF-Statement ends here

    
    return 0;
}


