/*hereglegchees ugsun tsipriin orong toolog 
programm bich*/ 
#include<iostream>
using namespace std;
int main()
{
	int num,count;
	cout<<"Enter your number: ";
	cin>>num;
	for(count=0;num>0;count++){
		num=num/10;
	}
	cout<<"Number of digits: "<<count;
	
	return 0;
}
