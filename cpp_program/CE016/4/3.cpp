#include <iostream>
#include<string>
using namespace std;
class Person
{
    string name;
    int age;
    public:
   Person(){}
    Person (string n,int a)
    {
        name = n;
        age = a;
        
    }
    
   // void search();
    void print()
    {
        cout<<age << " "<<name<<"\n";
    }
};



class Family
{
    Person p[20];
    int member_count;
    public:
    Family()
    {
        member_count = 0;
    }
    void add_member(string n,int i)
    {
        p[member_count] = Person(n,i);
        member_count++;
    }
    void print()
    {
        for(int i=0;i<member_count;i++)
            p[i].print();
    }
};
int main() {
    int num;
    cin>>num;
    Family f;
    for(int i=0;i<num;i++)
    {
       string n;
        int j;
       cin>>n>>j;
        f.add_member(n,j);
    }
    f.print();
    
    return 0;
}
