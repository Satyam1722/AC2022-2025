#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],v[2];

	for(int i=0;i<n;i++)
		cin>>a[i];


      for(int i=0;i<n;i++)
      {
          if(v[0]>a[i])
          {
              
              v[1]=v[0];
              v[0]=a[i];
          }
          
          if(v[1]>a[i] && v[0]!=a[i])
          v[1]=a[i];
      }
      if(v[1]==99999)
      v[0]=-1;

  if(v[0]==-1)
  	cout<<v[0];
  else
  	cout<<v[0]<<" "<<v[1]<<endl;

  return 0;
}