#include <stdio.h>
#include <string.h>
#include <time.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include "para.h"

int kontrolk=0;
int ctrl,ctry;

void bilgi()
{
printf("Isminizi giriniz : ");
scanf("%s",yarismaci.isim);
printf("\nSoyisminizi giriniz : ");
scanf("%s",yarismaci.soyisim);
}


void sorular(Soru Sorular[50]){
	
	int x;
	char cevap;
	
	srand(time(NULL));
	x=rand()%51;
	
	printf ("\n\n%s\n",Sorular[x].soru1);
	printf ("%s\n",Sorular[x].a);
	printf ("%s\n",Sorular[x].b);
	printf ("%s\n",Sorular[x].c);
	printf ("%s\n",Sorular[x].d);
	if(kontrolk==0){
		printf("\n->Cift cevap jokerinizi kullanmak icin k ye basabilirsiniz.");
	}
	printf("\n\nCevabiniz : ");
	cevap=getche();
	printf("\n");
	if(cevap=='k' && kontrolk==0) 
	{
		kontrolk=1;
		printf("\nSuan cift cevap hakki jokerinizi kullaniyorsunuz.\n\nLutfen ilk cevabinizi girin.");
			printf("\n\nCevabiniz : ");
			cevap=getche();
			printf("\n");
		if (cevap==Sorular[x].crctans){
			kontrolk=1;
		 	printf("\nDogru cevap verdiniz !");
		 	ctrl++;
			printf("\n\nDogru cevap sayisi: %d" , ctrl);
			printf("\nYanlis cevap sayisi: %d " , ctry);
		}
		else
		{
			kontrolk=1;
			printf("\nYanlis cevap verdiniz. 2.ci cevabinizi girin ");
			printf("\n");
			printf("Cevabiniz : ");
			cevap=getche();
			if (cevap==Sorular[x].crctans){
				 printf("\nDogru cevap verdiniz !");
				 ctrl++;
				printf("\n\nDogru cevap sayisi: %d" , ctrl);
				printf("\nYanlis cevap sayisi: %d " , ctry);
			}
			else
			{
				printf("\nYanlis cevap verdiniz. Dogru cevap: %c ",Sorular[x].crctans);
				ctry++;
				printf("\n\nDogru cevap sayisi: %d" , ctrl);
				printf("\nYanlis cevap sayisi: %d " , ctry);
			}
		

		}
	}
	
	else if (cevap==Sorular[x].crctans){
	 printf("\nDogru cevap verdiniz !");
	 ctrl++;
	printf("\n\nDogru cevap sayisi: %d" , ctrl);
	printf("\nYanlis cevap sayisi: %d " , ctry);
	}
	else if(cevap=='a' || cevap=='b' || cevap=='c' || cevap=='d')
			{
				printf("\nYanlis cevap verdiniz. Dogru cevap: %c ",Sorular[x].crctans);
				ctry++;
				printf("\n\nDogru cevap sayisi: %d" , ctrl);
				printf("\nYanlis cevap sayisi: %d " , ctry);
			}
	else
		{
		printf("\nBoyle bir secenek olmadigi icin sorunuz yanlis kabul edildi.Sonraki soruya gecmek icin herhangi bir tusa basin!");
		getch();
	}
}


void kazanilanpara(void)
{
	switch(ctrl)
	{
		case 1:
			printf("\n\nTEBRIKLER! 500TL kazandiniz.");
			break;
		
		case 2:
			printf("\n\nTEBRIKLER! 1.000TL kazandiniz.");
			break;		
		
		case 3:
			printf("\n\nTEBRIKLER! 2.000TL kazandiniz.");
			break;
	
		case 4:
			printf("\n\nTEBRIKLER! 5.000TL kazandiniz.");
			break;
	
		case 5:
			printf("\n\nTEBRIKLER! 7.500TL kazandiniz.");
			break;
	
		case 6:
			printf("\n\nTEBRIKLER! 15.000TL kazandiniz.");
			break;
	
		case 7:
			printf("\n\nTEBRIKLER! 30.000TL kazandiniz.");
			break;
	
		case 8:
			printf("\n\nTEBRIKLER! 50.000TL kazandiniz.");
			break;
	
		case 9:
			printf("\n\nTEBRIKLER! 100.000TL kazandiniz.");
			break;
	
		case 10:
			printf("\n\nTEBRIKLER! 500.000TL kazandiniz.");
			break;
		
		default:
			printf("\n\nMaalesef herhangi bir tutar kazanamadiniz.");
			break;
	
	}
}

void delay(unsigned int msaniye)
{
    clock_t hedef = msaniye + clock();
    while (hedef > clock());
}
