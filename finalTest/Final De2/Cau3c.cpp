// Mã nguồn cho công thức đạo hàm thương
double DeriveQuotient(Function* f, Function g, double x){
    if(f != NULL && g != NULL){ //Đạo hàm thương được xác định theo công thức của đề bài
        double tu = f->Derive(x)*g->Value(x) -f->Value(x) * g->Derive(x);
        double mau = pow(g->Value(x);2) //can bac 2
        if(mau != 0){
            return tu/mau;
        }
    }
    return 0;
}
double DeriveCompostive(Function* f, Function g, double x){
    if(f != NULL && g != NULL){//Đạo hàm của hàm hợp xác đính theo phương thức của đề bài nốt
        return f->Derive(g->value(x)) * g-> Derive(x);
    }
    return 0;
}