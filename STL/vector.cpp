#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v(10); //vector defined 
    for (int i=0;i<v.size();i++)
    {
        v[i] = i*10;
        cout<<v[i]<<endl;
    }

    cout << v.empty() <<endl; //empty or not
    v.push_back(-1); //apends values to array
    cout<<v[10]<<endl;  // vector size increased by 1

    v.resize(15); //resized the array 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    vector <int>  v1 = v; //copying the vector into anothe 
}
