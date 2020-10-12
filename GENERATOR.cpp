#include <iostream>  //POWA¯NY PROGRAM 
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;
void dodawanieodejmowanie();
void dzialania();
void rownania();
void ulamki();
void menu();
void ulamkizodp();
void ulamkidzialania();
void funkcjaliniowa();
void pierwiastki();
void trojkaty();
void test();
void wzorysm2();
void potegi();
void funkcjakwadratowa(); 
void logarytmy();
void matura();

int main(){
	int co;
	fstream plik;
	plik.open("aa.doc",ios::out);
	
		do{
		menu();
		cin>>co;
		system("cls");
		switch(co) {
		case 1:dodawanieodejmowanie();	break;
		case 2:dzialania();break;
		case 3:pierwiastki(); break;
		case 4:ulamkizodp();break;
		case 5:ulamkidzialania(); break;
		case 6:funkcjaliniowa();break;
		case 7:rownania();	break;
		case 8:test(); break;
		case 9:trojkaty(); break;
		case 10:wzorysm2(); break;
		case 11: {
				cout<<"jestes w trygonometri";
				menu();
		
				}
		case 12:potegi(); break;
		case 13:funkcjakwadratowa(); break;
		case 14:logarytmy(); break;
		case 15:matura(); break;
		default: 0;
		};
	}
	while (co!=0);
plik.close();
return 0;
};

void menu(){
	cout<<"Wybierz co chcesz generowac:"<<endl;
	cout<<"1.dodawanie i odejmowanie"<<endl;
	cout<<"2.dzialania"<<endl;
	cout<<"3.pierwiastki"<<endl;
	cout<<"4 ulamki z odpowiedziami(pelne strony)"<<endl;
	cout<<"5 ulamki mnozenie dzielenie(pelne strony)"<<endl;
	cout<<"6.funkcja liniowa + zadania z parametrem	(pelna strona)"<<endl;
	cout<<"7.rownania"<<endl;
	cout<<"8.test"<<endl;
	cout<<"9.trojkaty"<<endl;
	cout<<"10.WZORY SKRÓCONEGO (do 2)"<<endl;
	cout<<"11.trygonometria"<<endl;
	cout<<"12.potegi  (pol strony)"<<endl;
	cout<<"13.funkcja kwadratowa  (pol strony)"<<endl;
	cout<<"14. logarytmy (pol storny)"<<endl;
	cout<<"15. matura test "<<endl;
		cout<<"0. wyjdz i drukuj"<<endl;
}

/*

if(rand()%4>1) plik<<"-";else plik<<"+";			//znak + lub - 
	

	for (int j=0;j<ile_liczb;j++){					//znak + lub - i = na koñcu
		do {										//
			liczba=rand()%7+1;}						//wielkoœæ liczby
		while((liczba==0));							//
	plik<<"sqrt"<<liczba*liczba*2;					//wpisz dzia³anie
		if(j<ile_liczb-1){							
			if(rand()%10>5)							
				plik<<"-";else						
				plik<<"+";}							
					else plik<<"=";}				
	plik<<endl;										
	
	
	if(     <0)cout<<"("<<    <<")";				//ujemne w nawaisach
			else
				cout<<     ;	
				
	if(	==1) 				cout<<"	"<<	;			//dla jedynek nie wyœwietla ich 
		else if ( ==-1) cout<<"-	"<<	;
				
	do(  =rand()%20-10);							//wartoœci ujemne i dodatnie <-9,-1>u<1,9>
			while(( <2)&&(  >-2));			
				
				
*/




void dodawanieodejmowanie(){ // 2i przyk³adów ,  zmieniasz wartoœæ i ¿eby zmieniæ iloœæ przyk³adów
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_przykladow; //ilosc przykladow generowanych

cout<<"dodawanie i odejmowanie, ile przykladow? "<<endl;
cin>>ile_przykladow;
int ile_liczb=5;
int ktora[ile_liczb];
int wynik[ile_przykladow];
	for (int i=0;i<ile_przykladow;i++){  
		wynik[i]=0;
		for (int j=0; j<ile_liczb;j++){
			
			do(ktora[j]=rand()%20-10);
			while((ktora[j]<2)&&(ktora[j]>-2));
		
				if(ktora[j]<0)plik<<"("<<ktora[j]<<")";
				else
					plik<<ktora[j];
				
		wynik[i]=wynik[i]+ktora[j];
		
				if(j<ile_liczb-1)
					plik<<"+";
				else
					plik<<"=";
		}
		plik<<endl;
		
	}
	if (ile_przykladow>1){
		for(int i=0;i<ile_przykladow;i++){ 
			plik<<wynik[i]<<" ";
		}
	}
plik<<endl<<endl;
};

