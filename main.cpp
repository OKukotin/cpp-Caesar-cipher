#include <iostream>
#include <string>

#define TEXT_SIZE 100

char getEncryptedSymbol(char symbol, int shift){
    for (char i = 'a'; i <= 'z'; i++) {
        std::cout << i << '\n';
    }
}

int main(int argc, char const *argv[]) {
    string input;
    int shift;
    bool method;
    
    std::cout << "Choice the operation (1 - encrypt, 0 - decrypt)" << '\n';
    std::cin >> method;

    std::cout << "Enter the size of shift (positive integer): " << '\n';
    std::cin >> shift;

    std::cout << "Enter the text you want to encrypt (on English): ";
    std::cin.getline(input, TEXT_SIZE);

    for (int i = 0; i < input.size(); i++) {
        if (method) {
            getEncryptedSymbol()
        }
    }
    std::cout << std::endl << "Encypted text: " << input << '\n';
    return 0;
}
