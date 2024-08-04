#ifndef MUSTERI_H
#define MUSTERI_H
#include <string>
#include <ctime>

using namespace std;
class Musteri
{
	private:
		static int sonrakiNo;
		int no;
		string ad;
		string soyad;
		time_t dogumTarihi;
		
	public:
		Musteri(string, string, time_t);
		~Musteri();
		
		int getNo();
		
		string getAd();
		void setAd(string);

		string getSoyad();
		void setSoyad(string);
				
		time_t getDogumTarihi();
		void setDogumTarihi(time_t);
};

#endif
