// sets store the data in the form of binary searh tree
// and it search the data really fast as store data is always 
//in the sorted form 

#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;//defined container object //contains only unique values
	// multiset<int> s;//for repeated values

	//data stored in descending order 
	for(int i=0;i<10;i++)
	{
		s.insert(10-i);
	}
	
	//finding the address of the 6
	set<int>::iterator it;
	it = s.find(6);
	

	//erasing 6
	s.erase(it);

	//IMP: If you add repeated value then nothing will
	//happen as set contains only unique values

	//To have repeated values we have to use multiset
	s.insert(1);

	

	//we can see that data is still sorted 
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
}
