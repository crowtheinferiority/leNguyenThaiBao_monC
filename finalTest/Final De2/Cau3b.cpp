// Mã nguồn cho Cos:
class Cos:public Function{ // class cos kế thừa public function
    public:
    double value(double x){
        return cos(x);//trả về kết quả cos X cho biến value
    }
    double Derive(double x){
        return -sin(x);//trả về kết quả -sin cho biến Derive
    }
}