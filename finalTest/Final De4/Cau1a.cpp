//code bổ sung:
Bike(const char * b){
	brand new char [strlen(b)+1]; //tạo contractor sau đó cấp phép bộ nhớ chi brand b
	strcpy(brand, b); // đẩy B vào brand 
}
virtual ~Bike(){ // hủy ảo cho brand
	delete[] brand;
}
virtual void move(int t1){ // hủy ảo hiển thị thông tin của xe
	cout << brand << ":"<< t1* t2 << " ";
}