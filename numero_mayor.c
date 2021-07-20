#include <stdio.h>
void cls(void);
main(){
 int i, n;
 float a, men, may;
 cls();
 printf ("\n\t\t\t\tDigite el numero de datos a considerar: ");
 scanf ("%d", &n);
 printf ("\n\t\t\tDigite el primer dato a considerar : ");
 scanf ("%f", &a);
 men = a;
 may = a;
 for ( i = 1; i < n; i++ )
 { printf ("\t\t\tDigite el siguiente dato a considerar: ");
 scanf ("%f", &a);
 if ( a < men ) men = a;
 if ( a > may ) may = a; }
 printf("\n\n\t\tDe los %d datos el menor es %f y el mayor es %f\n\n", n, men, may);
}
void cls(void)
{
 printf("\033[2J"); /* Limpia la pantalla */
 printf("\033[0;0f"); /* Mueve el cursor en la esquina superior izquierda */
}
