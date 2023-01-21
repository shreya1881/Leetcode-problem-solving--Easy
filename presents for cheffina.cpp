#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<5) cout<<n<<endl;
	    else if(n==5) cout<<4<<endl;
	    else if(n>5){
	        if(n%5==0){
	            int a = n/5;
	            cout<<n-a<<endl;
	        }
	        else{
	            int b = n/5;
	            cout<<n-b<<endl;
	        }
	    }
	}
	return 0;
}