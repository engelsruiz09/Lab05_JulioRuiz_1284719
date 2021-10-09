#pragma once
#include <iostream>
#include <string>
#include <msclr/gcroot.h>//dejolinkhttps://www.codeproject.com/articles/1139538/cplusplus-cli-under-the-hood
#include <vcclr.h>
using namespace System::Text;
using namespace msclr;//dejo link de donde tome la referenciahttps://link.springer.com/chapter/10.1007%2F978-1-4302-1054-2_24
//se tomo de referencia el codigo que se vio en clase de teoria
class Node
{
public:
	msclr::gcroot<System::String^> fact;//gcroot actúa como una referencia al objeto administrado o a la instancia de tipo de valor y está haciendo todo el trabajo al copiar la instancia de tipo de objeto o valor. 
	Node* next;//nodo que apunte al siguiente
	//constructor y destructor 
	Node();
	~Node();
};

