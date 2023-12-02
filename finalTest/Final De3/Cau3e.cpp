~linearList(){
		while(this){
			LinearList* temp=this //Khai báo lineaList 
			this=this->subLst; //gán this vào sublst
			delete temp; //giải phóng bộ nhớ
			temp=NULL;
		}
	}