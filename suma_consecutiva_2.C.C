#include <stdio.h>
int y,g,h,i;
float j,k;
int main()
{
	do{
		printf("Elige diferentes operaciones que desees:\n\n");
        printf("\n1.-resta\n2.-suma\n3.-divición\n4.-multiplicación\n\n");
        printf("introduce una opcion:\n");
        scanf("%d",&y);
        switch(y)
        {
        	case 1:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&g);
                scanf("%d",&h);
                printf("El resultado de la resta es:\n\n%d\n\n",g-h);
				break;
			}
			case 2:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&g);
                scanf("%d",&h);
                printf("El resultado de la suma es:\n%d\n\n",g+h);
				break;
			}
			case 3:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&g);
                scanf("%d",&h);
                printf("El resultado de la divición es:\n\n%f\n\n",g/h);
				break;
			}
			case 4:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&j);
                scanf("%d",&k);
                printf("El resultado de la multiplicación es:\n%d\n\n",j*k);
				break;
			}
			default:{
				printf("NO HAY RESULTADO \n");
				break;
			}			
		}
		printf("Quieres hacer otra operacion? \n 1)SI\n 2)NO\n");
        scanf("%d",&i); 
	}
	while(i==1);
	system("pause");
}
