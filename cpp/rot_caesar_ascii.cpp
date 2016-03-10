#include <iostream>
#include <string>
using namespace std;

const int LOWER_A = 97;
const int LOWER_M = 109;
const int LOWER_N = 110;
const int LOWER_Z = 122;

const int UPPER_A = 65;
const int UPPER_M = 77;
const int UPPER_N = 78;
const int UPPER_Z = 90;

string rot(string input) {
    int inputSize = input.size();
    int index = 0;

    while(index != inputSize) {
        if(input[index] >= LOWER_A && input[index] <= LOWER_M)
            input[index] = input[index] + 3;
        else if(input[index] >= LOWER_N && input[index] <= LOWER_Z)
            input[index] = input[index] - 3;
        else if(input[index] >= UPPER_A && input[index] <= UPPER_M)
            input[index] = input[index] + 3;
        else if(input[index] <= UPPER_N && input[index] <= UPPER_Z)
            input[index] = input[index] - 3;

        index++;
    }
    return input;
}

int main() {
    string plaintext;
    string cypher;

    cout << "Enter String : ";
    getline(cin,plaintext);
    cypher = rot(plaintext);
    cout << cypher << endl;

    return 0;
}
