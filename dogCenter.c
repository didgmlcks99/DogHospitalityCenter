#include <stdio.h>
#include <string.h>
#include "additionalFunction.h"

int main(void){
    
    Dog dlist[100];
    int curcount=0;
    int count = 0, menu;
    
    // count = loadData(dlist);
    curcount = count; 

    while (1){
        menu = selectMenu();
        getchar();
        if(menu == 0) break;
        if(menu == 1 || menu ==3 || menu == 4){	
		    if (count==0){ 
                printf(" �����Ͱ� �����ϴ�!\n");
			    continue;
			}
		}

        if(menu == 1) listData(dlist,curcount); 
        else if (menu == 2) {
            count+=addDog(&dlist[curcount++]); 
        }
        else if (menu == 3) {
            int no=selectDataNo(dlist, curcount);
            if(no==0){
                printf("=>��ҵ�!");
                continue;
            }
            updateData(&dlist[no-1]);
        }
        else if (menu == 4) {
            int no=selectDataNo(dlist, curcount);
            if(no==0){
                printf("=>��ҵ�!");
                continue;
            }
            int deleteok;
            printf("������ �����Ͻðڽ��ϱ�?(����:1)");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteData(&dlist[no-1])) count --;       
           	 } 
        }
	    // else if (menu == 5){
		//     if (count==0) printf("�����Ͱ� �����ϴ�!\n");
		//     else saveData(dlist,curcount);
	    // }
	}

	printf("\n�����!\n");
   	return 0;
}