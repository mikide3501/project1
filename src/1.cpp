// File: main.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Ask the user for their name and age
    cout << "What is your name?" << endl;
    string name;
    cin >> name;
    cout << "How old are you?" << endl;
    int age;
    cin >> age;

    // Print a message using the user's name and age
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Loop through the vector and print each number
    for (int i : numbers) {
        cout << i << " ";
    }

    return 0;
}
