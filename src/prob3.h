#include <iostream>
#include <vector>

using namespace std;

void swapSoldiers(vector<string>& soldiers) {
    int n = soldiers.size();

    if (n % 2 == 0) {
        for (int i = 0; i < n - 1; i += 2) {
            string temp = soldiers[i];
            soldiers[i] = soldiers[i + 1];
            soldiers[i + 1] = temp;
        }
    } else {
        for (int i = 0; i < n - 2; i += 2) {
            string temp = soldiers[i];
            soldiers[i] = soldiers[i + 1];
            soldiers[i + 1] = temp;
        }
    }
}

void printRearrangedSoldiers(const vector<string>& soldiers) {
    for (const string& soldier : soldiers) {
        cout << soldier << endl;
    }
    cout << endl;
}

int main() {
    vector<string> soldiers{"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    swapSoldiers(soldiers);

    printRearrangedSoldiers(soldiers);

    return 0;
}