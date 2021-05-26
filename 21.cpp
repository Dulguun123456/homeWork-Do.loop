#include<iostream>
using namespace std;
int main()
{
	int num,num2, result=1;
	cout<<"Number:";
	cin>>num;
	cout<<"Zereg: ";
	cin>>num2;
	while(num2>0){
		result=result*num;
		num2--;
	}
	
	cout<<result;
	return 0;
}
