#pragma once
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string.h>
#include <locale>
#include <sstream>//library stringstream name;

#define tmChar 1000
#define nMax 50

using namespace std;

namespace namestemplate
{

   template <class RETURN_INT>
   RETURN_INT covSTRINT(const std::string& nS)
   {
	   int num;
       stringstream Ls;
	   Ls<<nS;//Recebendo a string
	   Ls>>num;//Inserindo a string
	   return num;
   }struct temp;
}

//Syntax for use namespace 
//using namespace templat or templat::covSTRINT
//convSTRINT<int>("STRING");
using namespace namestemplate;


class Cfile{
private:
int nFile;
int nValue;
//##
char nAioSystem[9]; // off
size_t tm; // off
//##
static char n[16];// Nome do arquivo
static char sM;
string sTitle;
string sName;
string sFile;

public:

Cfile();

temp *t;
static bool getStr(const char* ,string , const char*);
static bool mStr(const char*);
bool CCreateFile(const char*);
INT64 read(const char*, const char*,const char*);
protected:
INT64 num;// armazena os numeros separados

};
