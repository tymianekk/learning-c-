#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int characters;

int main() {
    srand(time(nullptr));
    string lowercase = "abcdefghijklmnoqprstuvwxyz";
    string uppercase = "ABCDEFGHIJKLMNOQPRSTUVWXYZ";
    string special;
    string numbers = "0123456789";
    string allCharacters = lowercase + uppercase + special + numbers;
    string generatedPassword = ""; 
    int numOfCharacters;

    cout << "Enter the number of characters: ";
    cin >> numOfCharacters;
    cout << "Special characters (don't use spaces; characters after a space will be ignored): ";
    cin >> special;

    allCharacters = lowercase + uppercase + special + numbers;

    for (int i = 0; i < numOfCharacters; i++) {
        int index = rand() % allCharacters.size();
        generatedPassword += allCharacters[index]; 
    }

    cout << "Generated password: " << generatedPassword;

    return 0; 
}