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
                printf("=>데이터가 없습니다!\n");
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
                printf("=>취소됨!");
                continue;
            }
            updateData(&dlist[no-1]);
        }
        else if (menu == 4) {
            int no=selectDataNo(dlist, curcount);
            if(no==0){
                printf("=>취소됨!");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제:1) ");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteData(&dlist[no-1])) count --;       
           	 } 
        }
	    // else if (menu == 5){
		//     if (count==0) printf("데이터가 없습니다!\n");
		//     else saveData(dlist,curcount);
	    // }
        // else if(menu == 6){
		// 	if(count > 0){
		// 		searchType(dlist, count);
		// 	}else{
		// 		printf("=> 강아지 정보 (견종) 검색할 데이터 없습니다.\n");
		// 	}
		// }
        else if(menu == 7){
			if(count > 0){
				searchAge(dlist, count);
			}else{
				printf("=> 강아지 정보 (나이) 검색할 데이터 없습니다.\n");
			}
		}
        else if(menu == 8){
			if(count > 0){
				searchDateEntered(dlist, count);
			}else{
				printf("=> 강이지 정보 (날짜) 검색할 데이터 없습니다.\n");
			}
		}
	}

	printf("\n종료됨!\n");
   	return 0;
}