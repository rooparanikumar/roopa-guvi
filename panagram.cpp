#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main() 
{
    char a[1000],b[27]="abcdefghijklmnopqrstuvwxyz";
    static int v[26],i,j;
    gets(a);
    for(i=0;i<26;i++)
        for(j=0;j<strlen(a);j++)
        if( (b[i]==a[j]) || (b[i]-32==a[j]) )
                v[i]++;
    for(i=0;i<26;i++)
        if(v[i]==0)
        {
            cout<<"not pangram";
            exit(0);
        }
    cout<<"pangram";
    return 0;
}
