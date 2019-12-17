#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int> l; //deffined list object 
	l.push_back(0);  //first elemennt zero

	//bad idea to use for loop
	for(int i=0;i<10;i++)
	{
		l.push_back(i+1); //pushing back 10 elements
	}

	//iterator stores position of elements 
	//it kind of pointer 
	list<int>::iterator itr=find(l.begin(),l.end(),8); 
	//l.begin() return address of first elemenst
	//l.end() return address of last element
	//find the address of element 8 and stored in 'itr'
	//rather than for loop use iterator to find element

	l.insert(itr,5);  //insert elements
	itr = find(l.begin(),l.end(),7); //find element
	l.erase(itr); //erase element 

	//as random access is not possible have to use iterator 
	for(list<int>::iterator it=l.begin();it !=l.end();it++)
	{
		cout<<*it<<endl; //
	}


	// //splice works with order n time 
	// // To transfer elements from one list to another list at speicific position 
	// list <int> l11 = {4,5,6};
	// list <int> l12  = {2,3,5};

	// //transfer all elements from l1 to l2
   	// l11.splice(l11.end(), move(l2), l12.begin(), l1s2.end());
	
	// // at the beginning of l1 
    // cout << "list l1 after splice operation" << endl; 
    // for (auto x : l11) 
    //     cout << x << " "; 
}

