#include <iostream>
#include <string>

char getEncryptedASCIISymbol(char symbol, const int shift) {
    return char(int(symbol) + shift);
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

    for (int i = 0; i < inputSize; i++) {
        input[i] = getEncryptedASCIISymbol(input[i], shift);
    }
    std::cout << (method ? "Encypted" : "Decrypted") << " text: " << input << '\n';
    return 0;
}
