#include <stdio.h>
#include <math.h> 

/*Sastaviti program za racunanje izraza 
y = x + x + x za unetu vrednost h.

 main() {
 float x, y; 
 printf("Unesite x: "); 
 scanf("%f", &x); 
 y=sqrt(x+ x*x + x*x*x); 
 printf("\y = %.2f", y); 


	return 0;
}
2.23. Sastaviti program koji ispisuje vrednost modula kompleksnog broja z = a + bi za unete
vrednosti a i b. Modul se racuna po formuli z = a + b .
main(){
	float a,b,z;
	printf( "Unesite a =");
	scanf("%f",&a);
	printf("Unesite b = ");
	scanf("%f",&b);
	z=sqrt(a*a + b*b);
	printf("Modul kompleksnog broja je %.2f+%.2fi je = %.2f",a,b,z);
	return 0;
}
2.24. Sastaviti program koji za unete realne i imaginarne delove dva kompleksna broja ispisuje
ta da dva broja u obliku z = a + bi 1
i z = c + di 2
, a zatim racuna njihov zbir i razliku
 z1 ± z2 = a + c ± i b + d .
 main(){
 	float x,y,c,d,rz,rr,iz,ir;
 	printf("Unesi prvi realni =");
 	scanf("%f",&x);
 	printf("Unesi prvi imaginarni =");
 	scanf("%f",&y);
 	printf("Unesite drugi realni broj");
 	scanf("%f",&c);
 	printf("Unesite drugi imaginarni broj=");
 	scanf("%f",&d);
 	rz= x+c;
 	rr=x-c;
 	iz= y+d;
 	ir=y-d;
 	printf("z1= %.2f+%.2fi ",x,y);
 	printf("z2= %.2f+%.2fi",c,d);
    printf("\nz1+z2 = %.2f + %.2fi", rz, iz); 
    printf("\nz1 - z2 = %.2f - %2.fi", rz,ir );
 	
 	
 	return 0;
 }
 2.27. Sastaviti program koji za uneti trocifreni broj ispisuje njegove cifre i sumu cifar*/
// main(){
// 	int xyz,x,y,z,suma;
// 	printf("Unesite trocifreni broj = ");
// 	scanf("%d",&xyz);
// 	// prva formula za dobijanje prvog broja od trocifrenog broja je sledeca 
// 	x=xyz/100;
// 	//sledeca formula je za dobijanje drugog broja u trocifrenom broju 
// 	y=(xyz/10)%10;
// 	//na kraju za trecu cifru 
// 	z=xyz%10;
// 	suma= x+y+z;
//	  printf("\nSuma svih cifara je : %d",suma);
//	  printf("\nSve cifre trocifrenog broja su : %d,%d,%d",x,y,z);
// 	return 0;
// 	
// 	
// 	
// }
