/*1-s n hvrtelh bvh sondgoi 
toonuudiin niilberiig ol*/
#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	cout<<"Enter limit number: ";
	cin>>num;
	cout<<"sum of odd numbers 1--"<<num<<": "<<sum;
	for(int i=1;i<=num;i++){
		if(i%2==!0){
		sum=sum+i;
		}
	}
	cout<<sum<<" ";
	
	return 0;
}
