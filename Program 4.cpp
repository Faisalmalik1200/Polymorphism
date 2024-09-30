#include<iostream>
using namespace std;
class vehicle{
public:
void show()
{
cout<<"vehicle"<<endl;
}
};
class bus: public vehicle
{
public:
void show()
{
cout<<"bus"<<endl;
}
};
class truck: public vehicle
{
public:
void show()
{
cout<<"truck";
}};
int main()
{
vehicle v;
bus b;
truck t;
vehicle *ptr;
ptr=&v;
ptr->show();
ptr=&b;
ptr->show();
ptr=&t;
ptr->show();
}



