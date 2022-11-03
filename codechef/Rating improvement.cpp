#include<iostream>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int currentRating,nextRating;
        cin>>currentRating>>nextRating;
        if(currentRating < nextRating){
            if (nextRating - currentRating <= 200){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }}
        else if (nextRating == currentRating){
                cout << "YES"<<endl;
            }
        else {
            cout << "NO"<<endl;
        }
    



    }

    return 0;
}