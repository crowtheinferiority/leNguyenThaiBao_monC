#include <iostream>
#include <string>

class PersonalInfo {
private:
    std::string name;
    std::string address;
    int age;
    std::string phoneNumber;

public:
    PersonalInfo(const std::string &n, const std::string &a, int ag, const std::string &p)
        : name(n), address(a), age(ag), phoneNumber(p) {}

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
    int getAge() const { return age; }
    std::string getPhoneNumber() const { return phoneNumber; }

    void setName(const std::string &n) { name = n; }
    void setAddress(const std::string &a) { address = a; }
    void setAge(int ag) { age = ag; }
    void setPhoneNumber(const std::string &p) { phoneNumber = p; }
};

int main() {
    PersonalInfo me("My Name", "My Address", 30, "555-555-5555");
    PersonalInfo friend1("Friend 1", "Friend 1's Address", 25, "555-555-5555");
    PersonalInfo friend2("Friend 2", "Friend 2's Address", 35, "555-555-5555");

    std::cout << "My name: " << me.getName() << ", address: " << me.getAddress()
              << ", age: " << me.getAge() << ", phone number: " << me.getPhoneNumber() << "\n";

    std::cout << "Friend 1's name: " << friend1.getName() << ", address: " << friend1.getAddress()
              << ", age: " << friend1.getAge() << ", phone number: " << friend1.getPhoneNumber() << "\n";

    std::cout << "Friend 2's name: " << friend2.getName() << ", address: " << friend2.getAddress()
              << ", age: " << friend2.getAge() << ", phone number: " << friend2.getPhoneNumber() << "\n";

    return 0;
}
