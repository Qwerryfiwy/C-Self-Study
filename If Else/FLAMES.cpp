#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate the number of common characters
int get_common_char_count(string name1 /* abcd */, string name2/* abce */) {
    int letters[26] = {0};
    int common_count = 0;

    // Count occurrences of characters in name1
    for (char ch : name1) {
        if (ch != ' ') {
            letters[ch - 'a']++;//a-a=0//at index 0=> 1 at Index 1 =>1 2=>1 3=>1 4=>0;
        }
    }

    // Count the common characters with name2
    for (char ch : name2) {
        if (ch != ' ' && letters[ch - 'a'] > 0) {
            common_count++;//a is present so cc++
            letters[ch - 'a']--; // Remove the character to avoid duplicate counting
        }
    }

    return common_count;
}

// Function to calculate the FLAMES result
void flames_game(int count) {
    string flames = "FLAMES";

    while (flames.size() > 1) {
        int pos = (count % flames.size() - 1 + flames.size()) % flames.size();
        flames.erase(flames.begin() + pos); // Remove the letter at the calculated position
    }

    cout << "Result: " << flames[0] << " -> ";
    switch (flames[0]) {
        case 'F': cout << "Friends" << endl; break;
        case 'L': cout << "Love" << endl; break;
        case 'A': cout << "Affection" << endl; break;
        case 'M': cout << "Marriage" << endl; break;
        case 'E': cout << "Enemies" << endl; break;
        case 'S': cout << "Siblings" << endl; break;
    }
}

int main() {
    string name1, name2;

    cout << "Enter the first name: ";
    getline(cin, name1);
    cout << "Enter the second name: ";
    getline(cin, name2);

    // Convert both names to lowercase
    transform(name1.begin(), name1.end(), name1.begin(), ::tolower);
    transform(name2.begin(), name2.end(), name2.begin(), ::tolower);

    // Calculate the count of common characters
    int common_count = get_common_char_count(name1, name2);

    // Perform the FLAMES calculation
    flames_game(common_count);

    return 0;
}