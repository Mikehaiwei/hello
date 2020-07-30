#include<iostream>
#include<string>

using namespace std;

class person
{
    private:
    string name;
    int age;
    string sex;
    public:
    void PrintMessage();
    void resetname(string newname);
    person(string name,int age,string sex);
    ~person();
};