void dzialania(){ // zadania na liczenie
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_przykladow; 
cout<<"dzialania, ile przykladow?"<<endl;
cin>>ile_przykladow ;								//ilosc przykladow
int ile_liczb = 5;
int liczba;
int znak;
for(int i=0;i<ile_przykladow;i++){				// petla generujaca koeljne przyklady	
	for (int j=0;j<ile_liczb;j++){  				
			do {liczba=rand()%12-3;}			// generowanie liczb róznych od 0
			while(liczba==0);
			if( liczba    <0)plik<<"("<< liczba  <<")";			//ujemne w nawaisach
			else
				plik<< liczba    ;

				if(j<ile_liczb-1){							//generowanie dzia³añ
				if(rand()%10>8) plik<<"*";else
				if(rand()%10>5) plik<<"-";else
				if(rand()%10>2) plik<<":";else
					plik<<"+";}
			else plik<<"=";}
plik<<endl;
}
plik<<endl;
}

void pierwiastki(){ // zadania na pierwiastki
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_przykladow; 
cout<<"pierwiastki, ile zestawow przykladow?"<<endl;
cin>>ile_przykladow;
int ile_liczb=5;
int liczba;
for(int i=0;i<ile_przykladow;i++){	

	for (int j=0;j<ile_liczb;j++){					//generowanie dzia³añ
		do {										//generowanie dzia³añ
			liczba=rand()%7+1;}						//generowanie dzia³añ
		while((liczba==0));							//generowanie dzia³añ
	plik<<"sqrt"<<liczba*liczba*2;					//wpisz dzia³anie
		if(j<ile_liczb-1){							//generowanie dzia³añ
			if(rand()%10>5)							//generowanie dzia³añ
				plik<<"-";else						//generowanie dzia³añ
				plik<<"+";}							//generowanie dzia³añ
					else plik<<"=";}				//generowanie dzia³añ
	plik<<endl;										//generowanie dzia³añ
	
	for (int j=0;j<ile_liczb;j++){					//generowanie dzia³añ
		do {										//generowanie dzia³añ
			liczba=rand()%7+1;}						//generowanie dzia³añ
		while((liczba==0));							//generowanie dzia³añ
	plik<<"sqrt"<<liczba*liczba*3;					//wpisz dzia³anie
		if(j<ile_liczb-1){							//generowanie dzia³añ
			if(rand()%10>5)							//generowanie dzia³añ
				plik<<"-";else						//generowanie dzia³añ
				plik<<"+";}							//generowanie dzia³añ
					else plik<<"=";}				//generowanie dzia³añ
	plik<<endl;										//generowanie dzia³añ
	
	
	 	for (int j=0;j<ile_liczb;j++){				//generowanie dzia³añ
		do {										//generowanie dzia³añ
			liczba=rand()%7+1;}						//generowanie dzia³añ
		while((liczba==0));							//generowanie dzia³añ
	plik<<"sqrt"<<liczba*liczba*5;					//wpisz dzia³anie
		if(j<ile_liczb-1){							//generowanie dzia³añ
			if(rand()%10>5)							//generowanie dzia³añ
				plik<<"-";else						//generowanie dzia³añ
				plik<<"+";}							//generowanie dzia³añ
					else plik<<"=";}				//generowanie dzia³añ
	plik<<endl;										//generowanie dzia³añ
	
		for (int j=0;j<ile_liczb;j++){				// 
			do {										//generowanie dzia³añ
				liczba=rand()%7+1;}						//generowanie dzia³añ
			while((liczba==0));							//generowanie dzia³añ
	plik<<"sqrt"<<liczba*liczba*(rand()%2+2);	
				
		if(j<ile_liczb-1){							//generowanie dzia³añ			
				if(rand()%10>4) plik<<"*";else
				if(rand()%10>2) plik<<"-";
				else			plik<<"+";
		}	
			else plik<<"=";}
	plik<<endl<<endl;	
}
plik<<endl;
}

