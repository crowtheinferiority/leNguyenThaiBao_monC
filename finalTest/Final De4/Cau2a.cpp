class EyedFace:public IFace{ //EyedFace kế thừa public của IFace
	private:
		string shape;
		int eyes;
    protected:
        string getShape(){
            return shape;
        }
	public:
		EyedFace(string sh, int e) : shape(sh), eyes(e) {
            //biểu thị
            virtual void show (override){
                cout << "shape: "<< shape << ", Eyes: " << eyes << endl;
            }
            //tạo
            virtual IFace* clone() override{
                return new EyedFace (shape, eyes); //cấp bộ nhớ mới cho EyeFace
            }
        }
};