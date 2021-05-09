//Jacob Rowan 19038609

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main (){
	char oprtr[10];
	int indx;
	unsigned int temp, nmbr1, nmbr2, temp2, result;
	
	
	printf("Type in an expression\n");
	
	scanf("%x %s %x", &nmbr1, &oprtr, &nmbr2);
	
	
	if (strcmp("add", oprtr)==0){
		temp = nmbr1 + nmbr2;
		printf("%x", temp);
	}
	
	if (strcmp("sub", oprtr)==0){
		temp = nmbr1 - nmbr2;
		printf("%x", temp);
	}
	
	if (strcmp("and", oprtr)==0){
		temp = nmbr1 & nmbr2;
		printf("%x", temp);
	}
	
	if (strcmp("or", oprtr)==0){
		temp = nmbr1 | nmbr2;
		printf("%x", temp);
	}
	
	if (strcmp("xor", oprtr)==0){
		temp = nmbr1 ^ nmbr2;
		printf ("%x", temp);
	}
	
	if (strcmp("shl", oprtr)==0){
		temp = nmbr1 << nmbr2;
		printf("%x",temp);
	}
	
	if (strcmp("shr", oprtr)==0){
		temp = nmbr1 >> nmbr2;
		printf("%x",temp);
	}
	
	if (strcmp("asr", oprtr)==0){
		temp = nmbr1;
		if (nmbr1>=0x80000000){
			for(indx=0; indx<nmbr2; indx++){
				temp = temp >> 1;
				temp = temp | 0x80000000;
				
			}
			printf("%x\n", temp);
			exit(12);
		}
		if (nmbr1<0x80000000){
			temp = temp >> nmbr2;
			printf("%x\n", temp);
			exit(13);
		}		
	}
	
	if (strcmp("rol", oprtr)==0){
		
		
		temp = nmbr1 << nmbr2; //Moves all the bits nmbr2 places left
		temp2 = nmbr1 >> (32-nmbr2); //Ensures that vacant bit places are full using following |
		result = temp|temp2;
		printf("%x", result);		
		
	}
	
	if (strcmp("ror", oprtr)==0){
		
	
		
		temp = nmbr1 >> nmbr2;
		temp2 = nmbr1 << (32-nmbr2);
		result = temp|temp2;
		printf("%x", result);
		
	}
	
	//printf("original %s \n operator%s \n num1 %s\n num2 %s", choice, oprtr, num1, num2);
	
}