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
    printf("\n*** ��ȣ�� ��� ***\n");
    printf("1. ��ȸ\n");
    printf("2. �߰�\n");
    printf("3. ����\n");
    printf("4. ����\n");
    printf("5. ����\n");
    printf("6. �ҷ�����\n");
    printf("0. ����\n\n");
    printf("=> ���ϴ� �޴���? ");
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