void ulamkizodp(){ // generowanie dobrych u³amków
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_ulamkow = 3; //ilosc ulamków do ustawienia
int ile_przykladow; //ilosc przykladow generowanych
cout<<"ulamki, ile stron?"<<endl;
cin>>ile_przykladow;
ile_przykladow=ile_przykladow*14;
	if(ile_przykladow==0){	
		cout<<"ile przykladow?"<<endl;
		cin>>ile_przykladow;}
		
int licznik=0;
int mianownik=0;
int liczniki[ile_ulamkow];
int mianowniki[ile_ulamkow];
int ulamek[2];
ulamek[0]=0;
ulamek[1]=0;
	for (int i=0;i<ile_przykladow;i++){  							// petla generujaca koeljne przyklady			
		for(int j=0;j<ile_ulamkow;j++){ 							// generowanie liczników i mianowników do u³amków
			do {
				licznik=rand()%14-5;
				mianownik=rand()%4+2;
			}
			while((licznik==mianownik)||(licznik==0)||(licznik==-1*mianownik));				// mianownik nie moze byc taki sam jak licznik a lciznik nie moze byc 0
				liczniki[j]=licznik;
				mianowniki[j]=mianownik;
					if(liczniki[j]>0)								// wypisywanie licznikow
						plik<<liczniki[j]<<"   ";
					else
						plik<<liczniki[j]<<"  ";
						
		}

		if(mianowniki[0]==mianowniki[1]) mianowniki[1]=mianowniki[1]+1;
		if(mianowniki[1]==mianowniki[2]) mianowniki[2]=mianowniki[2]+1;
if(ile_przykladow>1){
ulamek[0]=liczniki[0]*mianowniki[1]*mianowniki[2] +liczniki[1]*mianowniki[2]*mianowniki[0]	+liczniki[2]*mianowniki[1]*mianowniki[0];
ulamek[1]=mianowniki[0]*mianowniki[1]*mianowniki[2];
		while((ulamek[0]%2)==0&&(ulamek[1]%2==0)){
	
		ulamek[0]=ulamek[0]/2;
		ulamek[1]=ulamek[1]/2;}
				while((ulamek[0]%3)==0&&(ulamek[1]%3==0)){
	
		ulamek[0]=ulamek[0]/3;
		ulamek[1]=ulamek[1]/3;}
				while((ulamek[0]%5)==0&&(ulamek[1]%5==0)){
	
		ulamek[0]=ulamek[0]/5;
		ulamek[1]=ulamek[1]/5;}
				while((ulamek[0]%7)==0&&(ulamek[1]%7==0)){
	
		ulamek[0]=ulamek[0]/7;
		ulamek[1]=ulamek[1]/7;}
}

plik<<"										"<<ulamek[0];//plik<<"						-";
	plik<<endl<<"- + - + - =";
	plik<<"										--"; 				 //kreska ulamkowa wyniku
	plik<<endl;														//wypisywanie kresek u³amkowych
			for(int j=0;j<ile_ulamkow;j++){ 						//wypisywanie mianownikow
				plik<<mianowniki[j]<<"   ";}
	plik<<"										"<<ulamek[1];
	plik<<endl;
	plik<<endl;	
	};
	
}

void funkcjaliniowa(){
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
int ile_przykladow; //ilosc przykladow generowanych
cout<<"funkcja liniowa, ile polstron"<<endl;
cin>>ile_przykladow;
int a1;
int a2;
int x1;
int y1;
int x2;
int y2;
	for(int i=0;i<ile_przykladow;i++){
			do {a1=rand()%7-4;}			// generowanie a ró¿mych od 0
				while(a1==0);
		plik<<"1. Dana jest funkcja liniowa o wzorze y=";
		if(a1==1)plik<<"x"; else if (a1 ==-1) plik<<"-x"; else plik<<a1<<"x"; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%8+1<<endl;
		plik<<"Wyznacz równanie prostej równoleg³ej/prostopad³ej do niej, przechodz¹cej przez punkt A("<<rand()%8-3<<","<<rand()%8-3<<")"<<endl;
		plik<<"a)Narysuj j¹ w uk³adzie wspó³rzêdnych"<<endl;
		plik<<"b)Oblicz jej miejsce zerowe"<<endl;
		plik<<"c)Okreœl jej monotonicznoœæ"<<endl;
		plik<<"d)Podaj jej punkt przeciêcia z osi¹ OY"<<endl;
		plik<<endl;
	
	
			do {a2=rand()%7-3;}			// generowanie a ró¿mych od 0
				while((a2==0)||(a1==a2));
		plik<<"2. Dla jakiego m funkcja f(x)=";
		plik<<"("<<a2<<"m"; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%7+1<<")"<<"x";if(rand()%4>1) plik<<"-";else plik<<"+";plik<<"m";if(rand()%4>1) plik<<"-";else plik<<"+";plik<<rand()%10+1;plik<<endl;	
		plik<<"a) Przechodzi przez punkt A("<<rand()%8-3<<","<<rand()%8-3<<")"<<endl;
		plik<<"b) y(4)=2"<<endl;
		plik<<"c) Ma miejsce zerowe w 5"<<endl;
		plik<<"d) Przyjmuje wartoœæ -2 dla argumentu równego 3"<<endl;
		plik<<"e) Przecina oœ Y w 1"<<endl;	
		plik<<"f) Jest prostopad³a do prostej y=";
		if(a2==1)plik<<"x"; else if (a2 ==-1) plik<<"-x"; else plik<<a2<<"x"; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%10+1<<endl<<endl;	
		
			do{
				x1=rand()%12-6;
				x2=rand()%12-6;
				y1=rand()%12-6;
				y2=rand()%12-6;
			} while((y1==y2)||(x1==x2));
			
		plik<<"3. Wyznacz prost¹ przechodz¹c¹ przez punkty A i B"<<endl;
		plik<<"A("<<x1<<","<<y1<<")"<<endl;
		plik<<"B("<<x2<<","<<y2<<")"<<endl;
		plik<<"Podaj iloczyn oraz sumê, wspó³czynnika kierunkowego i wyrazu wolnego tej prostej (a i b)"<<endl<<endl;
		
			do{
				a1=rand()%5+2;
				a2=rand()%7-3;
				x1=rand()%12-6;
				y1=rand()%12-6;
			}while((a1==0)||(a2==0)||(a1==a2));
		plik<<"4. Punkt A("<<x1<<","<<y1<<")"<<" nale¿y do funkcji okreœlonej wzorem f(x)="; 
		if(rand()%4>1) plik<<"-"<<a1<<"x";else plik<<a1<<"x"; plik<<"+b wynika st¹d, ¿e b=?"<<endl<<endl;
	
		plik<<"5. Miejsce zerowe funkcji okreœlonej wzorem f(x)="<<rand()%3+2<<"(x";if(rand()%4>1) plik<<"-";else plik<<"+";plik <<rand()%3+2;
		plik<<")";if(rand()%4>1) plik<<"-";else plik<<"+";plik<<rand()%6+2<<"sqrt"<<rand()%2+2<<"jest liczba"<<endl<<endl<<endl<<endl;
	}
plik<<endl;
}

