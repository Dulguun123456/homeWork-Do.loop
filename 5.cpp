#include<iostream>
using namespace std;
int main()
{	
	int l;
	cout<< "Number limit: ";
	cin>>l;	
	cout<<"odd numbers: ";
	for(int i=1;i<=l;i++){
		if(i%2==!0){
		
			cout<<i<<"  ";
		}
	}
	
	return 0;
}
