#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int dayNum;
cout<<"Enter number for day: ";
cin>>dayNum;

switch(dayNum)
{
case 1: 
cout<<"Sunday";
break;

case 2:
cout<<"Monday";
break;

case 3:
cout<<"Tuesday";
break;

case 4:
cout<<"Wednesday";
break;

case 5:
cout<<"Thursday";
break;

case 6:
cout<<"Friday";
break;

case 7:
cout<<"Saturday";
break;

default:
cout<<"Invalid number!";
break;
}
return 0;
}
