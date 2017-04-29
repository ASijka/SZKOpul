#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sprawdzanie(char a)
{
		int b=(int)a;
		
		if(b>=65 & b<=90)
		{
				if(a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' || a=='Y')
						return 1;
				else
						return 2;		
		}
		else
		{
				if(a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u' || a=='y')
						return 3;
				else
						return 4;		
		}
		
}

struct dane
{
		int typ;
		int ilosc;
};

int main()
{
		int n;
		cin>>n;
		
		string tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
			
		dane mozliwy_poczotek;
			 	mozliwy_poczotek.ilosc=0;
		dane najkrotszy;
				najkrotszy.ilosc=1000000;
		dane najdlozszy;
				najdlozszy.ilosc=0;
		dane mozliwy_koniec;	
				mozliwy_koniec.ilosc=0;				
				
		int tmp;	
		int flaga;		
		int licznik=0;		
				
		int tab_wynikow_rodzaj_nd[n];
		int tab_wynikow_rodzaj_kr[n];
		int tab_wynikow_dlugosc_nd[n];
		int tab_wynikow_dlugosc_kr[n];		
				
		int licznik_zmian=0;		
				
		for(int i=0;i<n;i++)
		{
				tmp=sprawdzanie(tab[i][0]);	
				
				mozliwy_poczotek.typ=tmp;
				mozliwy_poczotek.ilosc++;
				
				flaga=0;
				
				for(int j=1;j<tab[i].length();j++)
				{
							tmp=sprawdzanie(tab[i][j]);	
							if(flaga==0)
							{							
									if(tmp==mozliwy_poczotek.typ)
									{
											mozliwy_poczotek.ilosc++;
									}
									else
									{
											licznik_zmian++;
											flaga=1;
											mozliwy_koniec.typ=tmp;
											mozliwy_koniec.ilosc++;
									}
							}
							else
							{
									if(tmp==mozliwy_koniec.typ)
											mozliwy_koniec.ilosc++;
									else
									{	
											licznik_zmian++;
											if(mozliwy_koniec.ilosc<najkrotszy.ilosc)
											{
													najkrotszy.typ=mozliwy_koniec.typ;
													najkrotszy.ilosc=mozliwy_koniec.ilosc;
											}
											else if (mozliwy_koniec.ilosc==najkrotszy.ilosc)
											{
													najkrotszy.typ=min(najkrotszy.typ,mozliwy_koniec.typ);
											}
											
											if(mozliwy_koniec.ilosc>najdlozszy.ilosc)
											{
													najdlozszy.typ=mozliwy_koniec.typ;
													najdlozszy.ilosc=mozliwy_koniec.ilosc;
											}
											else if (mozliwy_koniec.ilosc==najdlozszy.ilosc)
											{
													najdlozszy.typ=min(najdlozszy.typ,mozliwy_koniec.typ);
											}	
											mozliwy_koniec.typ=tmp;
											mozliwy_koniec.ilosc=1;
									}		
							}
				}
				
				if(licznik_zmian==0)
				{
						tab_wynikow_rodzaj_nd[i]=mozliwy_poczotek.typ;
						tab_wynikow_dlugosc_nd[i]=mozliwy_poczotek.ilosc;
						tab_wynikow_rodzaj_kr[i]=mozliwy_poczotek.typ;
						tab_wynikow_dlugosc_kr[i]=mozliwy_poczotek.ilosc;
						najdlozszy.typ=0;
						najdlozszy.ilosc=0;
						najkrotszy.typ=0;
						najkrotszy.ilosc=1000000;
						licznik_zmian=0;
						mozliwy_poczotek.ilosc=0;
						mozliwy_poczotek.typ=0;
						mozliwy_koniec.typ=0;
						mozliwy_koniec.ilosc=0;
						continue;
				}
				else
				{
						if(mozliwy_koniec.typ==mozliwy_poczotek.typ)
						{
								if(mozliwy_koniec.ilosc+mozliwy_poczotek.ilosc>najdlozszy.ilosc)
								{
										najdlozszy.ilosc=mozliwy_koniec.ilosc+mozliwy_poczotek.ilosc;
										najdlozszy.typ=mozliwy_poczotek.typ;
								}
								if(mozliwy_koniec.ilosc+mozliwy_poczotek.ilosc<najkrotszy.ilosc)
								{
										najkrotszy.ilosc=mozliwy_koniec.ilosc+mozliwy_poczotek.ilosc;
										najkrotszy.typ=mozliwy_poczotek.typ;
								}
						}
						else
						{
								if(mozliwy_koniec.ilosc<najkrotszy.ilosc)
								{
										najkrotszy.typ=mozliwy_koniec.typ;
										najkrotszy.ilosc=mozliwy_koniec.ilosc;
								}
								else if (mozliwy_koniec.ilosc==najkrotszy.ilosc)
								{
										najkrotszy.typ=min(najkrotszy.typ,mozliwy_koniec.typ);
								}
								if(mozliwy_koniec.ilosc>najdlozszy.ilosc)
								{
										najdlozszy.typ=mozliwy_koniec.typ;
										najdlozszy.ilosc=mozliwy_koniec.ilosc;
								}
								else if (mozliwy_koniec.ilosc==najdlozszy.ilosc)
								{
										najdlozszy.typ=min(najdlozszy.typ,mozliwy_koniec.typ);
								}
								
								
								
								if(mozliwy_poczotek.ilosc<najkrotszy.ilosc)
								{
										najkrotszy.typ=mozliwy_poczotek.typ;
										najkrotszy.ilosc=mozliwy_poczotek.ilosc;
								}
								else if (mozliwy_poczotek.ilosc==najkrotszy.ilosc)
								{
										najkrotszy.typ=min(najkrotszy.typ,mozliwy_poczotek.typ);
								}
								
								if(mozliwy_poczotek.ilosc>najdlozszy.ilosc)
								{
										najdlozszy.typ=mozliwy_poczotek.typ;
										najdlozszy.ilosc=mozliwy_poczotek.ilosc;
								}
								else if (mozliwy_poczotek.ilosc==najdlozszy.ilosc)
								{
										najdlozszy.typ=min(najdlozszy.typ,mozliwy_poczotek.typ);
								}
						}
				}		
				
				tab_wynikow_rodzaj_nd[i]=najdlozszy.typ;
				tab_wynikow_dlugosc_nd[i]=najdlozszy.ilosc;
				tab_wynikow_rodzaj_kr[i]=najkrotszy.typ;
				tab_wynikow_dlugosc_kr[i]=najkrotszy.ilosc;
				najdlozszy.typ=0;
				najdlozszy.ilosc=0;
				najkrotszy.typ=0;
				najkrotszy.ilosc=1000000;
				licznik_zmian=0;
				mozliwy_poczotek.ilosc=0;
				mozliwy_poczotek.typ=0;
				mozliwy_koniec.typ=0;
				mozliwy_koniec.ilosc=0;
		}
		
		for(int i=0;i<n;i++)
		{
				cout<<tab_wynikow_dlugosc_nd[i]<<" ";
				if(tab_wynikow_rodzaj_nd[i]==1)
						cout<<"JASNE";
				else if(tab_wynikow_rodzaj_nd[i]==2)
						cout<<"CIEMNE";
				else if(tab_wynikow_rodzaj_nd[i]==3)
						cout<<"jasne";
				else if(tab_wynikow_rodzaj_nd[i]==4)
						cout<<"ciemne";
				cout<<endl;
				
				cout<<tab_wynikow_dlugosc_kr[i]<<" ";
				if(tab_wynikow_rodzaj_kr[i]==1)
						cout<<"JASNE";
				else if(tab_wynikow_rodzaj_kr[i]==2)
						cout<<"CIEMNE";
				else if(tab_wynikow_rodzaj_kr[i]==3)
						cout<<"jasne";
				else if(tab_wynikow_rodzaj_kr[i]==4)
						cout<<"ciemne";
				cout<<endl;									
		}
		
		return 0;		
}


