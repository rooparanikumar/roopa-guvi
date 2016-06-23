#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	char inputString[1000],reverseString[1000];
	int i,len,j=0;
    cin>>inputString;
    len=strlen(inputString);
	for(i=len-1;i>=0;i--)
	{
	    reverseString[j++]=inputString[i];
	}
	for(i=0;i<j;i++)
	{
	   cout<<reverseString[i];
	}
	return 0;
}
