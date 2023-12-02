#include <iostream>
using namespace std;

// Định nghĩa lớp BigInterger
class BigInterger {
    string _bigNum; // Biến lưu trữ số lớn

public:
    // Constructor mặc định, khởi tạo số lớn rỗng
    BigInterger() {
        this->_bigNum = "";
    }

    // Constructor với tham số, khởi tạo số lớn từ chuỗi s
    BigInterger(string s) {
        // Loại bỏ khoảng trắng trong chuỗi s
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                for (int j = i; j < s.size(); j++) {
                    s[i] = s[i + 1];
                }
                i--;
                s[s.size() - 1] = 0;
            }
        }
        this->_bigNum = s;
    }

    // Toán tử nhập từ luồng đầu vào
    friend istream& operator>>(istream& is, BigInterger& bigNum) {
        // Sử dụng getline để đọc cả dòng văn bản và gán vào _bigNum
        getline(is, bigNum._bigNum);
        return is;
    }

    // Toán tử so sánh bằng
    bool operator==(const BigInterger& bNum) {
        // So sánh hai số lớn
        return (this->_bigNum == bNum._bigNum);
    }
};
