#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s[10000];
  gets(s);
  int n=strlen(s);
  int y[n],u[n],count=0;
  for(int i=0; i<n; i++)
  {
    if(s[i]=='y')
    y[i]=1;
    else y[i]=0;
  }
  for(int i=0; i<n; i++){
    if(s[i]=='u')
    u[i]=1;
    else u[i]=0;
  }
  int psy[n],psu[n];
  psy[0]=y[0];
  psu[n-1]=u[n-1];
  for(int i=1; i<n; i++)
  psy[i]=psy[i-1]+y[i];
  for(int i=n-2; i>=0; i--)
  psu[i]=psu[i-1]+u[i];
  for(int i=0; i<n; i++){
    if(s[i]=='o')
    count+=(psy[i]*psu[i]);
  }
  cout<<count;
  return 0;
}