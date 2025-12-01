/***************************************************************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************************************************************
**
**                                                                                          Sakarya Üniversitesi
**                                                                                    Bilgisayar ve Biliþim Bilimleri Fakültesi
**                                                                                       Bilgisayar Mühendisliði Bölümü
**                                                                                    Programlamaya Giriþ Dersi
**
**
**                                                                                      Ödev Numarasý:Proje
**                                                                                      Öðrenci Adý:Ömer Faruk TÜRKDOÐDU
**                                                                                      Öðrenci Numarasý:G231210002
**                                                                                      Ders Grubu:2.Öðretim B Grubu
**
****************************************************************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************************************************************/

#include <iostream>
#include <locale.h>

using namespace std;

class Oyuncu
{
public:
	int forma={};
	string TC;
	string isim;
	string soyisim;
	int lisansNO ;
	string konum ;
	string ucret ;
	int dogumGun ;
	int dogumAy ;
	int dogumYil ;
	int golO=0;
};

class Takim
{
public:
	Oyuncu oyuncu[70];
	int oyuncuS;
	int no;
	string ad;		
	string adres;
	string tel;
	string yoneticiAd;
	int puan=0;
	bool sonuc = true;
	void Olusturma();	
	void Listeleme(int x);
	void Ekleme();
	bool Kontrol(int x);
	void Duzenleme(int x, int y);
};

void Secim();
	
	



