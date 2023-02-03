#include <stdio.h>
//5.1. Sastaviti program kojim se u datoteku podaci.txt upisuje prvih 10 celih brojeva , a zatim se
//iz iste datoteke citaju brojevi dok se ne dostigne do kraja datoteke, a zatim se brojevi ispisuju na
//standarni izlaz (ekran).  
//main() 
//{ 
// int i, br; 
// FILE *dato; /*Deklarisanje pokazivaca na datoteku*/
// /*Otvaramo datoteku sa imenom podaci.txt za pisanje*/ 
// dato=fopen("podaci.txt", "w"); 
// /*Ukoliko otvaranje nije uspelo, fopen vraca NULL. U tom slucaju, 
//
// prijavljujemo gresku i zavrsavamo program */
// if(dato==NULL) 
// { 
// printf("\n Greska prilikom otvaranja datoteke podaci.txt za 
//pisanje!\n"); 
// exit(1); 
// } 
// /*Upisujemo u datoteku prvih 10 prirodnih brojeva (svaki u posebnom redu)*/ 
// for(i=0; i<10; i++) 
// fprintf(dato, "%d\n", i); 
// /*Zatvaramo datoteku*/ 
// fclose(dato); 
// /*Otvaramo datoteku sa imenom podaci.txt za citanje*/ 
// dato= fopen("podaci.txt", "r"); 
// /*Ukoliko otvaranje nije uspelo, fopen vraca NULL. U tom slucaju, 
// prijavljujemo gresku i zavrsavamo program*/ 
// if(dato==NULL) 
// { 
// printf("\n Greska prilikom otvaranja datoteke podaci.txt za 
//citanje!\n"); 
// exit(1); 
// } 
// /*Citamo brojeve iz datoteke dok ne stignemo do kraja i ispisujemo ih 
// na standardni izlaz*/
// while(1) 
// { 
// /*Pokusavamo da procitamo broj*/ 
// fscanf(dato, "%d", &br); 
// /*Ukoliko smo dosli do kraja datoteke, prekidamo*/ 
// if(feof(dato)) 
// break; 
// /*Ispisujemo procitani broj*/ 
// printf(" Procitano: %d\n", br); 
// } 
// /*Zatvaramo datoteku*/ 
// fclose(dato); 
// getche(); 
// return 0; 



//
//5.4 Data je datoteka BrojeviStari.txt koja u svakom redu sadrži po jedan ceo broj. Sastaviti
//program koji formira datoteku BrojeviNovi.txt tako što iz datoteke BrojeviStari.txt prepisuje
//brojeve iz parnih redova, a iz neparnih udvostrucuje. 
//
//main() 
//{ 
// int broj, i=1; 
// FILE *a,*b; 
// a=fopen("BrojeviStari.txt","r"); 
// if(a==NULL) 
// { 
// printf("\n Greska pri otvaranju datoteke!"); 
// exit(1); 
// } 
// b=fopen("BrojeviNovi.txt","w"); 
// if(b==NULL) 
// { 
// printf("\n Greska pri otvaranju datoteke!"); 
// exit(1); 
// } 
// while(fscanf(a,"%d",&broj)!=EOF) 
// { 
// if(i%2==0) 
// fprintf(b,"%d\n", broj); 
// else 
// fprintf(b,"%d\n", 2*broj); 
// i++; 
// } 
// fclose(a); 
// fclose(b); 
// getche(); 
// return 0;
//

//5.3 Svaki red datoteke brojevi.txt sadrži po jedan ceo broj. Sastaviti program koji štampa
//najmanji i najveci ceo broj na ekranu.

//main() 
//{ 
// FILE *dato; 
// int najmanji, najveci, broj; 
// dato=fopen("brojevi.txt","r"); 
// if(dato==NULL) 
// { 
// printf("\n Greska pri otvaranju datoteke!"); 
// exit(1); 
// } 
// fscanf(dato,"%d",&broj); 
// najmanji=broj; 
// najveci=broj; 
// while(fscanf(dato,"%d",&broj)!=EOF) 
// { 
// if(broj<najmanji) najmanji=broj; 
// if(broj>najveci) najveci=broj; 
// } 
// fclose(dato); 
// printf("\n Najmanji je broj: %d", najmanji); 
// printf("\n Najveci broj: %d", najveci); 
// getche(); 
// return 0; 
//}


//5.2. Data je datoteka podaci2.txt ciji je sadržaj prikazan 
//na slici. Sastaviti program koji u postojeceoj datoteci 
//dopisuje tekst ''Pozdrav svima''.
//
//main() 
//{ 
// FILE *dato; 
// /*Otvaramo datoteku za nadovezivanje i proveravamo da li je doslo do greske*/ 
// if((dato=fopen("podaci2.txt", "a"))==NULL) 
// { 
// printf("\n Greska prilikom otvaranja datoteke podaci2.txt\n"); 
// exit(1); 
// } 
// 
// /*Upisujemo sadrzaj u datoteku*/ 
// fprintf(dato, "Pozdrav svima\n"); 
// /*Zatvaramo datoteku*/ 
// fclose(dato); 
// getche(); 
// return 0; 
//}
//
//
//