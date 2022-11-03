#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,n,value;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>n; int count=0;
        for(int j=0;j<n;j++)
        {
            cin>>value;
            if(value>=1000)
            count++;
        }
        cout<<count<<endl;
        
    }
	// your code goes here
	return 0;
}