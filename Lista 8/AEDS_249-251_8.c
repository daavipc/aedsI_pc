
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

void main(){
int  M[ LIN ][ COL ],A[ LIN ][ COL ],valor,flag,i, j;
float B[ LIN ][ COL ];

printf( "Preencha a matriz:" );
for( i = 0; i < LIN; i++ )
for( j = 0; j < COL; j++ )
{
printf( "[%d][%d] : ",i,j ); 			
scanf( "%d", &M[ i ][ j ] );
}	    	 

printf( "\nEntre com um valor inteiro: " );
scanf( "%d", &valor );

flag = 0;

for( i = 0; i < LIN; i++ )
for( j = 0; j < COL; j++ )	    
if( valor % 2 == 0 )	         
A[ i ][ j ] = M[ i ][ j ] + valor;         

else{			 
B[ i ][ j ] = (float)M[ i ][ j ] - valor;   
flag = 1;
}

if( flag == 0 ){
printf( "\n\nResultado da soma de %d pelos elementos da matriz\n\n", valor );	    
for( i = 0; i < LIN; i++ )
for( j = 0; j < COL; j++ )
printf( "%d ", A[ i ][ j ] );
}else{
printf( "\n\nResultado da diferença de %d pelos elementos da matriz\n\n", valor );	     
for( i = 0; i < LIN; i++ )
for( j = 0; j < COL; j++ )
printf( "%.1f ", B[ i ][ j ] );        	  
}		  


}