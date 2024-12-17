#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Turkish");

    int A[3][3], B[3][3], toplam[3][3], carpim[3][3], detA;

    cout << "3x3 A matrisinin elemanlarýný giriniz:\n";
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "3x3 B matrisinin elemanlarýný giriniz:\n";
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    // A + B Matris Toplamý
    cout << "A + B Matrisi Toplamý:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            toplam[i][j] = A[i][j] + B[i][j];
            cout << toplam[i][j] << " ";
        }
        cout << endl;
    }

    cout << "A x B Matrisi Çarpýmý:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            carpim[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                carpim[i][j] += A[i][k] * B[k][j];
            }
            cout << carpim[i][j] << " ";
        }
        cout << endl;
    }

    detA = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
         - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
         + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

    cout << "A Matrisinin Determinantý: " << detA << endl;
    system("pause");
    return 0;
}

