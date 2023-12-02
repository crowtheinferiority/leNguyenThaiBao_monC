void showAll(ostream& outDev){ //cài đặt showALL (onstream&)
		for(absList* temp=this;temp;temp=temp->subLst){
			outDev<<temp->dataId<<" ";
		}
		outDev<<endl;
		return;
	}