#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, opcion;

    do
    {
        printf( "\n   1. Tatarabuelos Paternos" );
        printf( "\n   2. Tatarabuelos Maternos" );
		printf( "\n   3. Bisabuelos Paternos");
        printf( "\n   4. Bisabuelos Maternos");
		printf( "\n   5. Abuelos Paternos");
        printf( "\n   6. Abuelos Maternos");
		printf( "\n   7. Papas" );
        printf( "\n   8. Hijos");
        printf( "\n   9. Sobrinos");
		printf( "\n   10. Salir." );
        printf( "\n\n   Introduzca opcion (1-10): " );

        scanf( "%d", &opcion );

        /* Inicio del arbol*/

        switch ( opcion )
        {
            case 1: printf( "\n Mis tatarabuelos Paternos son: ");
                    printf( "\n  Sebastian Gutierrez,Carmen Trujillo,Jorge Sanchez,Alejandra Cruz\n");
                    break;

            case 2: printf( "\n Mis Tatarabuelos Maternos son: ");
                    printf( "\n Felipe Franco Gonzalez,Rosa Licona Hernandez,Jesus Rangel,Guadalupe Pineda\n");
                    break;

            case 3: printf( "\n Mis Bisabuelos Paternos son: ");
                    printf( "\n Nicolas Gutierrez,Maria Felix Trujillo,Pedro Sanchez,Virginia Cruz\n");
                    break;
         
		    case 4: printf( "\n Mis Bisabuelos Maternos son: ");
                    printf( "\n Genaro Franco,Andrea Licona,Mateo Rangel,Maria de la luz Pineda\n");
                    break;

            case 5: printf( "\n Mis Abuelos Paternos son: ");
                    printf( "\n Eusebio Gutierrez Trujillo,Rosenda Sanchez Cruz\n");
                    break;

            case 6: printf( "\n Mis Abuelos Maternos son: ");
                    printf( "\n Eusebio Franco Licona,Ofelia Rangel Pineda\n");
		 
	    	case 7: printf( "\n Mis Papas son: ");
                    printf( "\n Raul Gutierrez Sanchez y Maria Andrea Franco Rangel\n");
                    break;

            case 8: printf( "\n Sus hijos somos: ");
                    printf( "\n Luis Alberto Gutierrez Franco,Maribel Andrea Gutierrez Franco,Raul Gutierrez Franco,Elizabeth Gutierrez Franco\n");
                    break;

            case 9: printf( "\n Mi sobrina es: ");
                    printf( "\n Lucia Gutierrez Morales\n");
		 
		  }

         /* Fin del anidamiento */

    } while ( opcion != 10 );

    return 0;
}



