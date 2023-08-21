#include <iostream>

using namespace std;

int main() {
    for (int age = 15; age < 18; age++) {
        cout << "turning to " << age << endl;
        if (age == 17) {
            age++;
            cout << "turned to " << age;
        }
    }


    return 0;
}

