#include "Game.h"
#include "Baraja.h"
#include "List.h"
using namespace std;
#include <iostream>
#include <string>


Baraja* baraja = new Baraja();
int MovValid = 0;

// bool indica si la posición a mover de la lista inicial es válido
void Game::Movestart(List*& Lstart, int position) {
	//Lstart = new Lista();
	Node* value;
	int num, num2;
	String^ letter;
	String^ letter2;

	if (position == Lstart->accountant - 1) {
		Validorder();
	}
	if (position > Lstart->accountant) {
		System::Windows::Forms::MessageBox::Show("Posición inválida >;v, intente de nuevo");
	}
	if (position < Lstart->accountant && position != Lstart->accountant - 1) {
		num = GetNum(Lstart->GetValue(position));
		letter = GetLetter(Lstart->GetValue(position));
		num2 = GetNum(Lstart->GetValue(position + 1));
		letter2 = GetLetter(Lstart->GetValue(position + 1));
		if (num = num2 + 1 && letter != letter2) {
			Validorder();
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Error, el movimiento es inválido, intente de nuevo");
		}
	}

	if (Validorder()) {
		// extraer nodo final pila inicio y mete a la pila auxiliar 
		baraja->Fillaux(Lstart, position);
	}
}

bool Game::Validorder() {
	return true;
}


void Game::MovedeckToAux(List* deck) {
	baraja->Fillaux(deck, deck->accountant - 1);
}

bool Game::Validmove(List* Lend) {
	if (Lend->Listempty() == false) {
		int numaux = GetNum(baraja->aux->GetValue(baraja->aux->accountant - 1));
		String^ letterAux = GetLetter(baraja->aux->GetValue(baraja->aux->accountant - 1));
		int numend = GetNum(Lend->GetValue(Lend->accountant - 1));
		String^ letterend = GetLetter(Lend->GetValue(Lend->accountant - 1));

		if (numend = numaux + 1 && letterend != letterAux) {
			return true;
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Error, el movimiento es inválido >;v, intente de nuevo");
			return false;
		}
	}
	else {
		return true;
	}
}

void Game::Moveend(List*& Lend) {
	//Lfinal = new Lista();
	//inserta movimiento valido
	if (Validmove(Lend) == true) {
		baraja->PopAux(Lend, baraja->aux);
	}
}

void Game::takedeck(List* deck) {
	deck->ExtractEnd();
}

int Game::GetNum(String^ value) {
	int num = 0;
	String^ letter = "";
	if (value->Length == 2)
	{
		letter = value->Substring(0, 1);
		num = Convert::ToInt32(letter);
		return num;
	}
	else if (value->Length == 3)
	{
		letter = value->Substring(0, 2);
		num = Convert::ToInt32(letter);
		return num;
	}
}

String^ Game::GetLetter(String^ value) {
	String^ cadena = "";
	if (value->Length == 2)
	{
		cadena = Convert::ToString(value[1]);
		return cadena;
	}
	else if (value->Length == 3) {
		cadena = Convert::ToString(value[2]);
		return cadena;
	}
}

void Game::Winner(List* g1) {
	int order = 0;

	for (int i = 0; i < g1->accountant - 1; i++)
	{
		int num1 = GetNum(g1->GetValue(i));
		String^ letter1 = GetLetter(g1->GetValue(i));
		int num2 = GetNum(g1->GetValue(i + 1));
		String^ letter2 = GetLetter (g1->GetValue(i + 1));

		if (num1 = num2 + 1 && letter1 != letter2) {
			order++;
		}
		else {
			order = 0;
		}
	}
	if (order >= 4)
	{
		System::Windows::Forms::MessageBox::Show("FELICIDADES, USTED HA GANADO");
	}
}
