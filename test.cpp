#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() {
    int random = rand() % 101;
    int guess = 0;
    int num;

    std::cout << "1. Guess the number from 1-100" << std::endl;
    while (guess != random)
    {
        std::cout << "Input a number: ";
        std::cin >> num;
        if (num > random) {
            std::cout << "Lower" << std::endl;
            continue;
        } else if (num < random) {
            std::cout << "Higher" << std::endl;
            continue;
        } else {
            std::cout << "Correct!" << std::endl;
            break;
        }
    }

    std::cout << "\n2. TikTok Numbers" << std::endl;

    for (int num1to50 = 1; num1to50 <= 50; num1to50++){
        if ((num1to50 % 3 == 0) && (num1to50 % 5 == 0)){
            std::cout << "TikTok" << std::endl;
        } else if (num1to50 % 3 == 0){
            std::cout << "Tik" << std::endl;
        } else if (num1to50 % 5 == 0){
            std::cout << "Tok" << std::endl;
        } else {
            std::cout << num1to50 << std::endl;
        }
    }

    string word = "";
    cout << "\n3.Input lowercase characters to translate into UPPERCASE: ";
    cin >> word;
    for (auto& words : word) {
        words = toupper(words);
    }

    cout << word;

    return 0;
}