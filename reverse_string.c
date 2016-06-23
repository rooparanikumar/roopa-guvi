#include <stdio.h>

int main(void) {
	// your code goes here
	char inputString[1000],reverseString[1000];
	int i,len=0,j=0;
	scanf("%s",inputString);
    len=strlen(inputString);
	for(i=len-1;i>=0;i--)
	{
	    reverseString[j++]=inputString[i];
	}
	for(i=0;i<j;i++)
	{
	    printf("%c",reverseString[i]);
	}
	return 0;
}

