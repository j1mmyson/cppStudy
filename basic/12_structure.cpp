#include <iostream>

using namespace std;

struct User {
    string name;
    int age;

};

User initUser () {
    User user;
    user.name = "noname";
    user.age = 0;

    return user;
}

void setDefault(User* user) {
    user->name = "GilDong";
    user->age = 20;
}

int main() {
    
    User user = initUser();

    cout << user.name << endl << user.age << endl;
    setDefault(&user);

    cout << user.name << endl << user.age << endl;
    return 0;
}

