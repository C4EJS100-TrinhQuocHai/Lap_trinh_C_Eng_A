#include <iostream>
#include <string>
#include <cctype>  // thu vi?n ki?m tra ký t?

using namespace std;

class StringProcessor {
private:
    string str;  // Bi?n xâu ký t? ? d?ng riêng tu

public:
    // Phuong th?c kh?i t?o
    StringProcessor() : str("") {}

    // Phuong th?c nh?p d? li?u
    void inputData() {
        cout << "Nhap xau ky tu: ";
        cin >> str;
    }

    // Hàm x? lý tính t?ng các s? trong xâu
    int sumOfNumbers() {
        int sum = 0;
        int currentNumber = 0;
        bool inNumber = false;

        for (char ch : str) {
            if (isdigit(ch)) {
                // N?u là ch? s?, ti?p t?c xây d?ng s? hi?n t?i
                currentNumber = currentNumber * 10 + (ch - '0');
                inNumber = true;
            } else {
                // N?u g?p ký t? không ph?i là ch? s?, c?ng s? hi?n t?i vào t?ng
                if (inNumber) {
                    sum += currentNumber;
                    currentNumber = 0;
                    inNumber = false;
                }
            }
        }

        // N?u xâu k?t thúc và còn s? chua c?ng, thêm vào t?ng
        if (inNumber) {
            sum += currentNumber;
        }

        return sum;
    }

    // Phuong th?c xu?t d? li?u
    void outputData() {
        cout << "Tong cac so trong xau la: " << sumOfNumbers() << endl;
    }
};

int main() {
    // T?o d?i tu?ng c?a l?p StringProcessor
    StringProcessor processor;

    // Nh?p d? li?u vào d?i tu?ng
    processor.inputData();

    // Xu?t k?t qu? tính t?ng các s? trong xâu
    processor.outputData();

    return 0;
}

