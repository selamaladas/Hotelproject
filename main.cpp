#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void menuGoster() {
	cout << "HOTEL YONETIM SISTEMI" << endl;
	cout << "[1] musteri ekle" << endl;
	cout << "[2] musteri sil" << endl;
	cout << "[3] musterileri listele" << endl;
	cout << "[4] oda ekle" << endl;
	cout << "[5] oda sil" << endl;
	cout << "[6] odalari listele" << endl;
	cout << "[7] rezervasyon yap" << endl;
	cout << "[8] rezervasyonlari gor" << endl;
	cout << "[9] rezervasyonlari listele" << endl;
}

int kullanicidanMenuGirisiAl(int max) {
	int s;
	cout << "Menuden islem seciniz: ";
	cin >> s;
	while (s < 0 || s > max) {
		cout << "Yanlis secenek. Menuden islem seciniz: ";
		cin >> s;		
	}
	return s;
}

int main(int argc, char** argv) {
	while(1) {
		menuGoster();
		int secenek = kullanicidanMenuGirisiAl(9);
		switch (secenek) {
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			default:
				break
		}
	}

}
