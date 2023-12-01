// Mã nguồn được sửa ngay trong lớp Sin và khai báo trong hàm main có sự thay đổi như sau:
class Sin:public Function {  //class Sin  được kế thừa public từ function
    private:
    static Sin*instance;
    public:
    Sin(){ // hàm tạo private để ngăntạo đối tượng từ bên ngoài
    }
    static Sin*getlnstance(){
        if(instance == NULL){ //  nếu instance tạo giá trị thì sẽ cấp bộ nhớ cho sin
        instance = new Sin();}
    }
    return instance; // trả về instane
}
double value(double x) {
    return sin(x);// trả về kết quả của sin 
}
double Derive(double x) {
    return cos(x); // trả về kết quả của cos
}

//khởi tạo static member
Sin* Sin:instance == NULL;

//Hàm main
int main (){
    double x = 3.14/6; // Pi/6
    Sin* s = Sin::getlnstance();
    douyble y = DeriveProduct(s, s, x);
    printf("sin(x) = %f, sin(x) = %f\n", s->Value(x), s->Derive(x));
    printf("y = %f\n", y);
}