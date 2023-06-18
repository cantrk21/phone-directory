#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"


int main()
{
    int choice=0;
    char searchName[20];
    int searchResult=0;
    menu();

    do
    {
        printf("\n\n seciminizi giriniz : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 : if(phoneAdd()==0){
                printf("tel basarili bir sekilde eklendi\n");
            }
                else{
                    printf("tel nosu eklenirken hata olustu..");
                }
                break;

       case 2 : if(phoneList()==0){
                printf("\ntel numlari basarili bir sekilde listelendi\n");
            }
                else{
                    printf("\ntel numlari listelenirken hata olustu..\n");
                }break;

        case 3 : printf("aranacak ismi giriniz :");
                  scanf("%s",&searchName);
                  searchResult = phoneSearch(searchName);
                  if(searchResult==0)
                  {
                       printf("kayit bulunamadi\n");

                  }
                  else
                  {
                     printf("%d kayit bulundu\n",searchResult);
                  }
                  break;

        case 4 : printf("\n cikis yaptiniz hoscakalin...\n");
                return 0;

                break;
        default : printf(" lutfen 1-4 arasinda giriniz ...\n");
        }

       }while(choice!=4);



    return 0;
}
