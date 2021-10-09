#include "Baraja.h"
#include "MyForm.h"
using namespace System;

// Crea las 52 cartas y las almacena
void Baraja::Filldeck() {
	Listdeck = new List();

	int num = 1;
	String^ value = "";

	for (int i = 0; i < 52; i++) {
		//menor a mayor, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K y A
		if (num == 14) { // como el numero 14 o la letra A representa dos numeros 
			num = 1;
		}
		if (i <= 26) {
			value = Convert::ToString(num) + "R";//rojo
			Listdeck->InsertStart(value);
		}
		if (i >= 27)
		{
			value = Convert::ToString(num) + "N";//negro
			Listdeck->InsertStart(value);
		}
		num++;
	}
}

//Llena la pila mazo de manera aleatoria
List* Baraja::Fillstackdeck() {
	deck = new List();

	Node* value;
	//para los numeros randoms
	Random^ positionrdm = gcnew Random();
	while (Listdeck->Listempty() == false)
	{
		value = Listdeck->ExtractPosition(positionrdm->Next(0, Listdeck->accountant));
		deck->InsertEnd(value->fact);
	}
	return deck;
}
//se reparten 7 grupos de forma incremental 
List* Baraja::Filldeck1() { 
	deck1 = new List();
	Node* value;
	for (int i = 0; i < 1; i++) {
		value = deck->ExtractEnd();
		deck1->InsertEnd(value->fact);
	}
	return deck1;
}

List* Baraja::Filldeck2() {
	deck2 = new List();
	Node* value;
	for (int i = 0; i < 2; i++) {
		value = deck->ExtractEnd();
		deck2->InsertEnd(value->fact);
	}
	return deck2;
}

List* Baraja::Filldeck3() {
	deck3 = new List();
	Node* value;
	for (int i = 0; i < 3; i++) {
		value = deck->ExtractEnd();
		deck3->InsertEnd(value->fact);
	}
	return deck3;
}

List* Baraja::Filldeck4() {
	deck4 = new List();
	Node* value;
	for (int i = 0; i < 4; i++) {
		value = deck->ExtractEnd();
		deck4->InsertEnd(value->fact);
	}
	return deck4;
}

List* Baraja::Filldeck5() {
	deck5 = new List();
	Node* value;
	for (int i = 0; i < 5; i++) {
		value = deck->ExtractEnd();
		deck5->InsertEnd(value->fact);
	}
	return deck5;
}

List* Baraja::Filldeck6() {
	deck6 = new List();
	Node* value;
	for (int i = 0; i < 6; i++) {
		value = deck->ExtractEnd();
		deck6->InsertEnd(value->fact);
	}
	return deck6;
}

List* Baraja::Filldeck7() {
	deck7 = new List();
	Node* value;
	for (int i = 0; i < 7; i++) {
		value = deck->ExtractEnd();
		deck7->InsertEnd(value->fact);
	}
	return deck7;
}

List* Baraja::Fillaux(List*& Lstart, int position) {
	aux = new List();
	Node* value;
	while (Lstart->accountant - 1 >= position) {
		value = Lstart->ExtractEnd();
		aux->InsertEnd(value->fact);
	}
	return Lstart;
	return aux;
}

List* Baraja::PopAux(List*& Lend, List*& aux) {
	//Lista* auxiliar;
	Node* value;
	while (aux->accountant != 0) {
		value = aux->ExtractEnd();
		Lend->InsertEnd(value->fact);
	}
	return Lend;
}