void rownania(){// 2i przyk³adów ,  zmieniasz wartoœæ i ¿eby zmieniæ iloœæ przyk³adów
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_przykladow; //ilosc przykladow generowanych
cout<<"rownania, ile przykladow? bedzie 2 razy wiecej"<<endl;
cin>>ile_przykladow;
	for (int i=0;i<ile_przykladow;i++){
		plik<<rand()%4+2<<"(-" << rand()%3+1 <<"x+" << rand()%10+1 <<")="<<rand()%5+2<<"(x-" << rand()%8+1<<")"<<"-x"<<endl;
		plik<<"-"<<rand()%4+2<<"(-" << rand()%3+1 <<"x-" << rand()%10+1 <<")=" << rand()%8+1 <<"x-" << rand()%8+1<<endl;
	};
	plik<<endl;
}

void trojkaty(){
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_przykladow;
int dlugosci[2];
int los;
cout<<"trojkaty pitagorasa, ile  przykladow?"<<endl;
cin>>ile_przykladow;

for(int i=0; i<ile_przykladow;i++){
los=rand()%7;
do{
	dlugosci[0]=rand()%8+2;
	dlugosci[1]=rand()%8+2;
}
while((dlugosci[0]==dlugosci[1])||(dlugosci[1]<dlugosci[0]));

	if(los==0)	{
			plik<<"    /|"<<endl;
			plik<<"   / |"<<endl;
			plik<<"  /  |"<<dlugosci[1]<<endl;
			plik<<" /   | "<<endl;
			plik<<"/____|  "<<endl;
			plik<<"  "<<dlugosci[0]<<endl<<endl;
		}
		
	else if(los==1)	{
			plik<<"    /|"<<endl;
			plik<<"   / |"<<endl;
			plik<<dlugosci[1]<<" /  |"<<dlugosci[0]<<endl;
			plik<<" /   |"<<endl;
			plik<<"/____|"<<endl;
			plik<<"  x"<<endl<<endl;
		}
		
	
	else if(los==2){
			plik<<"    /|"<<endl;
			plik<<"   / |"<<endl;
			plik<<dlugosci[1]<<" /  |"<<endl;
			plik<<" /   | "<<endl;
			plik<<"/____|  "<<endl;
			plik<<"  "<<dlugosci[0]<<endl<<endl;
	
		}
		
	 	else {	
			plik<<"    /|"<<endl;
			plik<<"   / |"<<endl;
			plik<<"  /  |"<<dlugosci[1]<<endl;
			plik<<" /   | "<<endl;
			plik<<"/____|  "<<endl;
			plik<<"  sqrt"<<dlugosci[0]*dlugosci[0]*2<<endl<<endl;
				
		}
	 
}
plik<<endl<<endl;

}

