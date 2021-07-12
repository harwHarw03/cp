#include <iostream>
using namespace std;

class pangkat{
	public:
		void kuadrat();
		void pangkat_n();
};

void pangkat::kuadrat(){
			int bil_a;
			cout<<">>Masukkan 1 bilangan (a) : \n";
			cin>>bil_a;
			cout<<">>Hasil = "<<bil_a*bil_a<<endl;
}

void pangkat::pangkat_n(){
	int bil_a, bil_b;
	
	cout<<">>Masukkan 2 bilangan (a b) : \n";
	cin>>bil_a>>bil_b;
	cout<<"*Maksud anda "<<bil_a<<" pangkat "<<bil_b<<endl;
	
	long long tmp_a = bil_a; 
	for(int i = 0; i < bil_b-1; i++){
		tmp_a *= bil_a;
	}
	cout<<">>Hasil = "<<tmp_a<<endl;
}

int main(){
	while(!cin.eof()){	
		int pilih;
		cout<<"\n>>Pilih Kuadrat(1) atau Pangkat n(2) : ";
		cin>>pilih;
		
		pangkat eksponen;
		cout<<endl;
		
		if(pilih == 1){
			eksponen.kuadrat();
		} else {
			eksponen.pangkat_n();
		}
	}
}
