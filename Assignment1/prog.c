#include <stdio.h>
#include <string.h>

#define Buffer_Size 200

struct Buffer {
  char Buffer[Buffer_Size];
  int head ;
  int tail ;
  int count;
} buffer;

void init(struct Buffer *bu){
  bu->head = 0;
  bu->tail = 0;
  bu->count = 0;
};

int IsFull(struct Buffer *bu){
    if (bu->count == Buffer_Size)
        return 1;
    else
        return 0;
};

int IsEmpty(struct Buffer *bu){
    if (bu->count == 0)
        return 1;
    else
        return 0;
};

void Write(struct Buffer *bu,char value){
    if (IsFull(bu) == 1) {
        printf("Buffer Overflow!\n");
    }
    else{
        bu->Buffer[bu->head] = value;
        bu->count++;
        bu->head = (bu->head + 1) % Buffer_Size;
    };
};

char Read(struct Buffer *bu){
    if (IsEmpty(bu) == 1) {
        printf("The Buffer Is Empty!");
        return '\0';
    }
    else{
        char readed = bu->Buffer[bu->tail];
        bu->count--;
        bu->tail = (bu->tail + 1) % Buffer_Size;
        return readed;
    }
};

int main() {

    init(&buffer);
    char name[100];
    scanf(" %[^\n]s" , name);
    strcat(name," CE-ESY");
    int len = strlen(name);
    for (int i = 0; i < len; i++){
        Write(&buffer, name[i]);
    }
    char b;
    while(IsEmpty(&buffer) == 0){
        b = Read(&buffer);
        if (b != '\0') {
            printf("%c", b);
        }
    };
    //if (IsEmpty(&buffer) == 1) printf("\nthe buffer is empty");
    //if (IsFull(&buffer) == 1) printf("\nthe buffer is full");


    return 0;
}
