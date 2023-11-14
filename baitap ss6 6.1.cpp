#include<stdio.h>
 int main(){
 	int n ;
 	int m ; 
 	int songuyen ; 
	  
	  	printf("nhap so nguyen :") ;
	  	scanf("%d",&songuyen);
		  for(n=1;n <= songuyen;n++){
		  			  for(m=1 ;m<=10; m++){
		  			  	 printf("\n%d", n*m);
						} 
		  }
 } 
