#include <iostream>
using namespace std;

class Student {
    int age;

   public:

    // constructor initializes age to 12
    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {

    // dynamically declare Student object
    Student* ptr = new Student();    // A method to create object dynamically
 
     // call getAge() function
    ptr->getAge();            

    Student obj;                 // Dilapidated method to creat object
    obj.getAge();
   

    // ptr memory is released
    delete ptr;

    return 0;
}
