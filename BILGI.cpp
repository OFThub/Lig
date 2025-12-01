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

#include "BILGI.h"
#include <iostream>
#include <locale.h>
#include <ctype.h>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void Secim()
{		
	srand(time(NULL));
	ofstream fikstür("fikstür.txt");
	Takim* takim = new Takim[3];
	int hafta = 1;
	int j;
	int k;	
	int karsilasma = 0;
	char secim;
	int takimS =3;
	int nos;
	int nos2;
	int forma;
	bool sonuc1;
	bool sonuc2;
	int sans1;
	int sans2;
	int sans3;

	//Sunum kolaylýðý açýsýndan 2 takým ve her takýma 29 oyuncu atanýyor
	{
		takim[0].ad = "Takýmý olmayanlar";
		takim[1].ad = "Bayern München";
		takim[2].ad = "Fenerbahçe";
		takim[0].no = 0;
		takim[1].no = 102;
		takim[2].no = 103;
		takim[0].adres = "";
		takim[1].adres = "Almanya";
		takim[2].adres = "Türkiye";
		takim[0].tel = "";
		takim[1].tel = "68549725025";
		takim[2].tel = "69822354875";
		takim[0].yoneticiAd = "";
		takim[1].yoneticiAd = "Thomas Tuchel";
		takim[2].yoneticiAd = "Ali Koç";
		takim[0].oyuncuS = 1;
		takim[1].oyuncuS = 29;
		takim[2].oyuncuS = 29;
		takim[0].oyuncu[0].isim = "Lionel";
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].isim = "Cristiano";
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].isim = "Karin";
		}
		takim[0].oyuncu[0].soyisim = "Messi";
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].soyisim = "Ronaldo";
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].soyisim = "Benzema";
		}
		takim[0].oyuncu[0].TC = "48657984651";
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].TC = "78945612312";
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].TC = "48621350781";
		}
		takim[0].oyuncu[0].lisansNO = 10000000;
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].lisansNO = 10000030 + i;
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].lisansNO = 10000060 + i;
		}
		takim[0].oyuncu[0].konum = "Stoper";
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].konum = "Kaleci";
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].konum = "Forvet";
		}
		takim[0].oyuncu[0].ucret = "100000000";
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].ucret = "99999999";
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].ucret = "50000000";
		}
		takim[0].oyuncu[0].dogumGun = 20;
		takim[0].oyuncu[0].dogumAy = 10;
		takim[0].oyuncu[0].dogumYil = 2000;
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].dogumGun = 23;
			takim[1].oyuncu[i].dogumAy = 5;
			takim[1].oyuncu[i].dogumYil = 1987;
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].dogumGun = 25;
			takim[2].oyuncu[i].dogumAy = 11;
			takim[2].oyuncu[i].dogumYil = 1982;
		}
		takim[0].oyuncu[0].forma = {};
		for (int i = 0; i < 29; i++)
		{
			takim[1].oyuncu[i].forma = 1 + i;
		}
		for (int i = 0; i < 29; i++)
		{
			takim[2].oyuncu[i].forma = 1 + i;
		}
	}

	for (;;)
	{	
		ofstream takimlar("takim.txt", ios::trunc);
		ofstream futbolcular("futbolcu.txt", ios::trunc);

		//Her iþlem sonrasý takim.txt yenileniyor
		for (int i = 1; i < takimS; i++)
		{
			takimlar << "-------------------------------" << endl << endl
				<< "Takým NO : " << takim[i].no << endl
				<< "Takým Adý : " << takim[i].ad << endl
				<< "Takým Ülke : " << takim[i].adres << endl
				<< "Takým Telefon : " << takim[i].tel << endl
				<< "Takým Yönetici : " << takim[i].yoneticiAd << endl
				<< "Takým Puan : " << takim[i].puan << endl << endl
				<< "-------------------------------" << endl << endl;

			for (int j = 0; j < takim[i].oyuncuS; j++)
			{
				futbolcular << "-------------------------------" << endl << endl
					<< "Futbolcu Takým : " << takim[i].ad << endl
					<< "Futbolcu Ad : " << takim[i].oyuncu[j].isim << endl
					<< "Futbolcu Soy Ad : " << takim[i].oyuncu[j].soyisim << endl
					<< "Futbolcu Toplam Gol : " << takim[i].oyuncu[j].golO << endl
					<< "Futbolcu TC : " << takim[i].oyuncu[j].TC << endl
					<< "Futbolcu Forma NO : " << takim[i].oyuncu[j].forma << endl
					<< "Futbolcu Lisans NO : " << takim[i].oyuncu[j].lisansNO << endl
					<< "Futbolcu Mevki : " << takim[i].oyuncu[j].konum << endl
					<< "Futbolcu Ücret : " << takim[i].oyuncu[j].ucret << endl
					<< "Futbolcu Doðum Tarihi : " << takim[i].oyuncu[j].dogumGun << "." << takim[i].oyuncu[j].dogumAy << "." << takim[i].oyuncu[j].dogumYil << endl << endl
					<< "-------------------------------" << endl << endl;
			}
		}
				
		cout << endl << endl << "Lütfen yapmak istediðiniz iþlemi seçiniz (1-B)" << endl
			<< "Takým Ýþlemleri" << endl
			<< "1-Takým Oluþturma" << endl
			<< "2-Takým Silme" << endl
			<< "3-Takýma Futbolcu Ekle (Takýmý Olmayanlarýn Transferi)" << endl
			<< "4-Takýmdan Futbolcu Sil (Takýmý Olaný Takýmsýz Býrakma)" << endl
			<< "5-Takýmdaki Futbolcuyu güncelle (Takýmlar Arasý Transfer)" << endl
			<< "6-Takýmdaki Futbolcularý Listele" << endl
			<< "Futbolcu Ýþlemleri" << endl
			<< "7-Futbolcu Ekleme" << endl
			<< "8-Futbolcu Silme (Tamamen Silinme)" << endl
			<< "9-Futbolcu Güncelleme (Ýsim, Soy Ýsim...)" << endl
			<< "A-Futbolcu Listeleme (Takýmý Olmayanlarý Listele)" << endl
			<< "B-Fikstürü Baþlat" << endl
			<< "C-Fikstürü Görüntüle" << endl << endl;
		
		cin >> secim;

		system("cls");

		//Takým oluþtuðunda bellekte mevcut takýmlardan bir takým fazla olacak þekilde yer açýlýyor, önceki takým bilgileri eþleniyor ve yeni takým bilgileri isteniyor
		if (secim == '1')
		{			
			Takim* yedekTakim = new Takim[takimS+1];

			for (int i = 0; i < takimS; i++)
			{
				yedekTakim[i] = takim[i];				
			}

			delete[]takim;
			takim = yedekTakim;
			takim[takimS].Olusturma();
			takimS++;

			cout << endl << "Takým baþarýyla oluþturuldu." << endl;
		}	

		//Takým silinince bellekte mevcut takýmlardan bir takým eksik olacak þekilde yer açýlýyor, silinecek takým harici bilgiler eþleniyor ve silinen takýmýn oyuncularý takim[0] yani takýmsýz olarak eþleniyor
		else if (secim == '2')
		{
			if (takimS!=1)
			{
				//Tüm takýmlar listeleniyor
				for (int i = 1; i < takimS ; i++)
				{
					takim[i].Listeleme(1);
				}

				cout << "Silmek istediðiniz takýmýn numarasýný giriniz." << endl;
				cin >> nos;

				for (int i = 1; i <= takimS; i++)
				{
					if (i==takimS)
					{
						cout << endl << "Silme iþleminiz baþarýsýz oldu." << endl;
					}

					else if (takim[i].no==nos)
					{
						takimS--;

						Takim* yedekTakim = new Takim[takimS];
					
						yedekTakim[0] = takim[0];
					
						for (int k = 0; k < takim[i].oyuncuS; k++)
						{
							yedekTakim[0].oyuncu[k + takim[0].oyuncuS] = takim[i].oyuncu[k];
							yedekTakim[0].oyuncu[k + takim[0].oyuncuS].forma = {};
						}

						yedekTakim[0].oyuncuS = yedekTakim[0].oyuncuS + takim[i].oyuncuS;

						for (int j = 1; j < takimS; j++)
						{
							if (j<i)
							{
								yedekTakim[j] = takim[j];
							}
						
							if(j>=i)
							{
								yedekTakim[j] = takim[j + 1];
							}						
						}	

						delete[]takim;
						takim = yedekTakim;

						cout << endl << "Takým baþarýyla silindi." << endl;

						break;
					}
				}
			}

			else
			{
				cout << "Silinecek takým kalmadý." << endl << endl;
			}
		}

		//Takýmý olmayan futbolcularýn takýma atanmasý
		else if (secim == '3')
		{			
			takim[0].Listeleme(0);

			cout << "Ýþlem yapmak istediðiniz oyuncunun lisans numarasýný giriniz." << endl;
			cin >> nos;

			//Lisans numarasý eþlenen oyuncunun aranmasý
			for (int i = 0; i <=takim[0].oyuncuS; i++)
			{
				if (i==takim[0].oyuncuS)
				{
					cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
				}
					
				else if (takim[0].oyuncu[i].lisansNO==nos)
				{
					//takýmlar listeleniyor
					for (int j = 1; j < takimS ; j++)
					{
						takim[j].Listeleme(1);
					}

					cout << "Transfer etmek istediðiniz takýmýn numarasýný giriniz." << endl;
					cin >> nos;

					//Takým aranýyor
					for (int k = 1; k < takimS; k++)
					{
						if (takim[k].no==nos)
						{					
							if (takim[k].oyuncuS==30)
							{
								cout << "Takým oyuncu sýnýrýna ulaþtý." << endl;
								break;
							}

							//Baþka bir oyuncuyla forma numarasý çatýþmayana kadar oyuncuya forma numarasý giriliyor
							do
							{
								cout << "Oyuncuya forma numarasý veriniz." << endl;
								cin >> forma;								
							
								takim[0].oyuncu[i].forma = forma;
								takim[k].oyuncu[takim[k].oyuncuS] = takim[0].oyuncu[i];								
								sonuc1 = takim[k].Kontrol(1);
							} while (sonuc1==false);
												
							//Oyuncu takýmsýz bölümünden siliniyor
							takim[0].oyuncu[i] = takim[0].oyuncu[takim[0].oyuncuS - 1];
							takim[0].oyuncuS--;

							cout << endl << "Ýþleminiz baþarýlý olmuþtur." << endl;
								
							i = 100;
							break;
						}
					}
				}
			}	
		}

		//Takýmý olan futbolcu takýmý olmayan bölüme geçiyor
		else if (secim == '4')
		{
			//Futbolcular listeleniyor
			for (int i = 1; i < takimS; i++)
			{
				takim[i].Listeleme(0);
			}
		
			cout << "Silmek istediðiniz oyuncunun lisans numarasýný giriniz." << endl;
			cin >> nos;

			//Lisans numarasý fubolcu ile eþleniyor
			for (int i = 1; i < takimS ; i++)
			{
				for (int j = 0; j < takim[i].oyuncuS; j++)
				{			
					//Eþlenen futbolcunun bilgileri takýmsýza geçiyor ve takýmdan siliniyor
					if (takim[i].oyuncu[j].lisansNO==nos)
					{
						takim[i].oyuncu[j].forma = {};
						takim[0].oyuncu[takim[0].oyuncuS] = takim[i].oyuncu[j];
						takim[i].oyuncu[j] = takim[i].oyuncu[takim[i].oyuncuS - 1];
						takim[0].oyuncuS++;
						takim[i].oyuncuS--;

						cout << endl << "Ýþleminiz baþarýlý olmuþtur." << endl;							
					}

					else if (j == takim[i].oyuncuS-1 && i == takimS-1)
					{
						cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
					}						
				}
			}
		}	

		//Takýmlar arasý transfer gerçekleþiyor
		else if (secim == '5')
		{
			//Futbolcular listeleniyor
			for (int i = 1; i < takimS ; i++)
			{
				takim[i].Listeleme(0);
			}

			cout << "Ýþlem yapmak istediðiniz oyuncunun lisans numarasýný giriniz." << endl;
			cin >> nos;
			cout << "Transfer etmek istediðiniz takýmýn numarasýný giriniz." << endl;
			cin >> nos2;

			//Lisans numarasý ile futbolcu eþleniyor
			for (int i = 1; i < takimS; i++)
			{
				for (int j = 0; j < takim[i].oyuncuS; j++)
				{
					if (takim[i].oyuncu[j].lisansNO == nos)
					{
						//Atanmak istenen takým numarasý takým ile eþleniyor
						for (int k = 1; k < takimS; k++)
						{
							if (takim[k].no == nos2)
							{
								if (k==i)
								{
									cout << endl << "Ayný takýma transfer edemezsiniz" << endl;
								}

								//Futbolcu bilgisi aktarýlýyor
								else
								{
									takim[k].oyuncu[takim[k].oyuncuS] = takim[i].oyuncu[j];
									takim[i].oyuncu[j] = takim[i].oyuncu[takim[i].oyuncuS - 1];
								
									for (int l = 0; l < takim[k].oyuncuS; l++)
									{
										if (takim[k].oyuncu[takim[k].oyuncuS].forma==takim[k].oyuncu[l].forma)
										{
											//Forma numarasý çakýþmayana kadar tekrardan girilmesi isteniyor
											do
											{
												cout << "Lütfen yeni bir forma numarasý giriniz." << endl;
												cin >> forma;
												takim[k].oyuncu[takim[k].oyuncuS].forma = forma;
												sonuc1 = true;

												for (int l = 0; l < takim[k].oyuncuS; l++)
												{
													if (takim[k].oyuncu[l].forma==takim[k].oyuncu[takim[k].oyuncuS].forma)
													{
														sonuc1 = false;
														break;
													}
												}
											} while (sonuc1==false);

											cout << endl << "Ýþleminiz baþarýlý." << endl;

											takim[k].oyuncuS++;
											takim[i].oyuncuS--;
											i = 100;
											j = 100;
											k = 100;
											l = 100;
										}										
									}
								}									
							}

							else if (k==takimS-1)
							{
								cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
							}
						}
					}

					else if (i==takimS-1 && j==takim[i].oyuncuS-1)
					{
						cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
					}
				}
			}
		}

		//Takýmdaki futbolcular görüntüleniyor
		else if (secim == '6')
		{
			for (int i = 1; i < takimS ; i++)
			{
				takim[i].Listeleme(0);
			}
		}

		//Takýmsýz bölümüne futbolcu ekleniyor
		else if (secim == '7')
		{
			takim[0].Ekleme();

			//Lisans numarasý baþkasýyla çatýþýyorsa iþlem baþarýsýz oluyor
			for (int i = 0; i < takimS; i++)
			{
				for (int j = 0; j < takim[i].oyuncuS; j++)
				{
					if (i==0&&j==takim[0].oyuncuS-1)
					{
						break;
					}

					else if (takim[i].oyuncu[j].lisansNO==takim[0].oyuncu[takim[0].oyuncuS-1].lisansNO|| takim[i].oyuncu[j].TC == takim[0].oyuncu[takim[0].oyuncuS - 1].TC)
					{
						cout << "Lisans numarasý baþka bir oyuncu ile çakýþýyor lütfen tekrar deneyiniz." << endl << endl;
						takim[0].oyuncu[takim[0].oyuncuS - 1] = {};
						takim[0].oyuncuS--;
					}
				}
			}
		}

		//Futbolcu tamamen siliniyor
		else if (secim == '8')
		{
			//Futbolcular listeleniyor
			for (int i = 0; i < takimS; i++)
			{
				takim[i].Listeleme(0);
			}

			cout << "Ýþlem yapmak istediðiniz Futbolcunun lisans numarasýný giriniz." << endl;
			cin >> nos;

			//Lisans numarasý ile futbolcu eþleniyor
			for (int i = 0; i < takimS; i++)
			{
				for (int j = 0; j < takim[i].oyuncuS; j++)
				{
					//Futbolcu siliniyor
					if (takim[i].oyuncu[j].lisansNO == nos)
					{						
						takim[i].oyuncu[j] = takim[i].oyuncu[takim[i].oyuncuS - 1];
						takim[i].oyuncuS--;

						cout << endl << "Ýþleminiz baþarýlý olmuþtur." << endl;
					}

					else if (i==takimS-1&&j==takim[i].oyuncuS-1)
					{
						cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
					}
				}
			}
		}

		//Futbolcu bilgileri güncelleniyor
		else if (secim == '9')
		{
			for (int i = 0; i < takimS; i++)
			{
				takim[i].Listeleme(0);
			}

			cout << "Ýþlem yapmak istediðiniz Futbolcunun lisans numarasýný giriniz." << endl;
			cin >> nos;

			//Lisans numarasý ile futbolcu eþleniyor
			for (int i = 0; i < takimS; i++)
			{
				for (int j = 0; j < takim[i].oyuncuS; j++)
				{
					if (takim[i].oyuncu[j].lisansNO == nos)
					{
						takim[i].Duzenleme(j, i);

						//Futbolcu numarasý çakýþmayana kadar forma numarasý isteniyor
						for (int k = 0; k < takim[i].oyuncuS; k++)
						{
							if (takim[i].oyuncu[j].forma==takim[i].oyuncu[k].forma)
							{
								do
								{
									cout << "Lütfen yeni bir forma numarasý giriniz." << endl;
									cin >> forma;
									takim[i].oyuncu[j].forma = forma;
									sonuc1 = true;

									for (int l = 0; l < takim[i].oyuncuS; l++)
									{
										if (k==j)
										{
												
										}

										else if (takim[i].oyuncu[j].forma == takim[i].oyuncu[k].forma)
										{
											sonuc1 = false;
											break;
										}
									}
								} while (sonuc1 == false);

								cout << endl << "Ýþleminiz baþarýlý olmuþtur." << endl;

								i = 100;
								j = 100;
								k = 100;
							}
						}
					}

					else if (i==takimS-1&&j==takim[i].oyuncuS-1)
					{
						cout << endl << "Ýþleminiz baþarýsýz olmuþtur." << endl;
					}
				}
			}
		}

		//Takýmsýzlar listeleniyor
		else if (secim == 'A'||secim=='a')
		{
			takim[0].Listeleme(0);			
		}

		//Fikstür oynanýyor
		else if (secim=='B'||secim=='b')
		{			
			cout << "Toplam kaç karþýlaþma olacak?" << endl;
			cin >> karsilasma;
			for (int i = 0; i < karsilasma; i++)
			{
				cout << "Hangi takýmlarýn karþýlaþmasýný istiyorsanýz numarasýný giriniz." << endl;
				cin >> nos;
				cout << "VS " << endl;
				cin >> nos2;
				sonuc1 = false;
				sonuc2 = false;

				if (nos==nos2)
				{
					cout << "Lütfen farklý takýmlar giriniz." << endl;
					i--;
					continue;
				}
				
				//Takým numaralarý iki farklý takýmla eþleniyorsa futbol maçý oynanýyor
				for (j = 1; j < takimS; j++)
				{
					if (takim[j].no == nos)
					{
						sonuc1 = true;
						break;
					}
				}

				for (k = 0; k < takimS; k++)
				{
					if (takim[k].no == nos2)
					{
						sonuc2 = true;							
						break;
					}
				}

				if (sonuc1==true&&sonuc2==true)
				{
					cout << setw(50) << takim[j].ad << " VS " << takim[k].ad << endl << endl;

					//Ýlk 11 atanýyor
					for (int x = 0; x < 11; x++)
					{
						cout << setw(3) << takim[j].oyuncu[x].forma << " " << takim[j].oyuncu[x].isim << " " << takim[j].oyuncu[x].soyisim << " " << takim[j].oyuncu[x].konum;

						//4-4-2 formatýnda oyunculara oynadýðý andaki mevkileri veriyor
						if (x==0)
						{
							cout << " (Kaleci)";
						}

						else if (x==1||x==2||x==4||x==5)
						{
							cout << " (Defans)";
						}

						else if (x==6||x==7||x==8||x==9)
						{
							cout << " (Orta Saha)";
						}

						else
						{
							cout << " (Forvet)";
						}

						cout << setw(20) << takim[k].oyuncu[x].forma << " " << takim[k].oyuncu[x].isim << " " << takim[k].oyuncu[x].soyisim << " " << takim[k].oyuncu[x].konum;
						
						if (x == 0)
						{
							cout << " (Kaleci)"<<endl;
						}

						else if (x == 1 || x == 2 || x == 4 || x == 5)
						{
							cout << " (Defans)"<<endl;
						}

						else if (x == 6 || x == 7 || x == 8 || x == 9)
						{
							cout << " (Orta Saha)"<<endl;
						}

						else
						{
							cout << " (Forvet)"<<endl;
						}
					}

						sans1 = rand() % 10;
						sans2 = rand() % 10;

						//sans1 sans2 0 dan 9 a atanan rastgele iki gol sayýsýdýr 
						//Ýki deðiþken arasýndaki iliþkiye göre kimin kazandýðý belirleniyor
						//Kazanan takým 3 puan,Berabere kalan 1 puan alýyor
						//sans3 ilk 11 den rastgele birini seçip onun gol sayýsýný arttýrýyor
						if (sans1 > sans2)
						{
							cout << endl << takim[j].ad << " " << sans1 << " - " << sans2 << " " << takim[k].ad << endl;
							cout << takim[j].ad << " Kazandý" << endl;

							takim[j].puan += 3;

							cout << "Gol atan Futbolcular : " << endl;

							for (int i = 0; i < sans1; i++)
							{
								sans3 = rand() % 11;
								takim[j].oyuncu[sans3].golO++;
								cout << takim[j].oyuncu[sans3].isim << endl;
							}

							for (int i = 0; i < sans2; i++)
							{
								sans3 = rand() % 11;
								takim[k].oyuncu[sans3].golO++;
								cout << takim[k].oyuncu[sans3].isim << endl;

							}
						}

						else if (sans1==sans2)
						{
							cout << endl << takim[j].ad << " " << sans1 << " - " << sans2 << " " << takim[k].ad << endl;
							cout << "Maç berabere bitti."<<endl;

							takim[j].puan++;
							takim[k].puan++;

							cout << "Gol atan Futbolcular : " << endl;

							for (int i = 0; i < sans1; i++)
							{
								sans3 = rand() % 11;
								takim[j].oyuncu[sans3].golO++;
								cout << takim[j].oyuncu[sans3].isim << endl;
							}

							for (int i = 0; i < sans2; i++)
							{
								sans3 = rand() % 11;
								takim[k].oyuncu[sans3].golO++;
								cout << takim[k].oyuncu[sans3].isim << endl;
							}
						}

						else if (sans1<sans2)
						{
							cout <<endl<< takim[j].ad <<" "<< sans1 << " - " << sans2 <<" " << takim[k].ad<<endl;
							cout << takim[k].ad << " Kazandý" << endl;

							takim[k].puan += 3;

							cout << "Gol atan Futbolcular : " << endl;

							for (int i = 0; i < sans1; i++)
							{
								sans3 = rand() % 11;
								takim[j].oyuncu[sans3].golO++;
								cout << takim[j].oyuncu[sans3].isim << endl;
							}

							for (int i = 0; i < sans2; i++)
							{
								sans3 = rand() % 11;
								takim[k].oyuncu[sans3].golO++;
								cout << takim[k].oyuncu[sans3].isim << endl;
							}
						}	

						fikstür << hafta << ".Hafta" << endl << endl << takim[j].ad << " " << sans1 << " - " << sans2 << " " << takim[k].ad << endl << endl;
				}

				else
				{
					cout << "Geçersiz takým girdiniz lütfen tekrar deneyiniz." << endl;
					i--;
				}				
			}

			hafta++;
		}

		//Takýmlar ve durumlarý listeleniyor
		else if (secim=='C'||secim=='c')
		{
			for (int i = 1; i < takimS; i++)
			{
				takim[i].Listeleme(1);
			}
		}

		else
		{
			cout << "Geçersiz iþlem girdiniz Lütfen tekrar bir iþlem seçiniz." << endl << endl;
		}	
	}
}

