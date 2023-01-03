#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

int index[3]={0};
    for(int i=0;i<n;i++)
             index[a[i]]++;


             for(int i=0;i<n;i++)
            {
                if(index[0]!=0)
                {
                    index[0]--;
                    a[i]=0;
                }
              else if(index[1]!=0)
                { 
                    index[1]--;
                    a[i]=1;
                }    
              else
                {
                           index[2]--;
                    a[i]=2;
                }

            }
            for(int i=0;i<n;i++)
            cout<<a[i];

return 0;
}

