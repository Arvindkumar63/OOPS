#include<iostream>
using namespace std;

class Arvind{
    private:
    int cgpa,lpa;
    public:
    char name;
    int roll;
    void setdata(int cgpa1,int lpa1);
    void getdata(){
        cout<<"Name of the student"<<name<<endl;
        cout<<"student roll number"<<roll<<endl;
        cout<<"total cgpa"<<cgpa<<endl;
        cout<<"tatal package in lpa"<<lpa<<endl;
    }
};

// access modifier
void Arvind :: setdata(int cgpa1,int lpa1){
    cgpa=cgpa1;
    lpa=lpa1;
}
int main(){
    Arvind nits;
    nits.cgpa=9;
    nits.setdata(10,20);
    nits.name=arvind;
    nits.roll=2013063;
nits.getdata();
return 0;
}