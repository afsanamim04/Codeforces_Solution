#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0,ans=0;
    if(s.size()==1){
		  cout<<'0'<<endl;
		  return 0;
	  }
	  for(int i=0;i<s.size();i++)
	  {
		  sum=sum+s[i]-'0';
	  }
	  if(sum==0){
		  cout<<"0"<<endl;
		  return 0;
	  }
	  else if(sum>=1&&sum<=9){
		  cout<<1<<endl;
		  return 0;
	  }
	  for(int j=0;;j++)
	  {
		  for(int i=0;i<s.size();i++)
		  {
			  sum=sum+s[i]-'0';
		  }
		  ans++;
		  //cout<<"sum "<<sum<<endl;
		  s=to_string(sum);
		  if(sum>=1&&sum<=9)break;
		  sum=0;

	  }
	  cout<<ans<<endl;
}
