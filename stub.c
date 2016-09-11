#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void read_csv(int index, char *file, int num, int *buf)
{
    FILE *fp = fopen(file, "r");
    char read_buffer[100] = {0};
    char *token;
    int read_count = 0;
    int csv_line_count = 0;

    for(csv_line_count = 0; csv_line_count <= index; csv_line_count++) {
        fgets(read_buffer, sizeof(read_buffer), fp);
    }

    printf("read_buffer = %s\n", read_buffer);

    token = strtok(read_buffer, ",");
    //puts( token );
    buf[read_count] = atoi(token);
    printf("buf[%d] = %d\n", read_count, buf[read_count]);
    for(read_count = 1; read_count < num; read_count++) {
        if( token != NULL ) {
            token = strtok( NULL, "," );
            if( token != NULL ) {
                //puts( token );
                buf[read_count] = atoi(token);
                printf("buf[%d] = %d\n", read_count, buf[read_count]);
            }
        }
        else {
            break;
        }
    }
}

