#ifndef ODA_H
#define ODA_H
#include <string>

using namespace std;
class Oda
{
	private:
		int numara;
		string tip;
		double fiyat;
		string durum;
		int kisiSayisi;
		
	public:
		Oda(int, string, double, string, int);
		Oda(int, string, double);
		~Oda();
		
		int getNumara();
		void setNumara(int);
		
		string getTip();
		void setTip(string);
		
		double getFiyat();
		void setFiyat(double);
		
		string getDurum();
		void setDurum(string);
		
		int getKisiSayisi();
		void setKisiSayisi(int);
};

#endif
