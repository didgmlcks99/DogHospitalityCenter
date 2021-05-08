#include "basicFunction.h"

int addDog(Dog *d){
    printf("\n");
    printf("이름? ");
    scanf("%[^\n]s",d->name);

    getchar();

    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    getchar();

    printf("센터 들어온 년/월? ");
    scanf("%d %d", &d->year, &d->month);

    printf("나이? ");
    scanf("%d", &d->age);

    getchar();

    // do{
        printf("예방주사 접촉 여부 (true/false)? ");
        scanf("%[^\n]s", d->vaccine);
    //     if(strcmp(d->vaccine, "true")==0 || strcmp(d->vaccine, "false")==0){
    //         break;
    //     }
    //     printf("\n=> true/false, 둘중에 하나 선택해주세요.\n");
    // }while(1);

    getchar();

    // do{
        printf("중성화 유뮤(true/false)? ");
        scanf("%[^\n]s", d->neutralization);
    //     if(strcmp(d->vaccine, "true")==0 || strcmp(d->vaccine, "false")==0){
    //         break;
    //     }
    //     printf("\n=> true/false, 둘중에 하나 선택해주세요.\n");
    // }while(1);

    getchar();
    
    printf("==> 추가됨\n"); 
    return 1;
}

void readData(Dog *d){
    printf("%10s %10s %10d/%d %8d살 %11s %15s\n", d->name, d->type, d->year, d->month, d->age, d->vaccine, d->neutralization);
}

int updateData(Dog *d){
    printf("\n");
    printf("이름? ");
    scanf("%[^\n]s", d->name);

    getchar();

    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    getchar();

    printf("센터 들어온 년/월? ");
    scanf("%d %d", &d->year, &d->month);

    printf("나이? ");
    scanf("%d", &d->age);

    getchar();

    printf("예방주사 접촉 여부? ");
    scanf("%[^\n]s", d->vaccine);

    getchar();

    printf("중성화 유뮤? ");
    scanf("%[^\n]s", d->neutralization);

    getchar();

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
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

void listData(Dog *d,int count){
    printf("\nNo. %10s %13s %20s %10s %20s %20s\n", "이름", "견종", "들어온날짜", "나이", "예방접종여부", "중성화유뮤");
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


void saveData(Dog *d, int count){

}

int loadData(Dog *d){
    return 1;
}