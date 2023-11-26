#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    Employee(const std::string &n, int id, const std::string &dep, const std::string &pos)
        : name(n), idNumber(id), department(dep), position(pos) {}

    Employee(const std::string &n, int id)
        : name(n), idNumber(id), department(""), position("") {}

    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    void setName(const std::string &n) { name = n; }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(const std::string &dep) { department = dep; }
    void setPosition(const std::string &pos) { position = pos; }

    std::string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    std::string getDepartment() const { return department; }
    std::string getPosition() const { return position; }
};

int main() {
    Employee susan("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee mark("Mark Jones", 39119, "IT", "Programmer");
    Employee joy("Joy Rogers", 81774, "Manufacturing", "Engineer");

    std::cout << "Name: " << susan.getName() << ", ID: " << susan.getIdNumber()
              << ", Department: " << susan.getDepartment() << ", Position: " << susan.getPosition() << "\n";

    std::cout << "Name: " << mark.getName() << ", ID: " << mark.getIdNumber()
              << ", Department: " << mark.getDepartment() << ", Position: " << mark.getPosition() << "\n";

    std::cout << "Name: " << joy.getName() << ", ID: " << joy.getIdNumber()
              << ", Department: " << joy.getDepartment() << ", Position: " << joy.getPosition() << "\n";

    return 0;
}
