#include <iostream>
#include <string>
using namespace std;

class JenisSemut

{
private:

	string namaSemut;
    string namalain;
    string namalatin;
    string karakter;
    int panjangtubuh;
    int batasumur;
    

public:
	
	Jenissemut (string namasemut, string namalain, string namalatin, string karakter, 
	int panjangtubuh, int batasumur )

    {
    	Jenissemut::namasemut= namasemut;
        Jenissemut::namalain = namalain;
        Jenissemut::namalatin = namalatin;
        Jenissemut::karakter = karakter;
        Jenissemut::panjangtubuh = panjangtubuh;
        Jenissemut::batasumur = batasumur;
        
    }
    
    void perolehInfo (void)

    {
    	cout << "****************************************************************************** " << endl;
    	cout << "********************************JENIS SEMUT*********************************** " << endl;

    	
        cout << "Nama Semut          : " << namasemut << endl;
        cout << "Nama Lain           : " << namalain << endl;
        cout << "Nama Latin          : " << namalatin << endl;
        cout << "Karakter      	     : " << karakter << endl;
        cout << "Panjang Tubuh (CM)  : " << panjangtubuh << endl;
        cout << "Batas Umur (Thn)    : " << batasumur << endl;
        
        cout << endl;
    };
    };
    
    