void Takim::Olusturma()
{
	static int x = 4;
	oyuncuS = 0;
	no = 100 + x;
	cout << "Takým adýný giriniz." << endl;
	cin.ignore();
	getline(cin, ad);
	cout << endl << "Takýmýnýzýn hangi ülkeden olduðunu giriniz." << endl;	
	getline(cin, adres);		
	cout << endl << "Takýmýn yöneticisinin adýný giriniz." << endl;
	getline(cin, yoneticiAd);
	cout << endl << "Takýmýn telefon numarasýný giriniz." << endl;
	getline(cin, tel);	
	x++;
}

void Takim::Listeleme(int x)
{	
	cout << "-----------------------------------------------" << endl << endl
		<< setw(25) << "Takým No : " << no << endl
		<< setw(25) << "Takým Ad : " << ad << endl
		<< setw(25) << "Takým Ülke : " << adres << endl
		<< setw(25) << "Takým Telefon : " << tel << endl
		<< setw(25) << "Takým Yönetici : " << yoneticiAd << endl
		<< "Takým Puaný : " << puan << endl << endl
		<< "-----------------------------------------------" << endl << endl;

	if (x==0)
	{
		for (int i = 0; i < oyuncuS; i++)
		{
			cout << setw(25) << "Oyuncu Ad : " << oyuncu[i].isim << endl
				<< setw(25) << "Oyuncu Soy Ad : " << oyuncu[i].soyisim << endl
				<< setw(25) << "Oyuncu Toplam Gol : " << oyuncu[i].golO << endl
				<< setw(25) << "Oyuncu TC : " << oyuncu[i].TC << endl
				<< setw(25) << "Oyuncu Forma NO : " << oyuncu[i].forma << endl
				<< setw(25) << "Oyuncu Lisans NO : " << oyuncu[i].lisansNO << endl
				<< setw(25) << "Oyuncu Mevki : " << oyuncu[i].konum << endl
				<< setw(25) << "Oyuncu Ücret : " << oyuncu[i].ucret << endl
				<< setw(25) << "Oyuncu Doðum Tarihi : " << oyuncu[i].dogumGun << "." << oyuncu[i].dogumAy << "." << oyuncu[i].dogumYil << endl << endl;
		}
	}
}

