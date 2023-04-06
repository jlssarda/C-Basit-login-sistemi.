#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int sifre;
	cout << "Þifre belirleyiniz." << endl;
	cin >> sifre;
	cout << "Þifre belirlediniz." << endl;
	this_thread::sleep_for(chrono::seconds(4));
	system("cls");
	while (true) {
		int KullaniciSifreDenemesi;
		cout << "Lütfen belirlediðin þifreyi giriniz." << endl;
		cin >> KullaniciSifreDenemesi;
		if (KullaniciSifreDenemesi == sifre) {
			cout << "Þifreniz doðru. Giriþe yönlendiriliyorsunuz..." << endl;
			this_thread::sleep_for(chrono::seconds(3));
			break;
		}
		else {
			cout << "Þifre yanlýþ. Tekrar deneyiniz." << endl;
		}
		this_thread::sleep_for(chrono::seconds(2));
		system("cls");
	}
	return 0;
}