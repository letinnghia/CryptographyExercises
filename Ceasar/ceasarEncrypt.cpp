#include <iostream>
#include <string>
using namespace std;

string caesarEncrypt(string plaintext, int shift) {
    string ciphertext = "";
    int len = plaintext.length();

    // Duyệt qua từng kí tự trong plaintext
    for (int i = 0; i < len; i++) {
        // Nếu là kí tự chữ cái, thực hiện dịch chuyển
        if (isalpha(plaintext[i])) {
            char shifted = plaintext[i] + shift;
            // Xử lý trường hợp vượt quá phạm vi chữ cái
            if (isupper(plaintext[i])) {
                if (shifted > 'Z') shifted -= 26;
                if (shifted < 'A') shifted += 26;
            } else {
                if (shifted > 'z') shifted -= 26;
                if (shifted < 'a') shifted += 26;
            }
            ciphertext += shifted;
        } else {
            ciphertext += plaintext[i];
        }
    }

    return ciphertext;
}

int main() {
    string plaintext;
    int shift;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "Enter shift pattern: ";
    cin >> shift;

    string ciphertext = caesarEncrypt(plaintext, shift);
    cout << "Ciphertext: " << ciphertext << endl;

    return 0;
}
