#include "basicFunction.h"

int addDog(Dog *d){
    return 1;
}

void readData(Dog *d){

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

}

int selectDataNo(Dog *d, int count){
    return 1;
}


void saveData(Dog *d, int count){

}

int loadData(Dog *d){
    return 1;
}