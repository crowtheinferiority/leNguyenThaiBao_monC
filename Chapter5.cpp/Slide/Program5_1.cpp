//Minh hoa cach su dung toan tu tang va giam trong cpp
#include <iostream>
using namespace std;
int main (){
    int num = 4;//gia tri ban dau cua num la 4
    cout << "Gia tri ban dau cua num la: " << num << endl;//khai bao gia tri cua num ra man hinh
    //tiep theo se tang them 1 don vi cho num

    cout << "Bay gio se tang them 1 don vi cho num.\n\n";
    num++; //dung toan tu de tang num
    cout << "Gia tri cua num sau khi tang la: " << num << endl;

    //tiep tuc tang them 1 don vi cho num
    cout << "Tang them 1 don vi nua cho num.\n\n";
    //tiep tuc tang them 1 don vi cho num
    num++;
    cout << "Gia tri cua num hien tai la: " << num << endl;
    //bay gio se dung toan tu giam de giam gia tri num ve ban dau

    cout << "Giam gia tri cua num di 1 don vi.\n\n";
    num--;
    cout << "Sau khi giam thi gia tri cua num la: " << num << endl;
    //Dua num ve gia tri ban dau
    cout << "Tiep tuc giam them 1 don vi cua num nua.\n\n";
    num--;
    cout << "Hien tai gia tri cua num bay gi la: "<< num << endl;
    cout << "Vay ta da su sung toan tu de tang va giam gia tri cua num.\n";
    return 0; 

}