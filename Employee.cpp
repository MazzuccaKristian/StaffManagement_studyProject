#include "Employee.h"

string Employee::ToString(){
    string formattedString = "Name: " + this -> Name + " Lastname: " +
         this -> Lastname + " Age: " + std::to_string(this -> Age) + " Role: " +
         this -> Role;

    return formattedString;
}