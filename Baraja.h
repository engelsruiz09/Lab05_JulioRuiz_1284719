#pragma once

#include "List.h"
#include "Stack.h"

class Baraja {
public:
	List* Listdeck;
	List* deck;
	List* deck1;
	List* deck2;
	List* deck3;
	List* deck4;
	List* deck5;
	List* deck6;
	List* deck7;
	List* aux;
	void Filldeck();
	List* Fillstackdeck();
	List* Filldeck1();
	List* Filldeck2();
	List* Filldeck3();
	List* Filldeck4();
	List* Filldeck5();
	List* Filldeck6();
	List* Filldeck7();
	List* Fillaux(List*& Lstart, int position);
	List* PopAux(List*& Lend, List*& aux);
};

