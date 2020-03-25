#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include "para.h"

int ctrl=0,ctry=0;
 
int main()
{
 Soru Sorular[51];
 char secim;
 int i; 
 
strcpy(Sorular[0].soru1,"Fatih Sultan Mehmet'in babasi kimdir?\n");
strcpy(Sorular[0].a,"A) 2.Murat ");
strcpy(Sorular[0].b,"B)1.Mehmet ");
strcpy(Sorular[0].c,"C)Yildirim Beyazit");
strcpy(Sorular[0].d,"D)Kanuni Sultan Suleyman");
Sorular[0].crctans='a';

strcpy(Sorular[1].soru1,"Hangisi periyodik tabloda bulunan bir element degildir?\n");
strcpy(Sorular[1].a,"A)Azot ");
strcpy(Sorular[1].b,"B)Oksijen ");
strcpy(Sorular[1].c,"C)Su");
strcpy(Sorular[1].d,"D)Lityum");
Sorular[1].crctans='c';

strcpy(Sorular[2].soru1," ABD baskanlarindan John Fitzgerald Kennedy'e suikast duzenleyerek olduren kimdir?\n");
strcpy(Sorular[2].a,"A)Clay Shaw ");
strcpy(Sorular[2].b,"B)Jack Ruby ");
strcpy(Sorular[2].c,"C)Lee Harley Oswald");
strcpy(Sorular[2].d,"D)Jake Amberston");
Sorular[2].crctans='c';

strcpy(Sorular[3].soru1,"Hangisi bir hucrede bulunan organeldir?\n");
strcpy(Sorular[3].a,"A)DNA ");
strcpy(Sorular[3].b,"B)RNA ");
strcpy(Sorular[3].c,"C)Lizozom");
strcpy(Sorular[3].d,"D)Kromozom");
Sorular[3].crctans='c';

strcpy(Sorular[4].soru1,"Fransiz Ihtilali kac yilinda gerceklesmistir?\n");
strcpy(Sorular[4].a,"A)1789 ");
strcpy(Sorular[4].b,"B)1709 ");
strcpy(Sorular[4].c,"C)1809");
strcpy(Sorular[4].d,"D)1819");
Sorular[4].crctans='a';

strcpy(Sorular[5].soru1,"Hangi hayvan memeli degildir?\n");
strcpy(Sorular[5].a,"A)Penguen ");
strcpy(Sorular[5].b,"B)Yarasa ");
strcpy(Sorular[5].c,"C)Yunus");
strcpy(Sorular[5].d,"D)Inek");
Sorular[5].crctans='a';

strcpy(Sorular[6].soru1,"Hangisi kuvvet birimidir?\n");
strcpy(Sorular[6].a,"A)Newton ");
strcpy(Sorular[6].b,"B)Pascal ");
strcpy(Sorular[6].c,"C)Joule");
strcpy(Sorular[6].d,"D)Candela");
Sorular[6].crctans='a';

strcpy(Sorular[7].soru1,"Bir elektrik devresinde direnc hangi harfle gosterilir?\n");
strcpy(Sorular[7].a,"A)R ");
strcpy(Sorular[7].b,"B)A ");
strcpy(Sorular[7].c,"C)D ");
strcpy(Sorular[7].d,"D)V ");
Sorular[7].crctans='a';

strcpy(Sorular[8].soru1," Osmanli Imparatorlugu yaklasik kac asir hukum surmustur?\n");
strcpy(Sorular[8].a,"A)6 ");
strcpy(Sorular[8].b,"B)5 ");
strcpy(Sorular[8].c,"C)7");
strcpy(Sorular[8].d,"D)8");
Sorular[8].crctans='a';

strcpy(Sorular[9].soru1,"Istiklal Marsi hangi yil yazilmistir?\n");
strcpy(Sorular[9].a,"A)1919 ");
strcpy(Sorular[9].b,"B)1920 ");
strcpy(Sorular[9].c,"C)1921");
strcpy(Sorular[9].d,"D)1918");
Sorular[9].crctans='c';

strcpy(Sorular[10].soru1,"Turkiye'nin yuzolcumu en buyuk komsusu hangisidir?\n");
strcpy(Sorular[10].a,"A)Suriye ");
strcpy(Sorular[10].b,"B)Iran ");
strcpy(Sorular[10].c,"C)Azerbeycan");
strcpy(Sorular[10].d,"D)Yunanistan");
Sorular[10].crctans='b';

strcpy(Sorular[11].soru1,"Otomobillerde, lastiklerin takildigi tekerlegin cember bicimindeki bolume ne ad verilir? \n");
strcpy(Sorular[11].a,"A)Jant ");
strcpy(Sorular[11].b,"B)Krikp ");
strcpy(Sorular[11].c,"C)Sasi ");
strcpy(Sorular[11].d,"D)Dingil ");
Sorular[11].crctans='a';

strcpy(Sorular[12].soru1," Hangisi mudavim sozcuguyle ayni anlamdadir?\n");
strcpy(Sorular[12].a,"A)Rutin ");
strcpy(Sorular[12].b,"B)Kalendar ");
strcpy(Sorular[12].c,"C)Gedikli ");
strcpy(Sorular[12].d,"D)Kadim");
Sorular[12].crctans='c';

strcpy(Sorular[13].soru1," 1+2+3+4+4+5+6+7+8+9 isleminin sonucu kactir?\n");
strcpy(Sorular[13].a,"A)40 ");
strcpy(Sorular[13].b,"B)50 ");
strcpy(Sorular[13].c,"C)45 ");
strcpy(Sorular[13].d,"D)55");
Sorular[13].crctans='c';

strcpy(Sorular[14].soru1," Hangisi bir tur muziktir?\n");
strcpy(Sorular[14].a,"A)Parisien ");
strcpy(Sorular[14].b,"B)Napoliten ");
strcpy(Sorular[14].c,"C)New Yorker ");
strcpy(Sorular[14].d,"D)Istanbulin");
Sorular[14].crctans='b';

strcpy(Sorular[15].soru1," Halk arasinda kullanilan soze gore hangisinin cezasini ayaklar ceker?\n");
strcpy(Sorular[15].a,"A)Akilsiz telefonun ");
strcpy(Sorular[15].b,"B)Akilsiz basin ");
strcpy(Sorular[15].c,"C)Bilincli tercihin ");
strcpy(Sorular[15].d,"D)Bilincli tuketimin ");
Sorular[15].crctans='b';

strcpy(Sorular[16].soru1," Hindi gibi kabarmak ne anlama gelir?\n");
strcpy(Sorular[16].a,"A)Telaslanmak ");
strcpy(Sorular[16].b,"B)Gururlanmak ");
strcpy(Sorular[16].c,"C)Huzunlenmek ");
strcpy(Sorular[16].d,"D)Sinirlenmek");
Sorular[16].crctans='b';

strcpy(Sorular[17].soru1," Hangisi bir tahil degildir?\n");
strcpy(Sorular[17].a,"A)Yulaf ");
strcpy(Sorular[17].b,"B)Pirinc ");
strcpy(Sorular[17].c,"C)Cavdar ");
strcpy(Sorular[17].d,"D)Mercimek ");
Sorular[17].crctans='d';

strcpy(Sorular[18].soru1," Birbirinin aynisi olan kuplerden bir kup elde etmek icin en az kac tanesi birlestirilmelidir?\n");
strcpy(Sorular[18].a,"A)2 ");
strcpy(Sorular[18].b,"B)4 ");
strcpy(Sorular[18].c,"C)6 ");
strcpy(Sorular[18].d,"D)8 ");
Sorular[18].crctans='b';

strcpy(Sorular[19].soru1," Hangisinin ikinci eli satilirken icerisinde sigara icilmedigi ozellikle belirtilir?\n");
strcpy(Sorular[19].a,"A)Arsa ");
strcpy(Sorular[19].b,"B)Tarla ");
strcpy(Sorular[19].c,"C)Motosiklet  ");
strcpy(Sorular[19].d,"D)Otomobil ");
Sorular[19].crctans='d';

strcpy(Sorular[20].soru1," Basit araclarla ozenilmeden yapilmis evler icin kullanylan ifade hangisidir?\n");
strcpy(Sorular[20].a,"A)Derme catma ");
strcpy(Sorular[20].b,"B)Saray yavrusu ");
strcpy(Sorular[20].c,"C)Sirca kosk ");
strcpy(Sorular[20].d,"D)Emme basma");
Sorular[20].crctans='a';

strcpy(Sorular[21].soru1," TDK'ya gore giysi dolabi anlamina gelen kelimenin dogru yazilisi hangisidir?\n");
strcpy(Sorular[21].a,"A)Gardurop ");
strcpy(Sorular[21].b,"B)Gardirop ");
strcpy(Sorular[21].c,"C)Gardrop ");
strcpy(Sorular[21].d,"D)Gardorop");
Sorular[21].crctans='b';

strcpy(Sorular[22].soru1," Hangisi Arapca,Turkce ve Farsca uc kelimenin birlesmesinden meydana gelir?\n");
strcpy(Sorular[22].a,"A)Topyekun ");
strcpy(Sorular[22].b,"B)Halbuki ");
strcpy(Sorular[22].c,"C)Cengaver ");
strcpy(Sorular[22].d,"D)Ikametgah");
Sorular[22].crctans='b';

strcpy(Sorular[23].soru1," Yipranan sac uclarini kestiren biri, bu durumu anlatmak icin hangi ifadeyi kullanir?\n");
strcpy(Sorular[23].a,"A)Kiriklarimi aldirdim ");
strcpy(Sorular[23].b,"B)Cikiklarimi taktirdim ");
strcpy(Sorular[23].c,"C)Sokuklerimi diktirdim ");
strcpy(Sorular[23].d,"D)Yuklerimi bosatlttim ");
Sorular[23].crctans='a';

strcpy(Sorular[24].soru1," Hangisi kafadan bacaklilardan biri degildir?\n");
strcpy(Sorular[24].a,"A)Murekkep baligi ");
strcpy(Sorular[24].b,"B)Kalamar ");
strcpy(Sorular[24].c,"C)Ahtapot ");
strcpy(Sorular[24].d,"D)Istiridye ");
Sorular[24].crctans='d';

strcpy(Sorular[25].soru1," Babayaro ve Babangida hangi ulkenin basarilar kazanan milli futbolcularidir?\n");
strcpy(Sorular[25].a,"A)Tunus ");
strcpy(Sorular[25].b,"B)Nijerya ");
strcpy(Sorular[25].c,"C)Fildisi Sahili ");
strcpy(Sorular[25].d,"D)Senegal ");
Sorular[25].crctans='b';

strcpy(Sorular[26].soru1," Dineliyorum diyen bir sivasli ne yapiyordur?\n");
strcpy(Sorular[26].a,"A)Ayakta duruyordur ");
strcpy(Sorular[26].b,"B)Yemek yapiyodur ");
strcpy(Sorular[26].c,"C)Uyuyordur ");
strcpy(Sorular[26].d,"D)Ava gidiyordur ");
Sorular[26].crctans='a';

strcpy(Sorular[27].soru1," Sehir ici yollarda bir hava hattindan elektrik akimi alarak calisan otobuse ne ad verilir ?\n");
strcpy(Sorular[27].a,"A)Troleybus ");
strcpy(Sorular[27].b,"B)Midibus ");
strcpy(Sorular[27].c,"C)Omnibus ");
strcpy(Sorular[27].d,"D)Metrobus ");
Sorular[27].crctans='a';

strcpy(Sorular[28].soru1," Sakir sakir hangisinin cikardigi sesi ifade eder?\n");
strcpy(Sorular[28].a,"A)Surekli yagan yagmurun ");
strcpy(Sorular[28].b,"B)Kisin esen ruzgarin ");
strcpy(Sorular[28].c,"C)Trafikteki otomobillerin ");
strcpy(Sorular[28].d,"D)Yuruyen insanlarin");
Sorular[8].crctans='a';

strcpy(Sorular[29].soru1," Hangi ucgenin hipotenusu olamaz?\n");
strcpy(Sorular[29].a,"A)Dik ucgen ");
strcpy(Sorular[29].b,"B)Ikizkenar ucgen ");
strcpy(Sorular[29].c,"C)Cesitkenar ucgen ");
strcpy(Sorular[29].d,"D)Eskenar ucgen ");
Sorular[29].crctans='d';

strcpy(Sorular[30].soru1," Juventus, Italyada hangi sehrin futbol takimidir?\n");
strcpy(Sorular[30].a,"A)Torino ");
strcpy(Sorular[30].b,"B)Milano ");
strcpy(Sorular[30].c,"C)Roma ");
strcpy(Sorular[30].d,"D)Verona ");
Sorular[30].crctans='a';

strcpy(Sorular[31].soru1," Hangisi heykeltiras Rodin'in eserlerinden biri degildir?\n");
strcpy(Sorular[31].a,"A)Dusunen adam ");
strcpy(Sorular[31].b,"B)Comelen kadin ");
strcpy(Sorular[31].c,"C)Yuruyen adam ");
strcpy(Sorular[31].d,"D)Uyuyan kadin ");
Sorular[31].crctans='d';

strcpy(Sorular[32].soru1," Hangisini soyleyen kisi, yedigi yemegi lezzetli bulmustur?\n");
strcpy(Sorular[32].a,"A)Yuregim agzima geldi ");
strcpy(Sorular[32].b,"B)Tadi damagimda kaldi ");
strcpy(Sorular[32].c,"C)Gozlerim yolda kaldi ");
strcpy(Sorular[32].d,"D)Dilim damagima yapisti ");
Sorular[32].crctans='b';

strcpy(Sorular[33].soru1," Birdenbire baslayan ve genellikle kisa suren siddetli yagmura ne ad verilir?\n");
strcpy(Sorular[33].a,"A)Tipi ");
strcpy(Sorular[33].b,"B)Dolu ");
strcpy(Sorular[33].c,"C)Kirc ");
strcpy(Sorular[33].d,"D)Saganak ");
Sorular[33].crctans='d';

strcpy(Sorular[34].soru1," Eski kusaklarin ister istemez anlaminda kullandiklari ifade hangisidir?\n");
strcpy(Sorular[34].a,"A)Muskulpesent ");
strcpy(Sorular[34].b,"B)Malumatfurus ");
strcpy(Sorular[34].c,"C)Carcanar");
strcpy(Sorular[34].d,"D)Belagatfurus");
Sorular[34].crctans='c';

strcpy(Sorular[35].soru1," Kullandigimiz miladi takvimde E ve M harfiyle baslayan toplam kac ay vardir?\n");
strcpy(Sorular[35].a,"A)3 ");
strcpy(Sorular[35].b,"B)6 ");
strcpy(Sorular[35].c,"C)4 ");
strcpy(Sorular[35].d,"D)7 ");
Sorular[35].crctans='c';

strcpy(Sorular[36].soru1," Bir atasozunde sirasiyla hangi ikisi icin uyur ve uyumaz denir?\n");
strcpy(Sorular[36].a,"A)Internet - Hacker ");
strcpy(Sorular[36].b,"B)Elektrik - Hirsiz ");
strcpy(Sorular[36].c,"C)Telefon - Dolandirici");
strcpy(Sorular[36].d,"D)Su - Dusman ");
Sorular[36].crctans='d';

strcpy(Sorular[37].soru1," Eskiden hangisini yapanlara bezzaz denirdi?\n");
strcpy(Sorular[37].a,"A)Yun kabartanlara ");
strcpy(Sorular[37].b,"B)Kumas alip satanlara ");
strcpy(Sorular[37].c,"C)Porselen isleyenlere ");
strcpy(Sorular[37].d,"D)Kitap kapagi süsleyenlere ");
Sorular[37].crctans='b';

strcpy(Sorular[38].soru1," Yunus Emre'nin Sevelim sevilelim sozunun de gectigi dizelerde hangi ifade yer almaz ?\n");
strcpy(Sorular[38].a,"A)Can kafeste durmaz ");
strcpy(Sorular[38].b,"B)Dunya kimseye kalmaz ");
strcpy(Sorular[38].c,"C)Isi kolay kilalim ");
strcpy(Sorular[38].d,"D)Gelin tanis olalim ");
Sorular[38].crctans='a';

strcpy(Sorular[39].soru1," Filmlerde kilitli cekmeceler genellikle hangisiyle acilir?\n");
strcpy(Sorular[39].a,"A)Gomlek dugmesi ");
strcpy(Sorular[39].b,"B)Yara bandi ");
strcpy(Sorular[39].c,"C)Tel toka ");
strcpy(Sorular[39].d,"D)Papyon kravat ");
Sorular[39].crctans='c';

strcpy(Sorular[40].soru1,"Simal,cenup,sark,garp diyen biri hangisini sayiyordur ?\n");
strcpy(Sorular[40].a,"A)Tarihi caglar ");
strcpy(Sorular[40].b,"B)Ana yonler ");
strcpy(Sorular[40].c,"C)Maddenin halleri ");
strcpy(Sorular[40].d,"D)Dogada bulunan elementler ");
Sorular[40].crctans='b';

strcpy(Sorular[41].soru1," Sulu,Uhura,Spock ve Scotty adli kisiler kimin mürettebatindandir?\n");
strcpy(Sorular[41].a,"A)Kaptan Jack Sparrow ");
strcpy(Sorular[41].b,"B)Kaptan Kanca ");
strcpy(Sorular[41].c,"C)Kaptan Amerika ");
strcpy(Sorular[41].d,"D)Kaptan Kirk ");
Sorular[41].crctans='d';

strcpy(Sorular[42].soru1," Hangisi bir kedi turudur ?\n");
strcpy(Sorular[42].a,"A)Karabas ");
strcpy(Sorular[42].b,"B)Karakacan ");
strcpy(Sorular[42].c,"C)Karakulak ");
strcpy(Sorular[42].d,"D)Karaca ");
Sorular[42].crctans='c';


strcpy(Sorular[43].soru1," Denzel Washington'in basrolunde oynadigi Malcolm X filminin yonetmeni kimdir?\n");
strcpy(Sorular[43].a,"A)Oliver Stone ");
strcpy(Sorular[43].b,"B)Woody Allen ");
strcpy(Sorular[43].c,"C)David Lynch ");
strcpy(Sorular[43].d,"D)Spike Lee ");
Sorular[43].crctans='d';

strcpy(Sorular[44].soru1," Osmanli Devleti zamaninda yasamis hangi isimde bir Osmanli sehzadesi olmamistir?\n");
strcpy(Sorular[44].a,"A)Kasim ");
strcpy(Sorular[44].b,"B)Yakup ");
strcpy(Sorular[44].c,"C)Kayi ");
strcpy(Sorular[44].d,"D)Oguz ");
Sorular[44].crctans='c';

strcpy(Sorular[45].soru1," Her gun mesainin sonunda Z raporu alan kisinin meslegi muhtemelen hangisidir?\n");
strcpy(Sorular[45].a,"A)Doktorluk ");
strcpy(Sorular[45].b,"B)Hemserilik ");
strcpy(Sorular[45].c,"C)Kasiyerlik ");
strcpy(Sorular[45].d,"D)Ogretmenlik ");
Sorular[45].crctans='c';

strcpy(Sorular[46].soru1," Hangi sporda tirpan adinda bir oyun vardir?\n");
strcpy(Sorular[46].a,"A)Gures ");
strcpy(Sorular[46].b,"B)Cirit ");
strcpy(Sorular[46].c,"C)Boks ");
strcpy(Sorular[46].d,"D)Halter ");
Sorular[46].crctans='a';

strcpy(Sorular[47].soru1," Varangiller'den olan hayvan hangisidir?\n");
strcpy(Sorular[47].a,"A)Baykus ");
strcpy(Sorular[47].b,"B)Komodo ejderi ");
strcpy(Sorular[47].c,"C)Yunus ");
strcpy(Sorular[47].d,"D)Orangutan ");
Sorular[47].crctans='b';

strcpy(Sorular[48].soru1," Anlik,kendiliginden gerceklesen olaylar icin kullanilan ifade hangisidir?\n");
strcpy(Sorular[48].a,"A)Amiyane ");
strcpy(Sorular[48].b,"B)Mukabil ");
strcpy(Sorular[48].c,"C)Didaktik ");
strcpy(Sorular[48].d,"D)Spontane ");
Sorular[48].crctans='d';

strcpy(Sorular[49].soru1," Hangisi Steven Spielberg'un yonetmenligini yaptigi bir film degildir?\n");
strcpy(Sorular[49].a,"A)Forrest Gump ");
strcpy(Sorular[49].b,"B)Jaws ");
strcpy(Sorular[49].c,"C)Yapay Zeka ");
strcpy(Sorular[49].d,"D)Schindler'in Listesi");
Sorular[49].crctans='a';

strcpy(Sorular[50].soru1," Gunumuzde Vikinglerin torunlari olarak bahsedilenler arasinda hangisi yoktur?\n");
strcpy(Sorular[50].a,"A)Norvecliler ");
strcpy(Sorular[50].b,"B)Isvecliler ");
strcpy(Sorular[50].c,"C)Danimarkalilar ");
strcpy(Sorular[50].d,"D)Slovaklar ");
Sorular[50].crctans='d';	 
	 
	 
	 menu:
	 
	 system("cls");
	 printf("\n\t *****************************************************\n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t       Bil Bilebilirsen Yarismasina Hosgeldiniz\n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t *****************************************************\n\n");
	
	 printf("\n\t -> Oyuna baslamak icin B tusuna basin. ");
     printf("\n\t -> Yardim menusune gecmek icin Y tusuna basin ");
     printf("\n\t -> Oyundan cikmak icin C tusuna basin ");
	
	
 	secim=toupper(getch());
	
	if (secim=='B')
	{
		delay(500);
		system("cls");
		bilgi();
		delay(500);
		system("cls");
	 
	printf("\n\t *****************************************************\n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t                   Bil Bilebilirsen \n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t *****************************************************\n\n");
	
	 printf("\n\t  Oyunumuza hos geldin ");
	 printf("%s",yarismaci.isim);
	 printf(" %s",yarismaci.soyisim);
	printf("\n\n Oyunumuz 10 sorudan olusmaktadir ve butun sorular rastgele bir sekilde soru havuzundan ekrana gelmektedir.");
	printf("\n\t 1 soru bildiginde 500TL kazanacaksin.");
	printf("\n\t 2 soru bildiginde 1.000TL kazanacaksin.");
	printf("\n\t 3 soru bildiginde 2.000TL kazanacaksin.");
	printf("\n\t 4 soru bildiginde 5.000TL kazanacaksin.");
	printf("\n\t 5 soru bildiginde 7.500TL kazanacaksin.");
	printf("\n\t 6 soru bildiginde 15.000TL kazanacaksin.");
	printf("\n\t 7 soru bildiginde 30.000TL kazanacaksin.");
	printf("\n\t 8 soru bildiginde 50.000TL kazanacaksin.");
	printf("\n\t 9 soru bildiginde 100.000TL kazanacaksin.");
	printf("\n\t Hepsini bildiginde 500.000TL kazanacaksin.");
	printf("\n\n\t Hazirsan baslamak icin R tusuna bas.");
	printf("\n\t Menuye donmek icin herhangi bir tusa bas.");
	
	if (toupper(getch())=='R')
		{
		    goto basla;
        }
	else
		{
        goto menu;
       system("cls");
       }
		
	basla:
		for(i=0;i<10;i++)
	{
		system("cls");
		sorular(Sorular);	
		delay(1250);	
	}
	kazanilanpara();
	goto devam;
	}
	
	
	else if (secim=='Y')
	{
	delay(500);
	system("cls");
		printf("\n\t\t\t\t  Oyunumuza hos geldin %s %s ",yarismaci.isim,yarismaci.soyisim);
	printf("\n\n Oyunumuz 10 sorudan olusmaktadir ve butun sorular rastgele bir sekilde soru havuzundan ekrana gelmektedir.");
	printf("\n\t 1 soruyu bildiginde 500TL kazanacaksin.");
	printf("\n\t 2 soruyu bildiginde 1.000TL kazanacaksin.");
	printf("\n\t 3 soruyu bildiginde 2.000TL kazanacaksin.");
	printf("\n\t 4 soruyu bildiginde 5.000TL kazanacaksin.");
	printf("\n\t 5 soruyu bildiginde 7.500TL kazanacaksin.");
	printf("\n\t 6 soruyu bildiginde 15.000TL kazanacaksin.");
	printf("\n\t 7 soruyu bildiginde 30.000TL kazanacaksin.");
	printf("\n\t 8 soruyu bildiginde 50.000TL kazanacaksin.");
	printf("\n\t 9 soruyu bildiginde 100.000TL kazanacaksin.");
	printf("\n\t Hepsini bildiginde 500.000TL kazanacaksin.");
	printf("Menuye donmek icin herhangi bir tusa basin.");
	getch ();
	goto menu;
	}
	
	else if (secim=='C')	
	exit(0);
	
	devam:
		printf("\n\nKatildiginiz icin tesekkur ederiz.Devam etmek istiyorsaniz lütfen D tusuna basin.");
		printf("\nCikmak istiyorsaniz herhangi bir tusa basin.");
		
		if (toupper(getch())=='D')
		{
		    ctrl=0;
		    ctry=0;
			goto basla;
        }
	else
		exit(0);
	
return 0;
}