void wzorysm2() {
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=2; //ilosc przykladow generowanych
	int a=0;
	
	
	for(int j=0; j<ile_przykladow; j++)	{	
			for(int i=0; i<27;i++){
				do(a=rand()%10-5);							//wartoœci ujemne i dodatnie <-9,-1>u<1,9>
				while(a==0);
				
				plik<<" ";
					if(a==1)plik<<" x";						//dla jedynek x lub -x 
						else if (a==-1) plik<<"-x";
								else plik<<a<<"x";	
				if(rand()%4>1) plik<<"-";else plik<<"+";			//znak + lub - 
				plik<<rand()%9+1<<endl;
			}
		plik<<endl;
	}
}

void test (){
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=1; //ilosc przykladow generowanych
	int ktora[5];
	int liczniki[3];
	int mianowniki[3];
	int licznik=0;
	int mianownik=0;
	int dlugosci[2];
	int liczba=0;
		
	// dodawanie odejmwoanie
		for (int j=0; j<5;j++){
				
				do(ktora[j]=rand()%20-10);
				while((ktora[j]<2)&&(ktora[j]>-2));
			
					if(ktora[j]<0)plik<<"("<<ktora[j]<<")";
					else plik<<ktora[j];		
					if(j<4) plik<<"+";
					else plik<<"=";
			}
		plik<<endl<<endl;
	//dzialania
		for (int j=0;j<5;j++){  				
					do {liczba=rand()%12-3;}			// generowanie liczb róznych od 0
					while(liczba==0);
					if( liczba    <0)plik<<"("<< liczba  <<")";			//ujemne w nawaisach
					else
						plik<< liczba    ;
		
						if(j<4){							//generowanie dzia³añ
						if(rand()%10>7) plik<<"*";else
						if(rand()%10>5) plik<<"-";else
						if(rand()%10>1) plik<<":";else
							plik<<"+";}
					else plik<<"=";}
		plik<<endl<<endl;
	//ulamki	
		for(int j=0;j<3;j++){ 															// generowanie liczników i mianowników do u³amków
				do {
					licznik=rand()%14-5;
					mianownik=rand()%4+2;
				}
				while((licznik==mianownik)||(licznik==0)||(licznik==-1*mianownik));		// mianownik nie moze byc taki sam jak licznik a lciznik nie moze byc 0
					liczniki[j]=licznik;
					mianowniki[j]=mianownik;
						if(liczniki[j]>0)												// wypisywanie licznikow
							plik<<liczniki[j]<<"   ";
						else
							plik<<liczniki[j]<<"  ";
							
			}
			
			plik<<"								";
		plik<<endl<<"- : - - - =";
		plik<<endl;											//wypisywanie kresek u³amkowych
				for(int j=0;j<3;j++){ 						//wypisywanie mianownikow
					plik<<mianowniki[j]<<"   ";}
		plik<<endl;
		plik<<endl;	
		;
	//równanie
			plik<<rand()%4+2<<"(-" << rand()%3+1 <<"x+" << rand()%10+1 <<")="<<rand()%5+2<<"(x-" << rand()%8+1<<")"<<"-x"<<endl<<endl<<endl<<endl<<endl;
			
	//trójkat
		do{
			dlugosci[0]=rand()%8+2;
			dlugosci[1]=rand()%8+2;
			}
		while((dlugosci[0]==dlugosci[1])||(dlugosci[1]<dlugosci[0]));
		
				plik<<"    /|"<<endl;
				plik<<"   / |"<<endl;
				plik<<"  /  |"<<dlugosci[1]<<endl;
				plik<<" /   |"<<endl;
				plik<<"/____|"<<endl;
				plik<<"  sqrt"<<dlugosci[0]*dlugosci[0]*2;
	
	//koniec
	plik<<endl<<endl<<endl<<"-------------------------------------"<<endl;



}

