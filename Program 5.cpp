#include<iostream>
#include<conio.h>
using namespace std;
class person{
private:
char name[50];
public:
void get()
{
cout<<"Enter your name"<<endl;
cin>>name;
}
void show()
{
cout<<"your name="<<name<<endl;
}
};
int main()
{
person *ptr[6];
int i;
for(i=0;i<6;i++)
{
ptr[i] = new person;
ptr[i]->get();
}
for(i=0;i<6;i++)
ptr[i]->show();
}
