#pragma once
class Skup
{
private:
	int brojElemenata;
	int* nizElemenata;
public:

	Skup()
	{
		brojElemenata = 0;
	};

	Skup(int n)
	{
		brojElemenata = n;
		nizElemenata = new int[brojElemenata];
	}; //konstruktor za zauzimanje prostora u memoriji

	~Skup(); //destruktor 

	inline int duzinaNiza()
	{
		return brojElemenata;
	}; //inline funkcija

	void IzbaciDuplikat(); //izbacuje duplikate..
	void Upit(int br); //ispituje da li dat element pripada nasem skupu
	void UcitajElemente(); //ucitava el. sa standardnog ulaza
	void SortirajNerastuci();
	void PrikaziElemente(); //prikazuje el. na standardni izlaz



};