#pragma once
#include "List.h"
using namespace System;

class Stack
{
private:
	List* list;
public:
	Stack();
	Node* remove();
	void Insert(String^ value);
	bool stackisempty();
};

