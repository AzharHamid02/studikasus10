#include <iostream>
using namespace std;

class Lomba{
	public :
		void input();
		void proses();
		void output();
	private:
    	int *nim;
    	string *nama;
    	int nimMhs[5];
    	string namaMhs[5];
};

void Lomba::input(){
    cout<<"Masukkan data mahasiswa \n";
    for (int i=0;i<5;i++){
      cout<<"\nInputkan NIM : ";
      cin>>nimMhs[i];
      cout<<"Inputkan Nama : ";
      cin>>namaMhs[i];
    }
  }
  
void Lomba::proses(){
    nim = new int[5];
    nama = new string[5];
    for(int i=0;i<5;i++){
      *nim = nimMhs[i];
      nim+= 1;
      *nama = namaMhs[i];
      nama+= 1;
    }
  }
  
void Lomba::output(){
    nim-=5 ;
    nama-= 5;
    cout<<"\nData mahasiswa yang lolos \n"<<endl;
    for (int i=0;i<5;i++) {
      cout<<"\nNama ke-" << i+1 <<" : ";
      cout<<*nama ;
      nama+= 1;
      cout<<"\nNim : " ;
      cout<<*nim ;
      nim+= 1;
    }
  }

int main(){
  Lomba a;
  a.input();
  a.proses();
  a	.output();
}
