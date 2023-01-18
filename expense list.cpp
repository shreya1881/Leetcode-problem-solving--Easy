#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a = pow(2,x);
	    if(n==1)
	    cout<<a/2<<endl;
	    else{
	    int sum=a/2;
	    int b = sum;
	    for(int i=2; i<=n; i++)
	    {
	        sum = sum/2;
	        b+=sum;
	    }
	  
	    cout<<a-b<<endl;
	    }
	}
	return 0;
}
