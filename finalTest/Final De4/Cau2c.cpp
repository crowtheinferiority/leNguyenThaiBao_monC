//cải tạo lại cho chương trình hết lỗi
void testFace(IFace* fc) {
			IFace* a[3] = { fc, fc->clone(), fc->clone() };
			for(int i=0; i<3; i++) {
				a[i]->show();
			}
			cout << “The same 3 lines?”;
            //giải phóng bộ nhớ
			delete a[1];
			delete a[2];
			return;
		}
        class Eyed: public IFace{
            private:

			static int COUNT_OBJECT;
            string shape;
            int eyes;
            public:
			EyedFace(const string& sh, const int& e) : shape (sh), eyes(e){
				.....
				COUNT_OBJECT++;
			}
			~EyedFace(){
				........
				COUNT_OBJECT--;
			}
		};
		// trong file .cpp
		int EyedFace::COUNT_OBJECT=0;
		// trong main()
		int main(){
			........
			cout<<"So doi tuong thuoc EyedFace"<<EyedFace::COUNT_OBJECT<<endl;
			return 0;
		}