void Takim::Ekleme()
{
	cout << "Oyuncu adýný giriniz." << endl;
	cin.ignore();
	getline(cin, oyuncu[oyuncuS].isim);
	cout << "Oyuncu soy adýný giriniz." << endl;
	getline(cin, oyuncu[oyuncuS].soyisim);
	cout << "Oyuncu TC'sini giriniz." << endl;
	getline(cin, oyuncu[oyuncuS].TC);
	cout << "Oyuncu lisans numarasýný giriniz." << endl;
	cin >> oyuncu[oyuncuS].lisansNO;
	cout << "Oyuncu mevkisini giriniz." << endl;
	cin.ignore();
	getline(cin, oyuncu[oyuncuS].konum);
	cout << "Oyuncu ücretini giriniz." << endl;
	getline(cin, oyuncu[oyuncuS].ucret);
	cout << "Oyuncu doðum tarihini giriniz.(gün-ay-yýl)" << endl;
	cin >> oyuncu[oyuncuS].dogumGun >> oyuncu[oyuncuS].dogumAy >> oyuncu[oyuncuS].dogumYil;
	oyuncu[oyuncuS].forma = {};
	
	Kontrol(0);
}

void Takim::Duzenleme(int x, int y)
{
	cout << "Oyuncu adýný giriniz." << endl;
	cin.ignore();
	getline(cin, oyuncu[x].isim);
	cout << "Oyuncu soy adýný giriniz." << endl;
	getline(cin, oyuncu[x].soyisim);
	if (y!=0)
	{
		cout << "Oyuncu forma numarasýný giriniz." << endl;
		cin >> oyuncu[x].forma;
	}
	cout << "Oyuncu mevkisini giriniz." << endl;
	cin.ignore();
	getline(cin, oyuncu[x].konum);
	cout << "Oyuncu ücretini giriniz." << endl;
	getline(cin, oyuncu[x].ucret);
}

