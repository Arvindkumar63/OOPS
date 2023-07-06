#include <iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    
    void setid(void){
        salary=7474;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"the id of this employee is"<<id<<endl;
    }
};

int main()
{
    employee arvind,pankaj,rohan;
    for(int i=0;i<3;i++){
    arvind.getid();
    arvind.setid();
    }
cout<<"whtis thids"<<endl;
    return 0;
}


// Array of Objects & Passing Objects as Function Arguments in C++ | C++ Tutorials for Beginners #25


class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}