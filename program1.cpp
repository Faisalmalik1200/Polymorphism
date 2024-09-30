#include<iostream>
using namespace std;
class paper{
private:
int n=10;
public:
void in()
{
cout<<"Enter number"<<endl;
cin>>n;
}
void out()
{
cout<<"Value of n="<<n;
}
};
int main()
{
paper *ptr;
ptr=new paper;
ptr->in();
ptr->out();
}
_____________