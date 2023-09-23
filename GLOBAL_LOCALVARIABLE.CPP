#include<iostream.h>
#include<conio.h>
int x=10; //global variable
void main()
{
int x=20;   //local variable
cout<<"local x:"<<x;
cout<<"global x:"<<::x;
::x=50; //global variable declared inside the block with the help of ::
cout<<"local x:"<<x;
cout<<"global x"<<::x;//
getch();
}