bool Takim::Kontrol(int x)
{
	int sonuc = true;

	//TC nin 11 haneli olmasý ve sayýlardan oluþmasý kontrol ediliyor
	for (char c : oyuncu[oyuncuS].TC)
	{
		if (!isdigit(c))
		{
			sonuc = false;
		}
	}

	if (oyuncu[oyuncuS].TC.length() != 11)
	{
		sonuc = false;
	}

	//lisans numarasýnýn çakýþýp çakýþmadýðý kontrol ediliyor
	for (int i = 0; i < oyuncuS; i++)
	{
		for (int k = i + 1; k < oyuncuS; k++)
		{
			if (oyuncu[i].lisansNO == oyuncu[k].lisansNO)
			{
				sonuc = false;
			}
		}
	}

	//Doðum tarihinin tutarlý olup olmadýðý kontrol ediliyor
	if (oyuncu[oyuncuS].dogumGun < 1 || oyuncu[oyuncuS].dogumGun > 31 || oyuncu[oyuncuS].dogumAy < 1 || oyuncu[oyuncuS].dogumAy>12 || oyuncu[oyuncuS].dogumYil < 1925 || oyuncu[oyuncuS].dogumYil>2006)
	{
		sonuc = false;
	}

	if (sonuc == false)
	{
		oyuncu[oyuncuS] = {};
		cout << "Girdiðiniz bilgiler yanlýþ veya baþka bilgilerle çatýþmakta lütfen tekrar deneyiniz" << endl << endl;
		return false;
	}

	else
	{
		oyuncuS++;
		return true;
	}
}