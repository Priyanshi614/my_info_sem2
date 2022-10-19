#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int total_bonus=0,eng_bonus=0,manager_bonus=0,team_leader_bonus=0;

class Engineer
{
    int salary;
    string name,team_name;
public:
    void print_and_calc_bonus()
    {
        cout<<name<<" "<<salary<<endl;
        eng_bonus+=(salary*0.25);    //25% bonus
    }
    void set(int salary,string name)
    {
        this->salary=salary;
        this->name=name;
        print_and_calc_bonus();
    }
    int get_salary()
    {
        return salary;
    }
    string get_name_and_team_name(char query)
    {
        if(query=='N')
            return name;
        else
            return team_name;
    }
};
class Manager
{
    int salary;
    string name,region_name;
public:
    void print_and_calc_bonus()
    {
        cout<<name<<" "<<salary<<endl;
        manager_bonus+=(salary*0.3); // 30% bonus
    }
    void set(int salary,string name)
    {
        this->salary=salary;
        this->name=name;
        print_and_calc_bonus();
    }
    int get_salary()
    {
        return salary;
    }
    string get_name_and_region_name(char query)
    {
        if(query=='N')
            return name;
        else
            return region_name;
    }

};
class TeamLeader
{
    int salary,team_size;
    string name,team_name;
public:
    void print_and_calc_bonus()
    {
        cout<<name<<" "<<salary<<endl;
        team_leader_bonus+=(salary*0.28); // 28% bonus
    }
    void set(int salary,string name)
    {
        this->salary=salary;
        this->name=name;
        print_and_calc_bonus();
    }
    int get_salary()
    {
        return salary;
    }
    int get_team_size()
    {
        return team_size;
    }
    string get_name_and_team_name(char query)
    {
        if(query=='N')
            return name;
        else
            return team_name;
    }

};
int main() 
{
    char empl;
    int n,salary;
    string nm;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>empl;
        switch(empl)
        {
            case 'E':
            {
                cin>>salary;
                getline(cin,nm);
                Engineer e;
                e.set(salary,nm);
                break;
            }
            case 'M':
            {
                cin>>salary;
                getline(cin,nm);
                Manager m;
                m.set(salary,nm);
                break;
            }
            case 'T':
            {
                cin>>salary;
                getline(cin,nm);
                TeamLeader t;
                t.set(salary,nm);
                break;
            }
        }
    }
    total_bonus=eng_bonus+team_leader_bonus+manager_bonus;
    cout<<eng_bonus<<" "<<team_leader_bonus<<" "<<manager_bonus<<" "<<total_bonus;
    
    return 0;
}

