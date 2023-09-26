//Mot vi du ve viec su dung tien to va hau to
#include<iostream>
using namespace std;
int main(){
    int num = 5; //gan gia tri vao bien num
    cout << num << endl; //hien thi num
    cout << num++ << endl; //hien thi num roi tang 1 gia tri 
    cout << num << endl; //hien thi num
    //dung hau to de tang num
    cout << ++num << endl; //tang them 1 gia tri roi hien thi num
    cout << "\n";
    cout << num << endl; //hien thi num
    cout << num-- << endl; //hien thi num r tru 1 gia tri
    cout << num << endl; //hien thi num
    cout << --num << endl; //tru 1 gia tri r hien thi num
    return 0;

}