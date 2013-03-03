#include <iostream>
#include <fstream>

using namespace std;

void stworz_szyfr(char tablica[][6]);

int main(int argv, char *argc[])
{
  int i,j,k;
  char polibusz[6][6],bufor[65];
  
  stworz_szyfr(polibusz);

  ifstream wejscie(argc[1]);
  ofstream wyjscie(argc[2],ios_base::in);
  if(!wejscie)
    cout << "Nie można otworzyć pliku!" << endl;
  if(!wyjscie)
    cout << "Nie można otworzyć pliku!" << endl;  

  if (*(argc[3])=='1')
    {
      while(wejscie >> bufor)
	{
	  cout <<bufor;
	  i=0;
	  while(bufor[i]!='\0')
	    {
	      for(j=1;j<6;j++)
		for(k=1;k<6;k++)
		  {
		    if (bufor[i]==polibusz[j][k] || bufor[i]==polibusz[j][k]+32)
		      wyjscie << (j*10+k) << " ";
		  }
	      i++;
	    }
	}
    }

  if (*(argc[3])=='0')
    {
      while(wejscie >> bufor)
	{
	  i=0;
	  //cout << bufor[i];
	  //while(bufor[i])
	  //{
	      //int x=bufor[i]-48;
	      //int y=bufor[i]-48;
	      //wyjscie << polibusz[x][y];
	  //  i++;
	  //}
	}

    }  


  wejscie.close();
  wyjscie.close();
  return 0;
    
}

void stworz_szyfr(char tablica[][6])
{
  int i,ascii=65;
  for(i=0;i<6;i++)
    {
      tablica[i][0]=i;
      tablica[0][i]=i;
    }

  for(i=1;i<6;i++)
    for(int j=1;j<6;j++)
      {
	if (ascii==74) ascii++;
	tablica[i][j]=ascii;
	ascii++;
      }

}