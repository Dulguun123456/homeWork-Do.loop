#include<iostream>
using namespace std;
int main()
{
	int num1,num2,rev,num3;
	cout<<"Enter nummber:";
	cin>>num1;
	num2=num1;
	for(int i=num1;num1>0;i++){
		rev=(rev*10)+(num1%10);
		num1=num1/10;
	}
	num3=rev;
	if(num2==num3){
		
		cout<<"Palindrom number.";
		
		
	}else{
		cout<<"not Palindrom number.";
	}
	
	
	
	
	return 0;
}
