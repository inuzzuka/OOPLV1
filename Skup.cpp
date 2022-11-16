#include "Skup.h"
#include <iostream>
using namespace std;

Skup::~Skup()
{
	delete[] nizElemenata;
}

void Skup::IzbaciDuplikat()
{
	for (int i = 0; i < brojElemenata;i++)
	{
		for (int j = i + 1;j < brojElemenata;j++)
		{
			if (nizElemenata[i] == nizElemenata[j])
			{
				for (int k = j;k < brojElemenata - 1;k++)
				{
					nizElemenata[k] = nizElemenata[k + 1];;
				}
				brojElemenata--;
				j--;
			}
		}
	}
}

void Skup::Upit(int br)
{
	int provera = 0;
	for (int i = 0;i < brojElemenata - 1;i++)
	{
		if (br == nizElemenata[i])
			provera = 1;
	}
	if (provera)
		cout << "Postoji." << endl;
	else
		cout << "Ne postoji." << endl;
}

void Skup::UcitajElemente()
{
	cout << "Unesi elemente: " << endl;
	for (int i = 0; i < brojElemenata; i++)
	{
		cin >> nizElemenata[i];
	}
}

void Skup::SortirajNerastuci()
{
	for (int i = 0; i < brojElemenata - 1;i++)
	{
		for (int j = 0; j < brojElemenata - 1;j++)
		{
			if (nizElemenata[j] < nizElemenata[j + 1])
			{
				int pom = nizElemenata[j];
				nizElemenata[j] = nizElemenata[j + 1];
				nizElemenata[j + 1] = pom;

			}
		}
	}
}

void Skup::PrikaziElemente()
{
	cout << "Elementi skupa: ";
	for (int i = 0; i < brojElemenata; i++)
		cout << nizElemenata[i] << " ";
}

