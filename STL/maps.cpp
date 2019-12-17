// map: it similar to set as it stores the info in the form 
// of binary tree. but diffn is data is sorted by keys
//maps stores the data in the form of the pair
#include<iostream>
#include<map>
using namespace std;

int main()
{
    pair<char,int> x; 
    // map<char,int> m;
    multimap<char,int> m;

    //charcter in the form of ascii code 
    for(char ch='a';ch<='z';ch++)
    {
        x.first = ch;
        x.second = (int) ch;
        
        m.insert(x);
    }

    //multimap can store duplicate keys
    x.first = 'j';
    x.second = 1000;
    m.insert(x);

    //looping over iterator
    map<char,int>::iterator it=m.begin();
    for (it =m.begin();it != m.end();it++)
    {
        cout<<(*it).first<<""<<(*it).second<<endl;
    }

    //iteraor
    it = m.find('j');
    cout<<(*it).second<<endl;

    //accessing map SIMPLER
    // cout<<m['j']<<endl; //works only for map as it has unique value
}