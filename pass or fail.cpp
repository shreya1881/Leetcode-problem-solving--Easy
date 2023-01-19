#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int a = 3*x;
	    int b = n-x;
	    int c = a-b;
	    if(a-b >= p ) cout<<"PASS\n";
	    else cout<<"FAIL\n";
	}
	return 0;
}