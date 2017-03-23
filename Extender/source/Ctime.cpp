#include "StdAfx.h"
#include "Ctime.h"


int Ctime::nSum = 0;
int Ctime::nTime = 0;
using namespace std;
int Ctime::startTime()
{

   if(nTime == 0)
	   return false;
   else
   {
	   for(int i=0;i<nTime;){
		   i++;
		   Sleep(1000);
	       system("color 7");
	 	   cout<<"% \a"<<i<<endl;
		   nR = i;
		}
   }

   return nR;
}

void Ctime::sum()
{
  nSum = nSum + 86400;//Esta sem tempo para testes
  nTime = nSum;
}

void Ctime::getTime()
{   
	int nVar;
	cout<<"Digite numero de dias"<<endl;
	cin>>nVar;

	try
    {
     if(nVar <=0 || nVar> 60)
	 {
	   throw nVar;
	 }
	 else
	 {
		 nSum = nVar;
	 }
 }

	catch(unsigned int init)
	{
		cout<<"Error ao passar um valor"<<endl;
	}

}

int Ctime::setTime()
{
	return nTime;

}