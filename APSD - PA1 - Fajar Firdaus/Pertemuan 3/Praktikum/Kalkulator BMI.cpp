#include <iostream>

using namespace std;

int main()
{
	double berat, tinggi, bmi;
	
	cout << "Kalkulator BMI" << endl << endl;
	
	cout << "Masukkan Berat Badan: ";
	cin >> berat;
		
	cout << "\nMasukkan Tinggi Badan: ";
	cin >> tinggi;
	
	tinggi = tinggi * 0.01;
	
	
	bmi = berat/(tinggi*tinggi);
	
	cout << endl;
	
	if (bmi < 18.5)
	{
		cout << "Kamu Kekurangan Berat Badan";
	}
	
	else if (bmi >= 18.5 && bmi < 25.0)
    {
        cout << "Berat Badan Kamu Ideal" << endl;
    }
    else if (bmi >= 25.0 && bmi < 30.0)
    {
        cout << "Kamu Kelebihan Berat Badan" << endl;
    }
    else
    {
        cout << "Kamu Kegemukan (Obesitas)" << endl;
    }
	
	return 0;
}
