/*1-s n hvrtelh bvh natural
toonii niilberiig ol*/
#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	cout<<" Enter limit number: ";
	cin>>num;
	cout<<" sum of natural numbers between 1to"<<num<<": ";
	for(int n=1;n<=num;n++){
		sum=sum+n;
	}

	 cout<<sum<<" ";
	return 0;
}
