#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string data;

    // Step 1: User input lena
    cout << "Enter some text: ";
    getline(cin, data);

    // Step 2: sare1.txt me write karna
    ofstream fout("sare1.txt");
    fout << data;
    fout.close();

    // Step 3: sare1.txt se read aur sare2.txt me copy karna
    ifstream fin("sare1.txt");
    ofstream fout2("sare2.txt");
    char ch;
    while (fin.get(ch)) {
        fout2.put(ch);
    }
    fin.close();
    fout2.close();

    // Step 4: sare2.txt ka content screen par dikhana
    ifstream fin2("sare2.txt");
    cout << "\n✅ Content of sare2.txt is:\n\n";
    string line;
    while (getline(fin2, line)) {
        cout << line << endl;
    }
    fin2.close();

    return 0;
}