void ulamkidzialania(){
fstream plik;
plik.open("aa.doc",ios::out|ios::app);
srand(time(NULL));
int ile_ulamkow = 4; //ilosc ulamków do ustawienia
int ile_przykladow; //ilosc przykladow generowanych
cout<<"ulamki dzialania , ile stron?"<<endl;
cin>>ile_przykladow;
ile_przykladow=ile_przykladow*14;
	if(ile_przykladow==0){	
		cout<<"ile przykladow?"<<endl;
		cin>>ile_przykladow;}
		
int licznik=0;
int mianownik=0;
int liczniki[ile_ulamkow];
int mianowniki[ile_ulamkow];

	for (int i=0;i<ile_przykladow;i++){  							// petla generujaca koeljne przyklady			
		for(int j=0;j<ile_ulamkow;j++){ 							// generowanie liczników i mianowników do u³amków
			do {
				licznik=rand()%14-6;
				mianownik=rand()%4+2;
			}
			while((licznik==mianownik)||(licznik==0)||(licznik==-1*mianownik));	// mianownik nie moze byc taki sam jak licznik a lciznik nie moze byc 0
				liczniki[j]=licznik;
				mianowniki[j]=mianownik;
					if(liczniki[j]>0)								// wypisywanie licznikow
						plik<<liczniki[j]<<"   ";
					else
						plik<<liczniki[j]<<"  ";				
		}



	plik<<endl<<"-";
	
		for(int i=0; i<ile_ulamkow-1;i++){						//wypisywanie kresek ulmakowych i znakow
			if(rand()%10>8) plik<<" * ";else
				if(rand()%10>5) plik<<" - ";else
				if(rand()%10>2) plik<<" : ";else
				plik<<" + ";
					plik<<"-";	
		}
	plik<<" ="<<endl;		
													
			for(int j=0;j<ile_ulamkow;j++){ 						//wypisywanie mianownikow
				plik<<mianowniki[j]<<"   ";}
	plik<<endl;
	plik<<endl;	
	};	
	
}

void potegi(){
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=4; //ilosc przykladow generowanych
	int wykladniki[4];
	int podstawa = 2;
	
	for (int i=0; i<ile_przykladow; i++){			//zwykle dzia³ania	
		podstawa=rand()%5+2;						// podstawa	
			for(int j=0; j<4;j++){
				do(wykladniki[j]=rand()%10-5);		 //wartosci wykladnikow
				while(wykladniki[j]==0);}
			for(int j=0; j<4;j++){						//znaki i podstawy
				if(j<3){if(rand()%4>1) plik<<podstawa<<"do"<<wykladniki[j]<<" * ";else plik<<podstawa<<"do"<<wykladniki[j]<<" : ";}else plik<<podstawa<<"do"<<wykladniki[j]<<" = ";
				}
		plik<<endl<<endl;
	
	}
	
	for (int i=0; i<2; i++){	
	podstawa=rand()%5+4;						// podstawa
			for(int j=0; j<4;j++){
				do(wykladniki[j]=rand()%10-5);		 //wartosci wykladnikow
				while(wykladniki[j]==0);}
				
			for(int j=0; j<4;j++){						//wypisanie 
				if(j<3){if(rand()%4>1) plik<<podstawa<<"do"<<wykladniki[j]<<" * ";
				else {if(wykladniki[j]>0) plik<<podstawa; else plik<<podstawa*podstawa; plik<<"do"<<wykladniki[j]<<" : ";}}
				else plik<<podstawa<<"do"<<wykladniki[j];
				}
				
		plik<<endl<<"-------------------  ="<<endl;
			for(int j=0; j<4;j++){
				do(wykladniki[j]=rand()%10-5);		 //wartosci wykladnikow
				while(wykladniki[j]==0);}
				
			for(int j=0; j<4;j++){						//wypisanie 			
				if(j<3){if(rand()%4>1)	{if(wykladniki[j]>0) plik<<podstawa; else plik<<podstawa*podstawa; plik<<"do"<<wykladniki[j]<<" * ";}
				else plik<<podstawa<<"do"<<wykladniki[j]<<" : ";}
				else plik<<podstawa<<"do"<<wykladniki[j];
				}
				
	plik<<endl<<endl;
}
				
				}

void funkcjakwadratowa(){
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=15; //ilosc przykladow generowanych	
	int a;
	int b;
	int c;
	int delta;
	int co;
	cout<<"1. rowniania, 2. nierownosci"<<endl;
	cin>>co;
	
	
	
	for(int i=0; i<ile_przykladow;i++){
		do{ 
		a=rand()%18-9;
		b=rand()%20-10;
		c=rand()%20-10;
		delta=b*b-4*a*c;
		}							//wartoœci ujemne i dodatnie <-9,-1>u<1,9>
			while(a==0||(delta!=1&&delta!=4&&delta!=9&&delta!=16&&delta!=25&&delta!=49));	
//plik<<a<<"x^2 + "<<b<<"x +"<<c<<"="<<endl;	

		
	if(a>0)
		if(a==1) plik<<"  xdo2 ";
		else 	plik<<" "<<a<<"xdo2 "	;			//dla jedynek nie wyœwietla ich 
	if(a<0)
		if(a==-1) 	plik<<" -xdo2 ";
		else		plik<<a<<"xdo2 "	;
		
	if(b>0)
		if(b==1) plik<<"+x  ";
		else 	plik<<"+"<<b<<"x "	;			//dla jedynek nie wyœwietla ich 
	if(b<0)
		if(b==-1) 	plik<<"-x  ";
		else		plik<<b<<"x "	;
	
	if(c>0) 			plik<<"+"<<c;	
	if(c<0) 			plik<<c;		//dla jedynek nie wyœwietla ich 
	
if (co==1){ plik<<"= 0";}
else {	a=rand()%4+1;
	if(a==1) plik<<" > 0";		
	if(a==2) plik<<" < 0";	
	if(a==3) plik<<" <rowne 0";	
	if(a==4) plik<<" >rowne 0";	}
plik<<endl;
}
}

