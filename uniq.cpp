
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool isInVector(const vector<int>& vec, int value) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) {
            return true;
        }
    }
    return false;
}

void makeUnique(const vector<int>& input, vector<int>& output) {
    for (int i = 0; i < input.size(); i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (input[i] == input[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            output.push_back(input[i]);
        }
    }
}

void fillVectFromFile(vector<int>& vec) {
    ifstream inputFile;
    string filename;

    cout << "Enter a file name: ";
    cin >> filename;

    inputFile.open(filename);

    if (inputFile) {
        int value;

        while (inputFile >> value) {
            vec.push_back(value);
        }

        inputFile.close();
    }
    else {
        cout << "Error! Could not open file: " << filename << endl;
    }
}

void writeVectorToFile(const vector<int>& vec) {
    ofstream outputFile;
    outputFile.open("uniq.ints");

    for (int i = 0; i < vec.size(); i++) {
        outputFile << vec[i] << "\n";
    }

    outputFile.close();
}

int main() {
    vector<int> input;
    vector<int> unique;

    fillVectFromFile(input);
    makeUnique(input, unique);
    writeVectorToFile(unique);

    return 0;
}
