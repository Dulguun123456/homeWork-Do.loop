/*1-s N hvrtelh bvh tegsh toonuudiig
hewleh programm bich*/
#include<iostream>
using namespace std;
int main()

{
	int num;
	cout<<"Enter limit number: ";
	cin>>num;
	cout<<"Even numbers: ";
	for(int n=1;n<=num;n++){
		if(n%2==0){
			cout<<n<<" ";
		}
	}
	
	return 0;
}
