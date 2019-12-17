// Template if you want to function with different 
// datatypes. 
#include<iostream>
using namespace std;

// Tempalte classs
template <class T>
class something
{
    public:
        T a[2];
        T add();
        something(); //constructor

};

template <class T>
something<T>::something()
{
    cin>>a[0]>>a[1];
}

template <class T>
T something<T>::add()
{
    return a[0]+a[1];
}

//Template Function
int add(int a, int b)
{
    return a+b;
}

float add(float a,float b)
{
    return a+b;
}

// Rather than calling with different datatype 
// let's call with just template of data type and 
// pass datatype while calling
template <typename T>
T add(T a, T b)
{
    return a+b;
}


#
int main()
{
    int x = 20;
    int y = 30;
    float a = 20.04;
    float b = 30.05;

    //FUNCTION TEMPLATE
    cout<<add(a,b)<<endl;
    cout<<add(x,y)<<endl;
    cout<<add<float>(a,b)<<endl;
    cout<<add<int>(x,y)<<endl;


    //class templates
    something<float> FloatSomething;
    cout<<FloatSomething.add(); //input will be taken by constructor



}

