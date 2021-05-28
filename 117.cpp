#include<iostream>
using namespace std;
int main()
{
	int num,reverse,digit,digit1,sum,reSum;
	cout<<" Enter number: ";
	cin>>num;
	
	for(int i=num;num>0;i++){
		digit=num%10;        //last digit
		sum=sum+digit;     //last digit+last digit...=sum of digits
		num=num/10;            //loop resume check condition
	}
	
	cout<<"sum of digits:"<<sum<<endl;
	
	
	for(int i=num;num>0;i++){
		digit=num%10;                 //last digit
		reverse=reverse*10+digit;     //reverse (last digit1+last digit2..)
		num=num/10;                    //loop resume check condition
	}
	
	
    

	for(int i=reverse;reverse>0;i++){
		digit1=reverse%10;                 //last digit
		reSum=reSum+digit;                 //reverse (last digit+last digit...=sum of digits)
		reverse=reverse/10;                 //loop resume check condition
	}
	
	cout<<"reverse Sum of digits:"<<reSum<<endl;

	if(sum==reSum){
		
		cout<<num<<" is a palindrome number";
		
	}else{
		
		cout<<num<<" is a not palindrome number";
	}
	
	
	
	
	return 0;
}
