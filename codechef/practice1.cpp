/*Chef has recently moved into an apartment. It takes (30) minutes for Chef
to reach office from the apartment.
Chef left for the office (X) minutes before Chef was supposed to reach.
Determine whether or not Chef will be able to reach on time.*/

#include<iostream>
using namespace std;
int main()
{   int t;
    int x;
    cout << "Enter input : ";
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x;
        if(x>=30){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }



    return 0;
}