#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Customer {
public:
    //Constructor (parameterized)
    Customer(string name='0', int age=0, int ID=0);
    //getters
    void print() const;
    string getName() const;
    int getAge() const;
    int getID() const;
    //setters
    void setID(int id);
    void setAge(int a);
    void setName(string n);

private:
    string name;
    int age;
    int ID;

};

//Defining Methods outside class

Customer::Customer(string name, int age, int ID)
{
    this->name = name;
    this->age = age;
    this->ID = ID;
}

void Customer::print() const 
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << ID << endl;
}

string Customer::getName() const { return name; }

int Customer::getAge() const { return age; }

int Customer::getID() const { return ID; }

void Customer::setAge(int a)
{
    age = a;
}

void Customer::setID(int id)
{
    ID = id;
}

void Customer::setName(string n)
{
    name = n;
}

int main() {
    Customer c;
    return 0;
}