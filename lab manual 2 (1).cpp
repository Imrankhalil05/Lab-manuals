#include<iostream>
using namespace std;

int main()
{
// task 1
    // Declaration of variables
    float marks;
    char grade;
    //Ask user to input their marks
    cout<< "Enter your score: "<<endl;
    cin >> marks;
    // Assign the marks to certain grades
    if (marks >= 90) {
    grade = 'A';
    }
    else if (marks >= 75) {
    grade = 'B';
    }
    else if (marks >= 60) {
    grade = 'C';
    }
    else if (marks >= 45) {
    grade = 'D';
    }
    else { grade = 'F';
    }
    cout << "The student's grade is: " <<grade <<endl;
    
    // task 2
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0 && number % 5 == 0) {
        cout << "The number is both even and divisible by 5." << endl;
    } else {
        cout << "The number is not both even and divisible by 5." << endl;
    }
//task 3
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    //task 3
    float gpa;
    float attendPercent;

    cout << "Enter the student's GPA: ";
    cin >> gpa;

    cout << "Enter the student's attendance percentage: ";
    cin >> attendPercent;

    if (gpa >= 3.5 && attendPercent >= 80) {
        cout << "The student is eligible for a scholarship." << endl;
    } else {
        cout << "The student is not eligible for a scholarship." << endl;
    }
    //task 4
    char letter;

    cout << "Enter a character: ";
    cin >> letter;

    // Use logical operators to check if the character is a vowel
    if ((letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') ||
        (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')) {
        cout << "vowel" << endl;
    } else if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
    // Display if it is a consonant.
        cout << "consonant" << endl;
    } else {
        cout << "not a letter" << endl;
    }
    return 0;
}