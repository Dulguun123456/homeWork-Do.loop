#include<iostream>
using namespace std;
int main()
{
	int num1,res,i,p=1;
	cout<<"Input Number:";
	cin>>num1;
	
	for(i=num1;i>0;i=i/10)

	{
		
		res=i%10;
		p=p*res;
		
	}
	
	cout<<"The Multification number is: "<<p<<endl;
	
	
	return 0;
}
