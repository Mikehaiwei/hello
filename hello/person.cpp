#include "include/person.h"

void person::PrintMessage()
{
    cout<<"乘客姓名："<<name<<" 年龄:"<<age<<" 性别:"<<sex<<endl;
}

person::person(string iname,int iage,string isex)
{
    name=iname;
    age=iage;
    sex=isex;
}

void person::resetname(string newname)
{
    name=newname;
}

person::~person(){}