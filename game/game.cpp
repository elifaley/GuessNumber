// game.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int sayi = 0, girilenSayi = 0, denemeSayi = 0, denemeLimiti = 10;
    int puan;

	srand(time(NULL));
	sayi = rand() % 100;

    while (denemeSayi < denemeLimiti) {
        cout << "Enter a number: ";
        cin >> girilenSayi;

        denemeSayi++;

        if (sayi < girilenSayi) {
            cout << "Enter a smaller number." << endl;
        }
        else if (sayi > girilenSayi) {
            cout << "Enter a larger number." << endl;
        }
        else {
            cout << sayi << "  is the number found in  " << denemeSayi << " attempts." << endl;
            cout << "Congratulations!" << endl;
            puan = (denemeLimiti - denemeSayi + 1) * 10;
            cout << "Point: " << puan << endl;
            break; 
        }

        if (denemeSayi == denemeLimiti) {
            cout << "Unfortunately, you have run out of attempts. The correct number is: " << sayi << endl;
        }
    }

    return 0;
}