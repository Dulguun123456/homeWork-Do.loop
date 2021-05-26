#include<iostream>
using namespace std;
int main()
{
	int num,fn,ln;
	cout<<" Enter number: ";
	cin>>num;
	ln=num%10;
	for(int i=num;num>10;i++){
		
		num=num/10;
	}
	
	fn=num;
	cout<<"First digit: "<<fn<<endl;
	cout<<"Last digit: "<<ln<<endl;
	cout<<"sum of last digit and first digit: "<<ln+fn;
	
	
	
	return 0;
}
