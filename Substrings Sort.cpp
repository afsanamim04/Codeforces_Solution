#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string lhs, const string rhs)
{
    return lhs.length() < rhs.length();
}

int main()
{
    //string vector
    int n;
    cin>>n;
    vector<string> v ;
    string str;
    for(int i=0; i<n; ++i)
    {
        cin>>str;
        v.push_back(str);
    }

    //sort string vector based on string length
    sort(v.begin(), v.end(), cmp);

    //print result vector
    int cnt=0,c=0;
    for(int i=n-1; i>=1; --i)
    {
        if(v[i].find(v[i-1])!=string::npos)
        {
            cnt++;
        }
        else
        {
            c=1;
            break;
        }
    }
    if(c==1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for ( auto& element : v )
        {
            cout << element <<endl;
        }
    }
}
