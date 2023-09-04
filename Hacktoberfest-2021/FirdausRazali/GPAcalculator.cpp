#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    float totalCredHrs = 0, finalCredHrs;
    string arrSubject[10] = {"Bahasa Melayu","Bahasa Inggeris","Sejarah","Matematik Moden","Matematik Tambahan","Fizik","Kimia","Pend. Islam / Pend. Moral","Biologi / Prinsip Akaun","Pendidikan Jasmani"};
    int arrCredHrs[10] = {5, 5, 3, 4, 5, 5, 4, 4, 4, 2};
    string userGrade[10];
    float userPointer[10];

    cout << "Enter the grade for each subject (e.g. A+, or A, or A-, etc.)\n\n";

    for (int i = 0; i < 10; i++){
        cout << arrSubject[i] << ": ";
        cin >> userGrade[i];
    }

    for (int i = 0; i < 10; i++){
        if (userGrade[i] == "A+"){
            userPointer[i] = 4.00;
        } else if (userGrade[i] == "A"){
            userPointer[i] = 4.00;
        } else if (userGrade[i] == "A-"){
            userPointer[i] = 3.75;
        } else if (userGrade[i] == "B+"){
            userPointer[i] = 3.50;
        } else if (userGrade[i] == "B"){
            userPointer[i] = 3.25;
        } else if (userGrade[i] == "B-"){
            userPointer[i] = 3.00;
        } else if (userGrade[i] == "C+"){
            userPointer[i] = 2.75;
        } else if (userGrade[i] == "C"){
            userPointer[i] = 2.50;
        } else if (userGrade[i] == "C-"){
            userPointer[i] = 2.25;
        } else if (userGrade[i] == "D"){
            userPointer[i] = 2.00;
        } else if (userGrade[i] == "E"){
            userPointer[i] = 1.00;
        } else if (userGrade[i] == "F"){
            userPointer[i] = 0.00;
        }
    }

    for (int i = 0; i < 10; i++){
        totalCredHrs += userPointer[i] * arrCredHrs[i];
    }

    finalCredHrs = totalCredHrs / 41;
    cout << "\nGPA: " << fixed << setprecision(2) << finalCredHrs;

    return 0;
}