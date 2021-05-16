#include "additionalFunction.h"

void searchType(Dog *d, int count){
	int isequal = 0;
	int check = 0;
	char typeS[60];

	printf("(해당 견종과 같은 강아지 정보 출력)\n");
	printf("견종? ");
	scanf("%[^\n]s", typeS);

	printf("\nNo. %13s %20s %10s %23s %21s\n", "견종", "들어온날짜", "나이", "예방접종여부", "중성화유뮤");
  	printf("==========================================================================================\n");

	for (int i=0; i<count; i++) {
		if(d[i].year < 0) continue;
		if(strstr(d[i].type, typeS)){
			printf("%2d.", i+1);
			readData(&d[i]);
			check++;
		}
	}

	if(check == 0) printf("=> 찾으시는 견종의 강아지가 존재하지 않습니다.\n");

	return;

}

void searchAge(Dog *d, int count){
	int scnt = 0;

	int bound_age;

	do{
		printf("(해당 나이와 같거나 더 어린 강아지 정보 출력)\n");
        printf("나이? ");
        scanf("%d", &bound_age);

        if(d->age >= 0){
            break;
        }
        printf("\n==> 나이 음수로 될 수 없습니다.\n");
    }while(1);

	printf("\nNo. %13s %20s %10s %23s %21s\n", "견종", "들어온날짜", "나이", "예방접종여부", "중성화유뮤");
    printf("==========================================================================================\n");

	for(int i = 0; i < count; i++){
		if(d[i].month < 0) continue;
		if(d[i].age <= bound_age){
			printf("%2d.", i+1);
			readData(&d[i]);
			scnt++;
		}
	}
}

void searchDateEntered(Dog *d, int count){
    int scnt = 0;

	int bound_year;
    int bound_month;

	do{
		printf("(해당 날짜와 같거나 더 최근에 들어온 강아지 정보 출력)\n");
        printf("원하는 날짜 입력 (달/월) : ");
        scanf("%d %d", &bound_year, &bound_month);

        if(bound_year<=0 || bound_month<=0){
            printf("\n=> 음수 및 0 날짜는 존재 하지 않습니다.\n");
        }else if(bound_year<=2021){
            if(bound_year==2021){
                if(bound_month<=5){
                    break;
                }
            }else if(bound_year<2021){
                if(bound_month<=12){
                    break;
                }
            }
        }printf("\n=> 현재 날짜 (2021/5) 보다 앞서는 날짜 지정 못합니다.\n");
    }while(1);

	printf("\nNo. %13s %20s %10s %23s %21s\n", "견종", "들어온날짜", "나이", "예방접종여부", "중성화유뮤");
    printf("==========================================================================================\n");

	for(int i = 0; i < count; i++){
		if(d[i].month < 0) continue;
		if(d[i].year >= bound_year){
			if(d[i].year == bound_year){
				if(d[i].month >= bound_month){
					printf("%2d.", i+1);
					readData(&d[i]);
					scnt++;
				}
			}else{
				printf("%2d.", i+1);
				readData(&d[i]);
				scnt++;
			}
		}
	}
	if(scnt == 0) printf("=> 해당 날짜와 동일하거나 최근에 들어온 강아지 없음\n");
}