#include "Musteri.h"

int Musteri::sonrakiNo = 1;

Musteri::Musteri(string ad, string soyad, time_t dt)
{
	this->no = this->sonrakiNo;
	this->sonrakiNo++;
	this->setAd(ad);
	this->setSoyad(soyad);
	this->setDogumTarihi(dt);
}

Musteri::~Musteri() {
}

int Musteri::getNo() {
	return this->no;
}

string Musteri::getAd() {
	return this->ad;
}

void Musteri::setAd(string ad) {
	this->ad = ad;
}

string Musteri::getSoyad() {
	return this->soyad;
}

void Musteri::setSoyad(string soyad) {
	this->soyad = soyad;
}
		
time_t Musteri::getDogumTarihi() {
	return this->dogumTarihi;
}

void Musteri::setDogumTarihi(time_t dt) {
	this->dogumTarihi = dt;
}
