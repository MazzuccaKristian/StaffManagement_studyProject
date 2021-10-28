#include <iostream>
#include <string>

using std::string;

class Employee{
    public:
        string Name, Lastname, Role;
        int Age;
    
    public:
        Employee(string name, string lastname, string role, int age = 18){
            Name = name;
            Lastname = lastname;
            Role = role;
            Age = age;
        }
        string ToString();
};