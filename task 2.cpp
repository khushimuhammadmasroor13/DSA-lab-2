#include<iostream>
using namespace std;
class employee{
    public:
   virtual int calculatesalary()=0;
};
class fulltimeemployee : public employee{
    public:
    int salary;
    fulltimeemployee(int s)
    {
        salary=s;
    }
    int calculatesalary() override{
        return salary;
    }
};
class parttimeemployee : public employee{
    public:
    int perhours ;
    int workdone;
    parttimeemployee(int h,int w)
    {
        perhours=h;
        workdone=w;
        
    }
    int calculatesalary() override{
        return perhours*workdone;
    }
    
};
int main()
{
    employee* e1=new fulltimeemployee(2000);
    employee *e2=new parttimeemployee(100,8);
    cout << "Full time salary is : " << e1->calculatesalary() << endl;
    cout << "Part time salary is : " << e2->calculatesalary() << endl;
    delete e1;
    delete e2;
    return 0;
}
