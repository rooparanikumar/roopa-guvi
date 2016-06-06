#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int number;
	cin>>number;
	if(number>0)
		cout<<"number is positive";
		else if(number<0)
			cout<<"number is negative";
			else
				cout<<"number is zero";
	return 0;
}
