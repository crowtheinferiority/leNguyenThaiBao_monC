int countAll(){ // countAll dùng để đếm số lượng phần tử trong 
		int count=0;// cấu trúc dữ liệu Linealist
		for(absList* temp=this;temp;temp=temp->subLst){
			count++;// mỗi lần chạy biến count sẽ tăng và trả về kết quả cho cout
		}
		return count;
	}