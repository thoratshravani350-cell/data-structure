 #include<iostream>
using namespace std;
int main() 
{
int rollNumbers[5];
    cout << "=== Student Performance & Ranking Management System ===" << endl;
    cout << "Enter the roll numbers of 5 students:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Enter roll number for student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }
    cout << "\n==========================================" << endl;
    cout << "Displaying entered roll numbers:" << endl;
    cout << "==========================================" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << " Roll Number: " << rollNumbers[i] << endl;
    }

    return 0;
