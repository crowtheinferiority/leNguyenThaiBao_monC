#include <iostream>
#include <string>

class DoAn {
public: // class public
    virtual void nau() const { //phương thức ảo
        std::cout << "Dang nau do an thong thuong" << std::endl;
    }
};

class Pizza : public DoAn { // kế thừa public DoAn cho Pizza 
public:
    void nau() const override {
        std::cout << "Dang lam pizza" << std::endl;
    }
};

class Sushi : public DoAn { // kế thừa public DoAn cho sushi
public:
    void nau() const override {
        std::cout << "Dang lam sushi" << std::endl;
    }
};

int main() {
    DoAn* doAnThuong = new DoAn();
    DoAn* pizza = new Pizza();
    DoAn* sushi = new Sushi();

    doAnThuong->nau();  // Đang nấu đồ ăn thông thường
    pizza->nau();       // Đang nướng một chiếc pizza ngon lành
    sushi->nau();       // Đang chuẩn bị sushi tươi ngon

    delete doAnThuong;
    delete pizza;
    delete sushi;

    return 0;
}
