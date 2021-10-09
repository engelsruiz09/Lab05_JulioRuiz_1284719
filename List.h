#pragma once
#include "Node.h"
#include <iostream>
#include <string>
//se tomo de referencia el codigo que se vio en clase de teoria
using namespace System;

class List
{
public:
	Node* start;
	Node* end;
	int accountant;

	List();
	void InsertStart(String^ value);
	void InsertEnd(String^ value);
	Node* ExtractStart();
	Node* ExtractEnd();
	Node* ExtractPosition(int position);
	Node* GetNode(String^ value);
	String^ GetValue(int position);
	bool Listempty();
	
	//destructor
	~List() {};
};
