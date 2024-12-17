#include <iostream>
#include <locale.h>
#include <stdlib.h>  
#include <ctime>    


using namespace std;

int main() 
{

    setlocale(LC_ALL, "Turkish");


    srand(time(0));


    int ciro[5][12];


    for (int i = 0; i < 5; i++) 
	{ 
        for (int j = 0; j < 12; j++) 
		{  
            ciro[i][j] = rand() % 4901 + 100; 
        }
    }


    double ortciro[5];
    for (int i = 0; i < 5; i++) 
	{
        int toplamciro = 0;
        for (int j = 0; j < 12; j++) 
		{
            toplamciro += ciro[i][j];
        }
        ortciro[i] = toplamciro / 12.0;
    }


    int yil;
    cout << "Bir y�l se�in (1-5): ";
    cin >> yil;


    double yilortalamasi = ortciro[yil - 1];
    cout <<  yil << ".y�l�n ortalamas�: " << yilortalamasi << endl;
    cout << "Ortalamadan y�ksek olan aylar:" << endl;
    for (int j = 0; j < 12; j++)
	 {
        if (ciro[yil - 1][j] > yilortalamasi) 
		{
            cout << "Ay " << j + 1 << ": " << ciro[yil - 1][j] << endl;
        }
    }


    cout << yil << ".y�l i�in her �eyre�in ortalama cirolar�:" << endl;
    for (int i = 0; i < 4; i++) 
	{  
        int toplamciro = 0;
        for (int j = i * 3; j < (i + 1) * 3; j++) 
		{ 
            toplamciro += ciro[yil - 1][j];
        }
        cout  << i + 1 << ".�eyre�in ortalamas�: " << toplamciro / 3.0 << endl;
    }
    
    
    system ("pause");
    return 0;
}

