/* ----------- Piotr Konsek IS 2012/2013 ---------*/
/* Zestaw 4 wersja B-2 */
/* Program przechowuje w strukturze wskaźnik do tablicy liczb czyli wyrazów ciągu, przechowuje rozmiar tej tablicy oraz wskaznik do nastepnego ciagu. na koncu uwalniana jest pamięć*/


#include <stdio.h>
#include <stdlib.h>


/*Tutaj jest struktura w której przechowuje adres tablicy floatów, adres do następnego ciągu oraz rozmiar ciągu*/
struct listy
{
  struct listy *next;
  float *liczby;
  int rozmiar;
};



void wyswietl(struct listy *head1);
void uwolnij(struct listy *head1);


int main(void)
{
  struct listy *head1,*current1,*previous1;

  char ch;
  int i=1; 

  head1=NULL;

  printf("Program do wczytywania ciągów liczb rzeczywistych\n");
  
  

  while(ch!='3')
    {
    printf("1.Dodaj kolejny ciąg. \n 2. Wyswietl ciąg\n 3. Wyjscie\n");
      ch=getchar();
      switch (ch) {
      case '1' :
	{
	  if (head1==NULL)
	    {
	      current1=(struct listy*)malloc(sizeof(struct listy));
	      head1=current1;
	    }
	  else
	    {
	      current1=(struct listy*)malloc(sizeof(struct listy));
	      previous1->next=current1;
	    }
	  current1->next=NULL;

	  printf("Prosze podac rozmiar ciagu");
	  scanf("%d",&current1->rozmiar);
	  current1->liczby=(float*)malloc(sizeof(float)*current1->rozmiar);
	  printf("Prosze podac wyrazy ciągu po spacji i zatwierdzic enterem");
	  /*w ten sposób mozesz pobrac z wejscia dowolna ilosc liczb*/
	  for(i=0;i<current1->rozmiar;i++)
	    {
	      scanf("%f",&current1->liczby[i]);
	    }

	  previous1=current1;
	  /*to pozwala czyscic bufor↓*/
	  while((ch=getchar())!='\n');
	  break;
	}

      case '2': 
	{
          wyswietl(head1);
	  while((ch=getchar())!='\n'); 
          break;  
	}
 
      }

    }
  
    

  uwolnij(head1);
  return 0;
}

void wyswietl(struct listy *head1)
{
  struct listy *current1;
  int i;
  current1=head1;

  while(current1!=NULL)
    {
      i=0;
      printf("Nastepny ciag\n");
      for(i=0;i<current1->rozmiar;i++)
	{
          printf("%d. %.2f\n", i+1,current1->liczby[i]);
	}
      
     current1=current1->next;
    }
}

void uwolnij(struct listy *head1)
{

  struct listy *current1,*previous1;
  current1=head1;

  while(current1!=NULL)
    {
      previous1=current1;
      current1=current1->next;
      free(previous1);
    }
    free(current1);
}
