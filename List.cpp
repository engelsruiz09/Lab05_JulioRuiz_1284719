#include "List.h"
#include "Node.h"
#include <iostream>
#include <string>
//se tomo de referencia el codigo que se vio en clase de teoria
using namespace System;

List::List() {
	start = nullptr;
	end = nullptr;
	accountant = 0;
}

void List::InsertStart(String^ value) {
	Node* niew = new Node();//no se podia poner dos new xd 
	niew->fact = value;
	if (Listempty())
	{
		start = niew;
		end = niew;
	}
	else
	{
		niew->next = start;
		start = niew;
	}
	accountant++;
}

void List::InsertEnd(String^ value) {
	Node* niew = new Node();
	niew->fact = value;

	if (Listempty())
	{
		start = niew;
		end = niew;
	}
	else {
		end->next = niew;
		end = niew;
	}
	accountant++;
}

bool List::Listempty() {
	return accountant == 0; //true
}

Node* List::ExtractEnd() {
	Node* auxiliar1 = end;
	if (!Listempty())
	{
		if (accountant == 1)
		{
			end = end->next;
			start = end;
		}
		else
		{
			Node* auxiliar2 = start;
			auxiliar1 = auxiliar2->next;
			while (auxiliar1 != end)
			{
				auxiliar2 = auxiliar1;
				auxiliar1 = auxiliar2->next;
			}
			auxiliar2->next = auxiliar1->next;
			end = auxiliar2;
		}
		accountant--;
	}
	return auxiliar1;
}

Node* List::ExtractStart() {
	Node* aux = start;
	if (!Listempty()) {
		start = start->next;
		if (accountant == 1) {
			end = start;
		}
		accountant--;
	}
	return aux;
}

Node* List::ExtractPosition(int position) {
	Node* aux1 = start;
	if (!Listempty()) {
		if ((accountant == 1) || (position == 0)) {
			return ExtractStart();
		}
		else {
			if (position >= accountant) {//cuenta desde 1 
				return ExtractEnd();
			}
			else {
				Node* aux2 = start;
				aux1 = aux2->next;
				int index = 1;
				while ((aux1) && (index < position)) {
					aux2 = aux1;
					aux1 = aux2->next;
					index++;
				}
				aux2->next = aux1->next;
				accountant--;
			}

		}
	}
	return aux1;
}

Node* List::GetNode(String^ value) {
	Node* auxiliar1 = start;
	while ((auxiliar1) && (auxiliar1->fact != value))
	{
		auxiliar1 = auxiliar1->next;
	}
	return auxiliar1;
}

String^ List::GetValue(int posicion) {
	if ((posicion >= 0) && (posicion < accountant))
	{
		Node* auxiliar = start;
		int seeker = 0;
		while ((auxiliar) && (seeker < posicion))
		{
			auxiliar = auxiliar->next;
			seeker++;
		}
		return auxiliar->fact;
	}
}