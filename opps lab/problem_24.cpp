#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename, text;
    cout << "Enter file name to create: ";
    cin >> filename;
    cin.ignore(); // buffer clear for getline

    // Step 1: File create + user input write
    ofstream fout(filename);
    if (!fout) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "Enter text (type END in a new line to stop):\n";
    while (true) {
        getline(cin, text);
        if (text == "END") break;
        fout << text << "\n";
    }
    fout.close();

    // Step 2: Open file for reading and analysis
    ifstream fin(filename);
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int lines = 0, words = 0, characters = 0, size = 0;
    char ch;
    bool inWord = false;

    fin.seekg(0, ios::end);
    size = fin.tellg();
    fin.seekg(0, ios::beg);

    while (fin.get(ch)) {
        if (ch != ' ' && ch != '\n' && ch != '\t')
            characters++;

        if ((ch == ' ' || ch == '\n' || ch == '\t')) {
            if (inWord) {
                words++;
                inWord = false;
            }
        } else {
            inWord = true;
        }

        if (ch == '\n')
            lines++;
    }

    if (inWord) words++;

    cout << "\nFile Report: " << filename << endl;
    cout << "---------------------------------\n";
    cout << "Lines      = " << (lines == 0 ? 1 : lines) << endl;
    cout << "Words      = " << words << endl;
    cout << "Characters = " << characters << endl;
    cout << "Size       = " << size << " bytes" << endl;

    fin.close();
    return 0;
}
