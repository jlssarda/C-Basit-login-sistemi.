#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int sifre;
	cout << "�ifre belirleyiniz." << endl;
	cin >> sifre;
	cout << "�ifre belirlediniz." << endl;
	this_thread::sleep_for(chrono::seconds(4));
	system("cls");
	while (true) {
		int KullaniciSifreDenemesi;
		cout << "L�tfen belirledi�in �ifreyi giriniz." << endl;
		cin >> KullaniciSifreDenemesi;
		if (KullaniciSifreDenemesi == sifre) {
			cout << "�ifreniz do�ru. Giri�e y�nlendiriliyorsunuz..." << endl;
			this_thread::sleep_for(chrono::seconds(3));
			break;
		}
		else {
			cout << "�ifre yanl��. Tekrar deneyiniz." << endl;
		}
		this_thread::sleep_for(chrono::seconds(2));
		system("cls");
	}
	return 0;
}