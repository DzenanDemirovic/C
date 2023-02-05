
 //                                                              If-Else funkcija

#include <stdio.h>
//3.1 Ispisati da li je broj paran ili neparan
// main() {
// 	int broj;
// 	printf("Unesite broj = ");
// 	scanf("%d",&broj);
// 	if(broj%2==0){
// 		printf("broj je paran");
//	 }
// 	else{
// 		printf("Broj je neparan");
//	 }
//	return 0;
//}
//3.2. Sastaviti program koji ispisuje obaveštenje da li je uneti broj pozitivan, negativan ili je
//jednak nuli.
//main(){
//	int i;
//	printf("Unesite broj =");
//	scanf("%d",&i);
//	if(i>0){
//		printf("Broj je poziitivan");
//	}
//	else if (i==0){
//		printf("Broj je jednak nuli");
//		
//	}
//	else{
//		printf("Broj je negativann");
//		
//	}
//return 0 ;
//}
//3.2. Sastaviti program koji ispisuje obaveštenje da li je uneti broj pozitivan, negativan ili je
//jednak nuli3.7. Sastaviti program koji ce na osnovu unetih broja poena (od nula do 100) ispisati
//odgovarajucu ocenu (0-50 pet, 51-60 šest, 61-70 sedam, 71-80 osam, 81-90 devet, 91-100 deset)..

//main()
//{ 
// int a; 
// printf("Unesite broj bodova: "); 
// scanf ("%d", &a); 
// if (a>90) 
// printf("Ocena je 10\n"); 
// else if (a>80) 
// printf("Ocena je 9\n"); 
// else if (a>70) 
// printf("Ocena je 8\n"); 
// else if (a>60) 
// printf ("Ocena je 7\n"); 
// else if (a>50) 
// printf("Ocena je 6\n"); 
// else 
// printf("Ocena je 5\n"); 
// getche(); 
// return 0; 
//} 
//3.4. Sastaviti program koji za tri uneta cela broja ispisuje najveci

main() 
{ 
 int a, b, c, max; 
 printf("Unesite tri cela broja: "); 
 scanf("%d%d%d", &a, &b, &c); 
 max=a; 
 if(b>max) 
 max=b; 
 if(c>max) 
 max=c; 
 printf("Najveci je %d\n", max); 
 getche(); 
 return 0; 
}

