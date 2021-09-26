#include <iostream>
#include <string>

char getEncryptedASCIISymbol(char symbol, const int shift) {
    int symbolCode = (int(symbol) + shift);
    // if (symbolCode) {
    //     /* code */
    // }
    return char(symbolCode);
}

int main(int argc, char const *argv[]) {
    std::string input;
    int shift;
    bool method;

    std::cout << "Enter the size of shift (positive integer): ";
    std::cin >> shift;

    std::cout << "Choice the operation (1 - encrypt, 0 - decrypt): ";
    std::cin >> method;
    shift = method ? shift : -shift;

    std::cout << "Enter the text: ";
    std::cin.ignore();
    getline(std::cin, input);
    const int inputSize = input.size();

    const int a = int('a');
    const int A = int('A');
    for (int i = 0; i < inputSize; i++) {
        const int current = int(input[i]);
        if (current >= a && current <= a + 25
            || current >= A && current <= A + 25) {
            input[i] = getEncryptedASCIISymbol(input[i], shift);
        }
        else {
            continue;
        }
    }
    std::cout << (method ? "Encypted" : "Decrypted") << " text: " << input << '\n';
    return 0;
}
