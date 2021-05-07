#include "basicFunction.h"

int addDog(Dog *d){
    printf("\n");
    printf("�̸�? ");
    scanf("%[^\n]s",d->name);

    printf("������ ��? ");
    scanf("%[^\n]s", d->type);

    printf("���� ���� ��/��? ");
    scanf("%d %d", &d->year, &d->month);

    printf("����? ");
    scanf("%d", &d->weight);

    printf("����? ");
    scanf("%d", &d->age);

    printf("����? ");
    scanf("%[^\n]s", d->character);

    printf("�����ֻ� ���� ����? ");
    scanf("%[^\n]s", d->vaccine);

    printf("�߼�ȭ ����? ");
    scanf("%[^\n]s", d->neutralization);

    printf("�߰� (��)? ");
    scanf("%[^\n]s", d->foundIn);
    
    printf("==> �߰���\n"); 
    return 1;
}

void readData(Dog *d){
    printf("%15s %20s %d/%d %dkg %dyrs %s %s %s %s\n", d->name, d->type, d->year, d->month, d->weight, d->age, d->character, d->vaccine, d->neutralization, d->foundIn);
}

int updateData(Dog *d){
    printf("\n");
    printf("�̸�? ");
    scanf("%[^\n]s", d->name);

    printf("������ ��? ");
    scanf("%[^\n]s", d->type);

    printf("���� ���� ��/��? ");
    scanf("%d %d", &d->year, &d->month);

    printf("����? ");
    scanf("%d", &d->weight);

    printf("����? ");
    scanf("%d", &d->age);

    printf("����? ");
    scanf("%[^\n]s", d->character);

    printf("�����ֻ� ���� ����? ");
    scanf("%[^\n]s", d->vaccine);

    printf("�߼�ȭ ����? ");
    scanf("%[^\n]s", d->neutralization);

    printf("�߰� (��)? ");
    scanf("%[^\n]s", d->foundIn);

    printf("==> ������!\n");
    
    return 1;
}

int deleteData(Dog *d){
    d->year = -1;
    d->month = -1;
    d->weight = -1;
    d->age = -1;
    printf("==> ������!\n");
    return 0;
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