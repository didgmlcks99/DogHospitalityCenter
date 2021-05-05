#include "basicFunction.h"

int addDog(Dog *d){
    return 1;
}

void readData(Dog *d){
    printf("%15s %20s %d/%d %dkg %dyrs %s %s %s %s\n", d->name, d->type, d->year, d->month, d->weight, d->age, d->character, d->vaccine, d->neutralization, d->foundIn);
}

int updateData(Dog *d){
    return 1;
}

int deleteData(Dog *d){
    return 1;
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
        if( d[i].weight == -1 || d[i].price == -1 ) continue;
        printf("%2d.", i+1);
        readProduct(&d[i]);
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