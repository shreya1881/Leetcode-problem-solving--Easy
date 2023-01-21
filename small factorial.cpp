#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
    return 1;
    else return n*factorial(n-1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a = factorial(n);
	    cout<<a<<endl;
	}
	return 0;
}