#include <iostream>
#include <string>
#include <map>

using namespace std;

// Tạo một bản đồ Morse code để ánh xạ từ Morse code sang ký tự
map<string, char> morseCodeMap;

void initializeMorseCodeMap() {
    morseCodeMap[".-"] = 'A';
    morseCodeMap["-..."] = 'B';
    morseCodeMap["-.-."] = 'C';
    morseCodeMap["-.."] = 'D';
    morseCodeMap["."] = 'E';
    morseCodeMap["..-."] = 'F';
    morseCodeMap["--."] = 'G';
    morseCodeMap["...."] = 'H';
    morseCodeMap[".."] = 'I';
    morseCodeMap[".---"] = 'J';
    morseCodeMap["-.-"] = 'K';
    morseCodeMap[".-.."] = 'L';
    morseCodeMap["--"] = 'M';
    morseCodeMap["-."] = 'N';
    morseCodeMap["---"] = 'O';
    morseCodeMap[".--."] = 'P';
    morseCodeMap["--.-"] = 'Q';
    morseCodeMap[".-."] = 'R';
    morseCodeMap["..."] = 'S';
    morseCodeMap["-"] = 'T';
    morseCodeMap["..-"] = 'U';
    morseCodeMap["...-"] = 'V';
    morseCodeMap[".--"] = 'W';
    morseCodeMap["-..-"] = 'X';
    morseCodeMap["-.--"] = 'Y';
    morseCodeMap["--.."] = 'Z';
    morseCodeMap[""] = ' '; // Dấu cách
}

string decodeMorseCode(const string& morseCode) {
    string result = "";
    string currentCharacter = "";
    
    for (char c : morseCode) {
        if (c == ' ' && !currentCharacter.empty()) {
            result += morseCodeMap[currentCharacter];
            currentCharacter = "";
        }
        else if (c == ' ' && currentCharacter.empty()) {
            // Xử lý nhiều dấu cách liên tiếp
            result += ' ';
        }
        else {
            currentCharacter += c;
        }
    }
    
    if (!currentCharacter.empty()) {
        result += morseCodeMap[currentCharacter];
    }
    
    return result;
}

int main() {
    initializeMorseCodeMap();

    string morseCode;
    cout << "Nhap chuoi Morse code: ";
    getline(cin, morseCode);

    string decodedText = decodeMorseCode(morseCode);
    cout << "Van ban da giai ma: " << decodedText << endl;

    return 0;
}

