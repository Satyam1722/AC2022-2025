#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main(){
         string S,str;
         cin>>S;
         for(int i=0;i<S.size();i++)
         {
             if(!(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'))
             {
                 str.push_back(S[i]);
             }
         }
      cout<<str;
return 0;
}

