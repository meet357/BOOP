#include<iostream.h>
#include<conio.h>
class test
{
public:
	int x;

test retobj(int x)
{
	this->x=x;
	return *this;
}
void disp()
{
cout<<x;
}};
int main()
{
test t;
clrscr();
test p=t.retobj(5);
p.disp();
getch();
return 0;
}