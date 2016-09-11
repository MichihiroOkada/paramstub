#include <stdio.h>

void read_csv(int index, char *file, int num, int *buf);
void read_data(int num, int *buf);

int main(void)
{
    int i;
    int buf[20] = {0};

    read_data(10, buf);
    for(i = 0; i < 20; i++) {
        printf("read = %d\n", buf[i]);
    }

    printf("############\n");
    read_data(10, buf);
    for(i = 0; i < 20; i++) {
        printf("read = %d\n", buf[i]);
    }
    printf("############\n");
    read_data(10, buf);
    for(i = 0; i < 20; i++) {
        printf("read = %d\n", buf[i]);
    }



    return 0;
}

void read_data(int num, int *buf)
{
    static int index;
    char *file = "TEST.csv";

    read_csv(index, file, num, buf);
    index++;


}

