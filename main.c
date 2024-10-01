#include <stdio.h>
#include <stdlib.h>
    struct Contacts{
         char Nom [12];
         int Num_Tele [12];

 };
int main()
{

    printf("=======MENU========\n");
    printf("1-Ajout .\n");
    printf("2-Affichage .\n");
    printf("3-Modification .\n");
    printf("4-Supprression Avec Message de confimation .\n");
    printf("5-Recherche .\n");
    printf("6-Statistiques .\n");
    printf("7-Quitter .\n");
    struct Contacts phone;
    int choix;
    int choix1;
    int i = 0;
    int n = 1;
          printf("Enter number de choix: ");
          scanf("%d", &choix);
          do{
    switch(choix){

             case 1:
                 printf("Enter 1 or 2 : ");
                 scanf ("%d", &choix1);
                 switch(choix1){
                    case 1:
                 for(i=0;i<n;i++){
                        printf("Ajout simple.\n");
                 }
              printf("Enter Nom: ");
              scanf("%s",phone.Nom);
              printf("Enter Num_Tele : ");
              scanf("%d",phone.Num_Tele);
              choix1=3;
              break;
             case 2:
                 for(i=0;i<n;i++){
                        printf("Ajout multiple.");
              }
              choix1=3;
              break;
              default:
                  printf("Invalid choice, please try again.\n");
                break;
              }

                break;
        }
        }while(choix1 != 3);

    return 0;
}
