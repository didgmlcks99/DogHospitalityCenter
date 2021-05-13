#include <stdio.h>
#include <string.h>

typedef struct{
    char type[60];
    int year;
    int month;
    int age;
    char vaccine;
    char neutralization;
} Dog;

int addDog(Dog *d);
void readData(Dog *d); 
int updateData(Dog *d);   
int deleteData(Dog *d);

int selectMenu();
void listData(Dog *d,int count);
int selectDataNo(Dog *d, int count);

void saveData(Dog d[], int count);
int loadData(Dog *d);