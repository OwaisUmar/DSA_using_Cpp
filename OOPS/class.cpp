#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;
    char gender;

    void setName(string s)
    {
        name=s;
    }

    void getName()  
    {
        cout<<name<<endl;
    }

    student()                           //Default Consrtuctor
    {
        cout<<"Default Consrtuctor"<<endl;
    }

    student(string s, int a, char c)    //parametrized constructor
    {
        name=s;
        age=a;
        gender=c;
        cout<<"Parametrized Constructor"<<endl;
    }

    // student(student &a)
    // {
    //     name=a.name;
    //     age=a.age;
    //     gender=a.gender;
    //     cout<<"Copy Constructor"<<endl;
    // }

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }

    void printInfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
            return true;
        return false;
    }
};

int main()
{
    // student arr[1];
    // for(int i=0; i<1; i++)
    // {
    //     cout<<"Enter:\n";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0; i<1; i++)
    //     arr[i].printInfo();
    student a("Owais", 21, 'M');
    // a.printInfo();
    student b("Zahida", 20, 'F');
    student c=a; //or student c(b);
    // c.printInfo();

    if(a==c)
        cout<<"Same"<<endl;
    else
        cout<<"Not Same"<<endl;

    return 0;    
}
