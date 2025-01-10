#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variables to store user details
    string name, address;
    int age;

    // Input user details
    cout << "Enter your name: ";
    getline(cin, name); // Using getline to allow spaces in the name

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear input buffer before taking the next input

    cout << "Enter your address: ";
    getline(cin, address); // Using getline to allow spaces in the address

    // Display user details
    cout << "\n--- User Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;

    return 0;
}