#include "basicFunction.h"

int addDog(Dog *d){
    printf("\n");
    printf("이름? ");
    scanf("%[^\n]s",d->name);

    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    printf("센터 들어온 년/월? ");
    scanf("%d %d", &d->year, &d->month);

    printf("무게? ");
    scanf("%d", &d->weight);

    printf("나이? ");
    scanf("%d", &d->age);

    printf("성향? ");
    scanf("%[^\n]s", d->character);

    printf("예방주사 접촉 여부? ");
    scanf("%[^\n]s", d->vaccine);

    printf("중성화 유뮤? ");
    scanf("%[^\n]s", d->neutralization);

    printf("발견 (시)? ");
    scanf("%[^\n]s", d->foundIn);
    
    printf("==> 추가됨\n"); 
    return 1;
}

void readData(Dog *d){
    printf("%15s %20s %d/%d %dkg %dyrs %s %s %s %s\n", d->name, d->type, d->year, d->month, d->weight, d->age, d->character, d->vaccine, d->neutralization, d->foundIn);
}

int updateData(Dog *d){
    printf("\n");
    printf("이름? ");
    scanf("%[^\n]s", d->name);

    printf("강아지 종? ");
    scanf("%[^\n]s", d->type);

    printf("센터 들어온 년/월? ");
    scanf("%d %d", &d->year, &d->month);

    printf("무게? ");
    scanf("%d", &d->weight);

    printf("나이? ");
    scanf("%d", &d->age);

    printf("성향? ");
    scanf("%[^\n]s", d->character);

    printf("예방주사 접촉 여부? ");
    scanf("%[^\n]s", d->vaccine);

    printf("중성화 유뮤? ");
    scanf("%[^\n]s", d->neutralization);

    printf("발견 (시)? ");
    scanf("%[^\n]s", d->foundIn);

    printf("==> 수정됨!\n");
    
    return 1;
}

int deleteData(Dog *d){
    d->year = -1;
    d->month = -1;
    d->weight = -1;
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
    printf("6. 불러오기\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

void listData(Dog *d,int count){
    printf("\nNo. Name Type enterDate weight age character vaccine neutralization foundIn\n");
    printf("================================================================================\n");
    for(int i=0; i<count; i++){
        if( d[i].weight == -1 || d[i].age == -1 ) continue;
        printf("%2d.", i+1);
        readData(&d[i]);
    }
    printf("\n");
}

int selectDataNo(Dog *d, int count){
    return 1;
}


void saveData(Dog *d, int count){

}

int loadData(Dog *d){
    return 1;
}