#include <iostream>
#include <string>

class Employee
{
public:
    Employee(std::string name) : name_(name) {}

    void print_info() const { std::cout << "Name: " << name_ << std::endl; }
    std::string get_name() const { return name_; }

private:
    std::string name_;
};

class Manager : public Employee
{
public:
    Manager(std::string name, std::string department) : Employee(name), department_(department) {}

    void print_info() const
    {
        Employee::print_info();
        std::cout << "Head of the " << department_ << std::endl;
    }

private:
    std::string department_;
};

int main(void)
{
    Employee employee("Simpson");
    Manager manager("Mr. Burns", "Nuclear Power Plant");
    Employee *base_ptr = &manager;
    base_ptr -> print_info(); // same as (*base_ptr).print_info();
    return 0;
}
