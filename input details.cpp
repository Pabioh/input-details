#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variables to store user details
    string name, address, phone, email, occupation;
    int age;

    // Input user details
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear input buffer before taking the next input

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your phone number: ";
    getline(cin, phone);

    cout << "Enter your email: ";
    getline(cin, email);

    cout << "Enter your occupation: ";
    getline(cin, occupation);

    // Display user details
    cout << "\n--- User Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Occupation: " << occupation << endl;

    return 0;
}
