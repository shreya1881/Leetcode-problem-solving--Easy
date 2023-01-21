#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    float a  = sqrt((x2*x2)+(y2*y2));
	    float b = sqrt((x1*x1)+(y1*y1));
	    if(a==b) cout<<"EQUAL\n";
	    else if (a>b) cout<<"BOB\n";
	    else cout<<"ALEX\n";
	}
	return 0;
}