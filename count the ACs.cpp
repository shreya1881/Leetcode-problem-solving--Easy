#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    if(p==100) cout<<1<<endl;
	    else if(p==0) cout<<0<<endl;
	    else if(p>100){
	        int a = p%100;
	        int b = p/100;
	        if((a+b)>10) cout<<-1<<endl;
	        else cout<<a+b<<endl;
	    }
	    else{
	        if(p>10) cout<<-1<<endl;
	        else cout<<p<<endl;
	    }
	}
	return 0;
}
