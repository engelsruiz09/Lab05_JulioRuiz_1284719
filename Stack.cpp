#include "Stack.h"
using namespace System;
//se tomo de referencia el codigo que se vio en clase de teoria
Stack::Stack() {
	list = new List();
}

void Stack::Insert(String^ value) {
	list->InsertEnd(value);
}

Node* Stack::remove() {
	return list->ExtractEnd();
}

bool Stack::stackisempty() {
	return list->Listempty();
}