#include "Skup.h"
#include <iostream>

using namespace std;
void main()
{
	Skup S1(10);
	S1.UcitajElemente();
	S1.Upit(4);

	Skup* josJedan = new Skup();
	josJedan->UcitajElemente();
	josJedan->Upit(1);
	josJedan->IzbaciDuplikat();
	josJedan->SortirajNerastuci();
	josJedan->PrikaziElemente();
	josJedan->~Skup();

}