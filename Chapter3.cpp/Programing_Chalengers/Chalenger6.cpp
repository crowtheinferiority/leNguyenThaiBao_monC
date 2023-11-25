/*Một công thức làm bánh quy yêu cầu các nguyên liệu sau:
• 1,5 chén đường
• 1 chén bơ
• 2,75 chén bột mỳ
Công thức này tạo ra 48 chiếc bánh quy với lượng nguyên liệu nêu trên. Hãy viết một chương trình yêu cầu người 
dùng muốn làm bao nhiêu chiếc bánh quy, sau đó hiển thị số lượng chén của mỗi nguyên liệu cần thiết cho số lượng
 bánh quy đã chỉ định.*/
 #include <iostream>
 using namespace std;
 int main(){
    double soBanhCanLam;
    const double duong = 1.5, bo = 1, botMy = 2.75, soBanh = 48; 
    cout << "So banh quy bann muon lam la?: ";
    cin >> soBanhCanLam;
    double soDuong, soBo, soBotMy, tyLe;
    tyLe = soBanhCanLam/soBanh;
    soDuong = tyLe * duong;
    soBo = tyLe * bo;
    soBotMy = tyLe * botMy;
    cout << "Vay de lam " << soBanhCanLam << " cai banh quy ta can dung:\n" << "Duong: " << soDuong <<  " chen.\n";
    cout << "Bo: " << soBo << " chen.\n" << "Bot my: " << soBotMy << " chen.\n";
    return 0;
 }