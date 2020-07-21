#include <bits/stdc++.h> 
using namespace std;
int main()
{
int val=0,steps;
int level=0,i;
char altitude[20];
cout<<"Enter the steps: ";
cin>>steps;
cout<<"Enter the Array: ";
for(i=1;i<=steps;i++)
	cin>>altitude[i];
for(i=1;i<=steps;i++)
{
	if(altitude[i]=='D')
	{
		if(level==0)
			val++;
		level--;	
	}

	else if(altitude[i]=='U')

	{ 
		level++;
	}
}	

cout<<val;
}
