#include <iostream>
#include <string>
#include <cctype>  // thu vi?n ki?m tra k� t?

using namespace std;

class StringProcessor {
private:
    string str;  // Bi?n x�u k� t? ? d?ng ri�ng tu

public:
    // Phuong th?c kh?i t?o
    StringProcessor() : str("") {}

    // Phuong th?c nh?p d? li?u
    void inputData() {
        cout << "Nhap xau ky tu: ";
        cin >> str;
    }

    // H�m x? l� t�nh t?ng c�c s? trong x�u
    int sumOfNumbers() {
        int sum = 0;
        int currentNumber = 0;
        bool inNumber = false;

        for (char ch : str) {
            if (isdigit(ch)) {
                // N?u l� ch? s?, ti?p t?c x�y d?ng s? hi?n t?i
                currentNumber = currentNumber * 10 + (ch - '0');
                inNumber = true;
            } else {
                // N?u g?p k� t? kh�ng ph?i l� ch? s?, c?ng s? hi?n t?i v�o t?ng
                if (inNumber) {
                    sum += currentNumber;
                    currentNumber = 0;
                    inNumber = false;
                }
            }
        }

        // N?u x�u k?t th�c v� c�n s? chua c?ng, th�m v�o t?ng
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

    // Nh?p d? li?u v�o d?i tu?ng
    processor.inputData();

    // Xu?t k?t qu? t�nh t?ng c�c s? trong x�u
    processor.outputData();

    return 0;
}

