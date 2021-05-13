#include "basicFunction.h"

int addDog(Dog *d){
    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    getchar();

    do{
        printf("센터 들어온 년/월? ");
        scanf("%d %d", &d->year, &d->month);

        if(d->year<=0 || d->month<=0){
            printf("\n=> 음수 및 0 날짜는 존재 하지 않습니다.\n");
        }else if(d->year<=2021){
            if(d->year==2021){
                if(d->month<=5){
                    break;
                }
            }else if(d->year<2021){
                if(d->month<=12){
                    break;
                }
            }
        }printf("\n=> 현재 잘짜 (2021/5) 보다 앞서는 날짜 지정 못합니다.\n");
    }while(1);

    do{
        printf("나이? ");
        scanf("%d", &d->age);

        if(d->age >= 0){
            break;
        }
        printf("\n==> 나이 음수로 될 수 없습니다.\n");
    }while(1);

    getchar();

    do{
        printf("예방주사 접촉 여부 (t/f)? ");
        scanf("%c", &d->vaccine);
        getchar();
        if(d->vaccine == 't' || d->vaccine == 'f'){
            break;
        }
        printf("\n=> t / f, 둘중에 하나 선택해주세요.\n");
    }while(1);

    do{
        printf("중성화 유뮤(t/f)? ");
        scanf("%c", &d->neutralization);
        getchar();
        if(d->neutralization == 't' || d->neutralization == 'f'){
            break;
        }
        printf("\n=> true/false, 둘중에 하나 선택해주세요.\n");
    }while(1);
    
    printf("==> 추가됨\n"); 
    return 1;
}

void readData(Dog *d){
    printf("%14s %9d/%d %9d %12c %17c\n", d->type, d->year, d->month, d->age, d->vaccine, d->neutralization);
}

int updateData(Dog *d){
    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    getchar();

    do{
        printf("센터 들어온 년/월? ");
        scanf("%d %d", &d->year, &d->month);

        if(d->year<=0 || d->month<=0){
            printf("\n=> 음수 및 0 날짜는 존재 하지 않습니다.\n");
        }else if(d->year<=2021){
            if(d->year==2021){
                if(d->month<=5){
                    break;
                }
            }else if(d->year<2021){
                if(d->month<=12){
                    break;
                }
            }
        }printf("\n=> 현재 잘짜 (2021/5) 보다 앞서는 날짜 지정 못합니다.\n");
    }while(1);

    do{
        printf("나이? ");
        scanf("%d", &d->age);

        if(d->age >= 0){
            break;
        }
        printf("\n==> 나이 음수로 될 수 없습니다.\n");
    }while(1);

    getchar();

     do{
        printf("예방주사 접촉 여부 (t/f)? ");
        scanf("%c", &d->vaccine);
        getchar();
        if(d->vaccine == 't' || d->vaccine == 'f'){
            break;
        }
        printf("\n=> t / f, 둘중에 하나 선택해주세요.\n");
    }while(1);

    do{
        printf("중성화 유뮤(t/f)? ");
        scanf("%c", &d->neutralization);
        getchar();
        if(d->neutralization == 't' || d->neutralization == 'f'){
            break;
        }
        printf("\n=> true/false, 둘중에 하나 선택해주세요.\n");
    }while(1);

    printf("==> 수정됨!\n");
    
    return 1;
}

int deleteData(Dog *d){
    d->year = -1;
    d->month = -1;
    d->age = -1;
    printf("==> 삭제됨!\n");
    return 0;
}


int selectMenu(){
    int menu;
    printf("\n*** 보호견 목록 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 저장\n");
    printf("6. 지정 견종인 강아지 정보 검색\n");
    printf("7. 지정 나이 보다 동일하거나 더 어린 강아지 정보 겁색\n");
    printf("8. 지정 날짜와 동일하거나 더 최근에 들어온 강아지 정보 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

void listData(Dog *d,int count){
    printf("\nNo. %13s %20s %10s %21s %20s\n", "견종", "들어온날짜", "나이", "예방접종여부", "중성화유뮤");
    printf("==========================================================================================\n");
    for(int i=0; i<count; i++){
        if( d[i].year == -1 || d[i].age == -1 ) continue;
        printf("%2d.", i+1);
        readData(&d[i]);
    }
    printf("\n");
}

int selectDataNo(Dog *d, int count){
    int no;
    listData(d ,count);
    printf("번호는 (취소:0)? ");
    scanf("%d", &no);
    getchar();
    return no;
}

void saveData(Dog d[], int count){
    FILE* fp;

    fp= fopen("dogData.txt","wt");

    for(int i = 0; i < count; i++) {
        if(d[count].year < 0) continue;
            fprintf(fp, "%d %d %d %c %c %s\n", d[i].year, d[i].month, d[i].age, d[i].vaccine, d[i].neutralization, d[i].type);
    }

    fclose(fp);
    printf("저장됨!\n");
}

int loadData(Dog *d){
        int count=0;
        FILE*fp;

        fp = fopen("dogData.txt", "r");

        if(fp == NULL) {
            printf("=> 파일 없음!\n");
            return count;
        }

	while( count < 100 ) {
        fscanf(fp, "%d ", &(d[count].year));
        if(feof(fp)) break;
        fscanf(fp, "%d ", &(d[count].month));
        fscanf(fp, "%d ", &(d[count].age));
        fscanf(fp, "%c ", &(d[count].vaccine));
        fscanf(fp, "%c ", &(d[count].neutralization));
        fscanf(fp, "%[^\n]s", d[count].type);

        count++;
	}

    fclose(fp);

	printf("=> 로딩 성공!\n");
	return count;

    return 1;
}