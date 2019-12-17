#include<iostream>
#include<deque>
// deque have access from both sides

using namespace std;

int main()
{
    deque<int> d(5);

    for(int i=0;i<5;i++)
    {
        d[i] = i+1;
    }

    d.push_back(10); //appending to back
    d.push_front(2); //appending to front

    for(int i=0;i<7;i++)
    {
        cout<<d[i]<<endl;
    }
}
