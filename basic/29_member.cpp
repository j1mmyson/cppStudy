#include <iostream>
using namespace std;

class Person {
private:
    string name_;
    int age_;
public:
    static int personCount_;
    Person(const string& name, int age);
    ~Person() { personCount_ --; }
    void showPersonInfo();
};

int Person::personCount_ = 0;

int main() {
    Person p1 = Person("Wook", 25);
    p1.showPersonInfo();
    Person p2 = Person("son", 22);
    p2.showPersonInfo();


    return 0;
}

Person::Person(const string& name, int age) {
    name_ = name;
    age_ = age;
    cout << ++personCount_ << "번째 사람이 생성되었습니다." << endl;
}

void Person::showPersonInfo() {
    cout << "name: " << name_ << endl;
    cout << "age: " << age_ << endl;
}
