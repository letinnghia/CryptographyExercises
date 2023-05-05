#include <iostream>
#include <string>
using namespace std;

string caesarDecrypt(string ciphertext, int shift) {
    string plaintext = "";
    int len = ciphertext.length();

    // Duyệt qua từng kí tự trong ciphertext
    for (int i = 0; i < len; i++) {
        // Nếu là kí tự chữ cái, thực hiện dịch chuyển ngược lại
        if (isalpha(ciphertext[i])) {
            char shifted = ciphertext[i] - shift;
            // Xử lý trường hợp vượt quá phạm vi chữ cái
            if (isupper(ciphertext[i])) {
                if (shifted > 'Z') shifted -= 26;
                if (shifted < 'A') shifted += 26;
            } else {
                if (shifted > 'z') shifted -= 26;
                if (shifted < 'a') shifted += 26;
            }
            plaintext += shifted;
        } else {
            plaintext += ciphertext[i];
        }
    }

    return plaintext;
}

void bruteForceDecrypt(string ciphertext) {
    // Duyệt qua từng shift pattern từ 1 đến 25
    for (int shift = 1; shift <= 25; shift++) {
        string plaintext = caesarDecrypt(ciphertext, shift);
        cout << "Shift pattern: " << shift << " -> ";
        cout << "Plaintext: " << plaintext << endl;
    }
}

int main() {
    string ciphertext;
    cout << "Enter ciphertext: ";
    getline(cin, ciphertext);

    bruteForceDecrypt(ciphertext);

    return 0;
}