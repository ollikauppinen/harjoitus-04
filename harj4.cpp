// Olli Kauppinen 

#include <iostream> // sallii input & output 
using namespace std; // standardi nimiavaruus k‰yttˆˆn
#define MINIMI 10 //m‰‰ritt‰‰ MAX arvoksi 10
const int MAKSIMI = 20; // m‰‰ritt‰‰ muuttujan nimelt‰ maxi ja sille arvoksi 20 
int summa; // luo muuttuja summa
void Laske(int, int); // aliohjelma Laske muuttuja int
void main() //p‰‰ohjelma
{
	int luku1 = 2; // luo muuttuja luku1, antaa arvoksi 2
	int luku2; // luo muuttuja luku2
	cout<<"Syˆt‰ luku: "; // Pyyt‰‰ k‰ytt‰j‰‰ syˆtt‰m‰‰n luvun
	cin>>luku2; // input, m‰‰ritt‰‰ luku 2 arvon
	Laske(luku1, luku2); // k‰ynnist‰‰ aliohjelman Laske k‰ytt‰en luku1 ja luku2 arvoja
	if (summa < MINIMI) // jos summa on pienempi kuin MAX
		cout<<"Summa on pienempi kuin "<<MINIMI; // Tulostaa rivin
	else if (summa < MAKSIMI) // jos summa on pienempi kuin maxi
		cout<<"Summa on pienempi kuin "<<MAKSIMI; // tulostaa rivin
	else
		cout<<"summa on suurempi kuin "<<MAKSIMI;
}
void Laske(int eka, int toka) // aliohjelma Laske, arvoiksi eka ja toka
{
	summa = eka + toka; // summa on yht‰ kuin eka ja toka
}