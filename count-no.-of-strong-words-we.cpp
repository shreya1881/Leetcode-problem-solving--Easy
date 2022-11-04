/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000];
    gets(str);
    int n=strlen(str);
    int e[n];
    for(int i=0; i<n; i++)
    {
        if(str[i]=='e')
        e[i]=1;
        else
        e[i]=0;
    }
    int pse[n];
    pse[n-1]=e[n-1];
    for(int i=n-2; i>=0; i--)
    {
        pse[i]=pse[i+1]+e[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='w')
        c+=pse[i];
    }
    cout<<c;

    return 0;
}