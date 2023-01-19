#include <iostream>
using namespace std;

int main() {
// your code goes here
int t;
cin>>t;
while(t--){
   int a,b;
   cin>>a>>b;
   int x=a;
   int y=a+b;
   int pointa = 500 - (x*2);
   int pointb = 1000 - (y*4);
   int sum1=pointa+pointb;
   
   int z = b;
   int w = b+a;
   int point1 = 1000 - (z*4);
   int point2 = 500 - (w*2);
   int sum2 = point1+point2;
   
   if(sum1>=sum2) cout<<sum1<<endl;
   else cout<<sum2<<endl;
}
return 0;
}