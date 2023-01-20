#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if(x!=a && x!=b && y!=a && y!=b)
	    cout<<"2\n";
	    else if(x!=a && y==b) cout<<"1\n";
	    else if(x!=b && y==a) cout<<"1\n";
	    else if(y!=a && x==b) cout<<"1\n";
	    else if(y!=b && x==a) cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}