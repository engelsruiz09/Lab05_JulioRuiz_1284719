#pragma once
#include "List.h"
#include "Baraja.h"
class Game
{
public:
	void Movestart(List*& Lstart, int position);

	void Moveend(List*& Lend);

	void takedeck(List* deck);

	void MovedeckToAux(List* deck);

	int GetNum(String^ value);

	String^ GetLetter(String^ value);

	bool Validorder();

	bool Validmove(List* Lend);

	void Winner(List* list);
};
