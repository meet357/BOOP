#include<iostream.h>
#include<conio.h>
class base
{
public:
   int base_i;
   void disp_base()
   {
     cout<<"from base class:"<<base_i<<endl;
   }
};

class derived:public base
{
public:
    int derived_i;
    void disp_derived()
    {
      cout<<"from derived class:"<<derived_i<<endl;
      cout<<"from base class:"<<base_i<<endl;
    }
};

class test:public derived
{
public:
   int test_i;
   void disp_test()
   {
      cout<<"from test class:"<<test_i<<endl;
      cout<<"from derived class:"<<derived_i<<endl;
      cout<<"from base class:"<<base_i<<endl;
   }
};



int main()
{
      base b;
      derived d;
      test t;

      clrscr();

      b.base_i=5;

      d.derived_i=10;
      d.base_i=15;

      t.test_i=20;
      t.derived_i=30;
      t.base_i=40;

      cout<<"base class:"<<endl;
      b.disp_base();

      cout<<"derived class:"<<endl;
      d.disp_base();
      d.disp_derived();

      cout<<"test class:"<<endl;
      t.disp_base();
      t.disp_derived();
      t.disp_test();


     return 0;
     }


