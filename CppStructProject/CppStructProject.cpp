#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char* name;
    Date birthDate;
    float label;
};






struct Person
{
    char* name;
    int age;
    Person* parent;
};




struct Node
{
    int value;
    Node* next;
};


















void StudentPrint(const Student& student)
{
    std::cout << student.name 
              << " [" << student.birthDate.day
              << "." << student.birthDate.month
              << "." << student.birthDate.year << "] "
              << student.label << "\n";
}

void Func(int& x)
{

}


int main()
{
    int size = 20;
    Func(size);

    Student bob;
    
    bob.birthDate.day = 6;
    bob.birthDate.month = 8;
    bob.birthDate.year = 1998;

    bob.label = 11.2f;
    bob.name = new char[20] {};
    strcpy(bob.name, "Bob");

    StudentPrint(bob);
    //std::cout << bob.age << "\n";

    int* ptr = new int;
    *ptr = 100;

    Student* joe = new Student;
    // (*joe).age = 29;
    joe->birthDate.day = 10;
    joe->birthDate.month = 3;
    joe->birthDate.year = 2001;

    joe->label = 10.9;
    joe->name = new char[20]{};
    strcpy(joe->name, "Joe");

    StudentPrint(*joe);

    Student tom = bob;
    StudentPrint(tom);
}
