// AST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// YAVM ---- Yet Another Vim for Mathematicians

#include <iostream>
#include <vector>

typedef enum _ObjectType {
	T_TEXT,
	T_EQUATION,
}ObjectType;

typedef enum _ObjectName {
	//////////////////////////// EVIRONMENT ////////////////////////////
	N_ALIGN,						// $1 = $2
	///////////////////////////// OPERATOR /////////////////////////////
	N_INTEGRATE,					// int_$1^$2 $3 d$4
	N_PLUS,						// $1 + $2
}ObjectName;

typedef enum _Symbol {
	S_ALPHA,
	S_BETA,

	S_NUM,
}Symbol;

typedef struct _Object {
	ObjectType t;
	ObjectName n;
	std::vector<Object*> obj_list;
	Symbol sym;
	int num;
}Object;

int main()
{
	Object root;
	root.t = T_EQUATION;
	root.n = N_PLUS;
	
}
