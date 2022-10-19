#include <iostream>
#include <string>
using namespace std ;
class Employee{
    string employee_id, employee_name,designation;
     int salary;
    public :
   Employee(){
       
   }
    Employee(string employee_id,string  employee_name,string designation , int salary){
        this->employee_id=employee_id;
        this->employee_name=employee_name;
        this->designation=designation;
        this->salary=salary;
    }
    void increment(int num){
        salary += num;  
      /// return *this ;
    }
    friend class Company;
};

class Company{
    string name ;
   // Employee e[10];
    public :
    Employee e[10];
    Company(string name){
        this->name = name ;
    }
    int count=0; 
    void add_employee(Employee E){
        int j =0 ;
        for(int i= 0;i < count ;i++){
            if(e[i].employee_id==E.employee_id)
                j++;}
        if(j==0){e[count]= E;
        count++;}
        
    }
    void print(){
        for(int i=0;i<count ; i++){
        cout <<  e[i].employee_id<<" " << e[i].employee_name << " "<< e[i].designation << " "<< e[i].salary << endl;
        }
    }
    void increase_salary(string  employee_id , int increment_amount){
        for(int i=0; i < count ; i++){
            if(e[i].employee_id == employee_id)
                e[i].increment(increment_amount);
        }
    }
};

int main() {
    string name;
    cin >> name  ;
    Company MyCompany(name);
    int n ;
    cin >> n ;
    string employee_id, employee_name, designation ;
    int salary ;
    
    for(int i = 0 ; i < n ; i++){
        cin >> employee_id >> employee_name >> designation >> salary ;
        Employee e(employee_id , employee_name , designation , salary);
        MyCompany.add_employee(e);
        }
    int m,increment_amount;
    cin >> m;
    for(int i=0 ; i < m ; i++){
        cin >> employee_id  >> increment_amount;
        MyCompany.increase_salary( employee_id , increment_amount);
    }
    MyCompany.print();
    return 0;
}
