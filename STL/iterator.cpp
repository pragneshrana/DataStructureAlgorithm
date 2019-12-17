//iterator: It is like pointers and it stores address
//it is closely associated with data types

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{   
    //vector
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(rand()%100);
    }

    // vector iterator can increamented by any value 
    for(vector <int>::iterator it=v.begin();it != v.end();it++)
    {
        cout<<*it+2<<endl;
    }

    //set
    cout<<"set copying..."<<endl;
    set<int> s;

    //copying the data works with set map and list
    copy(v.begin(),v.end(),inserter(s,s.begin()));

    for(set<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout<<*it<<endl;
    }

   //sorting
   vector<int>::iterator it;
   cout<<"FIND"<<endl;
   it = find(v.begin(),v.end(),41);
   cout<<*it<<endl;
   sort(v.begin(),v.end());

   for(vector<int>::iterator it=v.begin(); it!=v.end();it++)
   {
       cout<<*it<<endl;
   }


    
}