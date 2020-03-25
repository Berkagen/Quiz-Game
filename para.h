#ifndef para
#define para


 struct  Yarismaci{

	char isim[100];
	char soyisim[100];

};
typedef struct Yarismaci Yarismaci;
 Yarismaci yarismaci;

struct Soru {
	char soru1[100];
	char a[100];
	char b[100];
	char c[100];
	char d[100];
	char crctans;

};
typedef struct Soru Soru ;

void bilgi();
void sorular(Soru Sorular[50]);
void kazanilanpara(void);


#endif
