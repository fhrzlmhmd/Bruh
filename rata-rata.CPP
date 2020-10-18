#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main ()
{
char nim[9],nama[20];
int uts,uas;
float rata;

cout<<"Masukkan data Anda!\n";
cout<<"Nama      :";gets(nama);
cout<<"NIM       :";cin>>nim;
cout<<"Nilai UTS :";cin>>uts;
cout<<"Nilai UAS :";cin>>uas;
rata=(uts+uas)/2;
cout<<"Halo, nama saya "<<nama<<". NIM saya adalah "<<nim<<"."<<endl;
cout<<"Nilai akhir saya adalah "<<rata<<"."<<endl;
getch();
}
