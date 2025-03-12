#include<iostream>
#include<string.h>
using namespace std;
class Cuboid
{
    private:
    int length,breadth, height;
    public:
    Cuboid(int a,int b,int c)
    {
        length=a;
        breadth=b;
        height=c;
    }
};


class Customer
{
    private:
    int cust_id;
    string name,email,mobile;
    public:
    Customer()
    {
        cust_id=2;
        name="Vivek";
        email="vivek@gmail.com";
        mobile="893083920";
    }
    Customer(int a,string n,string e,string m)
    {
        cust_id=a;
        name=n;
        email=e;
        mobile=m;
    }

};
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int a,int b,int c):hr(a),min(b),sec(c)
    {}
};

class Book
{
    private:
    int book_id;
    string title;
    double price;
    public:
    Book()
    {
        book_id=1;
        title="C";
        price=500;
    }
    Book(int b,string c,double p)
    {
        b=book_id;
        c=title;
        p=price;
        
    }
};

class complex
{
    private:
    int real,imag;
    public:
    complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    void showData()
    {
        cout<<real<<imag;
    }

};

void example()
{
    complex c[5]={complex(10,20),complex(2,4),complex(3,6),complex(6,8),complex(45,64)};
    for(int i=0;i<=4;i++)
    {
        c[i].showData();
    }
}


class Numbers
{
    private:
        int size;
        int *arr;
    public:
        Numbers(int size)
        {
            this->size=size;
            arr=new int(size);
        }
        Numbers(Numbers &N)
        {
            size=N.size;
            arr=new int[size];
        }
        ~Numbers()
        {
            delete []arr;
        }


};

class student
{
    private:
        int rollno;
        string name;
    public:
        student()
        {
            cout<<"Enter roll number";
            cin>>rollno;
            cout<<"Enter name ";
            cin>>name;
        }
        void showStudent()
        {
            cout<<endl<<rollno<<" "<<name;
        }
};

class Date
{
    private:
        int d,m,y;
    public:
        Date(int a,int b,int c):d(a),m(b),y(c)
        {

        }

};

class Room
{
    private:
        int room_number;
        string room_type;
        bool is_AC;
        float price;
    public:
        Room(int r,string rt,bool ac,float p)
        {
            room_number=r;
            room_type=rt;
            is_AC=ac;
            price=p;
        }

};

class Circle
{
    int r;
    Circle(int a)
    {
        r=a;
    }
    Circle()
    {
        r=1;
    }

};