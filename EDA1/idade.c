#include <stdio.h>



int main (){
 	
	int dia1, mes1, ano1;
	int dia2, mes2, ano2;
	int dia3, mes3, ano3;
	
	scanf("%d%d%d", &dia1, &mes1, &ano1);
	scanf("%d%d%d", &dia2, &mes2, &ano2);
  
	if (dia1>=1 && dia1<= 35 && dia2>=1 && dia2<= 35 && mes1>=1 && mes1<=15 && mes2>=1 && mes2<=15 && ano1>=0 && ano1<=9999 && ano2>=0 && ano2==2019){
 		ano3 = ano2 - ano1;
 		mes3 = 15/(mes1 + mes2);
 		dia3 = ((35- (ano3/mes3))- (dia2-dia1));
 
 		printf ("%d\n%d\n%d\n", ano3, mes3, dia3);
       	}

	else {
		printf("data invalida\n");
	}  
 

return 0;
}

