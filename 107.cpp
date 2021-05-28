/*1-s n hvrtelh bvh tegsh 
toonuudiin niilberiig ol*/
#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	cout<<" Enter limit number: ";
	cin>>num;
	cout<<" Sum of even numbers between 1 to"<<num<<": ";
	for(int i=1;i<=num;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	cout<<sum<<" ";
	
	return 0;
}