void logarytmy(){
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=20; //ilosc przykladow generowanych	
	int a;
	int b;
	int potega;
	double podstawa;
	

for(int i=0; i<ile_przykladow;i++){
	podstawa=rand()%6+2;
	potega=rand()%4+1;
	a=rand()%15;	
		for(int k=2; k<8; k++){ //k to maxymalna podstawa
			if(podstawa==k)	{	
					plik<<"loga";if(rand()%4>1) plik<<"sqrt";else plik<<"sqrt3s";plik<<podstawa<<" ";	//wypisywanie logarytmu i podstawy
						for(int j=0; j<potega; j++){
						podstawa=podstawa*k	;}															//robienie jakieœ tam potêgi tej liczby
							if(a>10) plik<<"sqrt";else if (a>4)plik<<"sqrt3s"; plik<<podstawa<<"=";		//wypisywanie liczby logarytmowanej
			}	
	
	
		}

	podstawa=1;
	plik<<endl;
}
}

void matura(){
	fstream plik;
	plik.open("aa.doc",ios::out|ios::app);
	srand(time(NULL));
	int ile_przykladow=20; //ilosc przykladow generowanych	
	int a;
	int b;
	int c;
	int delta;
	int potega;
	int wykladniki[4];
	int podstawa = 2;
	int liczba=0;
	
	
//1. dzialania na potegach	
		podstawa=rand()%5+2;						// potêgi
			for(int j=0; j<4;j++){
				do(wykladniki[j]=rand()%10-5);		 //wartosci wykladnikow
				while(wykladniki[j]==0);} plik<<"1.";
			for(int j=0; j<4;j++){						//
				if(j<3){if(rand()%4>1) plik<<podstawa<<"do"<<wykladniki[j]<<" * ";else plik<<podstawa<<"do"<<wykladniki[j]<<" : ";}else plik<<podstawa*podstawa<<"do"<<wykladniki[j]<<" = ";
				}
		plik<<endl<<endl;
		
//2. dzialania na logarytmach		
			podstawa=rand()%6+2;
			potega=rand()%4+1;
			a=rand()%15; plik<<"2.";
				for(int k=2; k<8; k++){ //k to maxymalna podstawa
					if(podstawa==k)	{	
							plik<<"loga";if(rand()%4>1) plik<<"sqrt";else plik<<"sqrt3s";plik<<podstawa<<" ";	//wypisywanie logarytmu i podstawy
								for(int j=0; j<potega; j++){
								podstawa=podstawa*k	;}															//robienie jakieœ tam potêgi tej liczby
									if(a>10) plik<<"sqrt";else if (a>4)plik<<"sqrt3s"; plik<<podstawa<<"=";		//wypisywanie liczby logarytmowanej
					}	
			
			
				}	//wypisywanie liczby logarytmowanej
		plik<<endl<<endl;
/*3. dzia³ania na pierwiastakch	*/ plik<<"3.";	
		for (int j=0;j<4;j++){				//
			do {										//generowanie dzia³añ
				liczba=rand()%7+1;}						//generowanie dzia³añ
			while((liczba==0));							//generowanie dzia³añ
	plik<<"sqrt"<<liczba*liczba*(rand()%2+2);				
		if(j<4-1){							//generowanie dzia³añ			
				if(rand()%10>4) plik<<"*";else
				if(rand()%10>2) plik<<"-";
				else			plik<<"+";
		}	
			else plik<<"=";}
		plik<<endl<<endl;		
/*4. usuwanie niewymeirnosci */ 
	plik<<"  ";if(rand()%4>1) plik<<"-"<<rand()%8+2 ;else plik<<rand()%8+2; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%8+2<<"sqrt"<<rand()%2+2<<endl;
	plik<<"4."<<"------ = "<<endl;
	plik<<"  ";if(rand()%4>1) plik<<"-"<<rand()%8+2<<"sqrt"<<rand()%2+2; else plik<<rand()%8+2<<"sqrt"<<rand()%2+2; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%8+2;
		plik<<endl<<endl;
/*5. procenty*/	plik<<"5.";
	a=rand()%5;
	if(a==0) plik<<"Cena towaru po obni¿ce o "<<(rand()%5+1)*5<<"% wynosi "<<(rand()%15+3)*15<<"z³. Cena przed rabatem to ?"<<endl<<endl; else	
	if(a==1) plik<<"Cena towaru po podwy¿ce o "<<(rand()%3+1)*20<<"% wynosi "<<(rand()%11+3)*336<<"z³. Cena przed podwy¿k¹ to ?"<<endl<<endl;else		
	if(a==2) plik<<"Cenê towaru zmniejszono o "<<(rand()%3+1)*25<<"%. O ile % trzeba zwiêkszyæ cenê aby wróciæ do ceny pocz¹tkowej?"<<endl<<endl;else
	if(a==3) plik<<"Towar kosztuje "<< (rand()%15+3)*30 <<" jego cena po obni¿ce o "<<(rand()%5+1)*5<<"% wynosi: "<<endl<<endl;else
	if(a==4) plik<<"Towar kosztuje "<< (rand()%15+3)*30 <<" jego cena po podwy¿ce o "<<(rand()%5+1)*5<<"% wynosi: "<<endl<<endl;
	
/*6. zadanie z dwoma liczbami */ plik<<"6.";
		do {										//generowanie dzia³añ
			a=(rand()%6+3)*4;
			b=(rand()%6+3)*8;}						//generowanie dzia³añ
		while((a==b));
	plik<<"Dane s¹ dwie liczby: a = "<<a<<"*10do"<<rand()%4+12<<" i b = "<<b<<"*10do"<<rand()%4+12<<" "<<endl;
		a=rand()%2;
	if(a==0) plik<<"Oblicz iloczyn liczb a i b"<<endl<<endl; else	
	if(a==1) plik<<"Oblicz iloraz liczb a i b"<<endl<<endl;
/*7. kwadratowe */ plik<<"7.";
			do{a=rand()%18-9; b=rand()%20-10; c=rand()%20-10; delta=b*b-4*a*c;}							//wartoœci ujemne i dodatnie <-9,-1>u<1,9>
			while(a==0||(delta!=1&&delta!=4&&delta!=9&&delta!=16&&delta!=25&&delta!=49));		
	if(a>0)	if(a==1)  plik<<"  xdo2 "; else plik<<" "<<a<<"xdo2 "	;			//dla jedynek nie wyœwietla ich 
	if(a<0)	if(a==-1) plik<<" -xdo2 "; else plik<<a<<"xdo2 "	;	
	if(b>0)	if(b==1)  plik<<"+x  "; else 	plik<<"+"<<b<<"x "	;			//dla jedynek nie wyœwietla ich 
	if(b<0)	if(b==-1) plik<<"-x  ";	else	plik<<b<<"x "	;
	if(c>0) 			plik<<"+"<<c;	
	if(c<0) 			plik<<c;
		a=rand()%5;
	if(a==0) plik<<" = 0"<<endl<<endl;
	if(a==1) plik<<" > 0"<<endl<<endl;		
	if(a==2) plik<<" < 0"<<endl<<endl;
	if(a==3) plik<<" <rowne 0"<<endl<<endl;
	if(a==4) plik<<" >rowne 0"<<endl<<endl;
/*8 ile rozwaizan */ plik<<"8. Ile rozwi¹zañ ma poni¿sze równanie: "<<endl;
	a=rand()%3+2;
	int ile[a];

	for(int i=0; i<a; i++){do ile[i]=rand()%10-5; 	while(ile[i]==0)	;}				//generowanie dzia³añ
	for(int i=0; i<a; i++){
	plik<<"(x"; if(ile[i]>0) plik<<"+"<<ile[i]<<")";else plik<<ile[i]<<")";} plik<<endl;
	for(int i=0; i<a; i++){
	plik<<"-----";} plik<<" = 0"<<endl;	
	if (a==2) {plik<<"  (x"; if(ile[1]>0) plik<<"+"<<ile[1]<<")";else plik<<ile[1]<<")";} else
	if (a==3) {plik<<"    (x"; if(ile[2]>0) plik<<"+"<<ile[2]<<")";else plik<<ile[2]<<")";} else
	if (a==4) {plik<<"    (x"; if(ile[0]>0) plik<<"+"<<ile[0]<<")";else plik<<ile[0]<<")";plik<<"   (x"; if(rand()%4>1) plik<<"-";else plik<<"+"; plik<<rand()%4+1<<")";} 
		
	plik<<endl<<endl;		
}
