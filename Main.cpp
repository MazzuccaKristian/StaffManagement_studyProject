#include "Main.h"

using std::string;

int main(){
    bool isStillWorking = true;
    int choice;
    do
    {
        ShowMainMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch(choice){
            case 0:
                std::cout << "Program ended. Please, wait..." << std::endl;
                isStillWorking = false;
                break;

            case 1:
                CreateNewEmployee();
        }
    } while (isStillWorking);
    
}

void ShowMainMenu(){
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "1) Insert new employee;" << std::endl;
    std::cout << "2) Search for an employee;" << std::endl;
    std::cout << "3) Edit employee's details;" << std::endl;
    std::cout << "0) Exit." << std::endl;
}

void CreateNewEmployee(){
    string name, lastname, role;
    int age;
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Lastname: ";
    std::getline(std::cin, lastname);
    std::cout << "Role: ";
    std::getline(std::cin, role);
    std::cout << "Age: ";
    std::cin >> age;
    Employee newEmployee(name, lastname, role, age);
}