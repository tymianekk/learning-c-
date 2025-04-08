#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> strings;
    string inputString;

    cout << "Wpisz słowo do wylosowania: ";
    cin >> inputString;
    strings.push_back(inputString);    

    while(inputString != ".-0") {
        cout << "Wpisz kolejne słowo do wylosowania (Aby zakończyć wpisz \".-0\"): ";
        cin >> inputString;
        strings.push_back(inputString);
    }

    if (strings.size() > 1) {
        strings.pop_back();
    }
    srand(time(nullptr));
    int index = rand() % strings.size();
    cout << strings[index];

    return 0;
}