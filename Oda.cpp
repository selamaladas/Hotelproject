#include "Oda.h"

Oda::Oda(int numara, string tip, double fiyat, string durum = "bos", int kisiSayisi = 3) {
	this->setNumara(numara);
	this->setTip(tip);
	this->setFiyat(fiyat);
	this->setDurum(durum);
	this->setKisiSayisi(kisiSayisi);
}


Oda::Oda(int numara, string tip, double fiyat) {
	this->setNumara(numara);
	this->setTip(tip);
	this->setFiyat(fiyat);
	this->setDurum("bos");
	this->setKisiSayisi(3);
}

Oda::~Oda() {
	
}

int Oda::getNumara() {
	return this->numara;
}

void Oda::setNumara(int n) {
	if (n > 0) {
		this->numara = n;
	}
}

string Oda::getTip() {
	return this->tip;
}

void Oda::setTip(string tip) {
	if (tip == "standart" || tip == "aile" || tip == "dubleks") {
		this->tip = tip;
	}
}

double Oda::getFiyat() {
	return this->fiyat;
}

void Oda::setFiyat(double fiyat) {
	if (fiyat > 0) {
		this->fiyat = fiyat;
	}
}

string Oda::getDurum() {
	return this->durum;
}

void Oda::setDurum(string durum) {
	if (durum == "dolu" || durum == "bos") {
		this->durum = durum;
	}
}

int Oda::getKisiSayisi() {
	return this->kisiSayisi;
}

void Oda::setKisiSayisi(int kisi) {
	if (kisi > 0) {
		this->kisiSayisi = kisi;
	}
}


