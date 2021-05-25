#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<" multification number :";
	cin>>num1;
	for(num2=1;num2<=10;num2++){
		
		cout<<num2;
		int mul=num2*num1;
		cout<<"X"<<num1<<"=";
		cout<<mul<<endl;
	}
	
	
	
	return 0; 
}

