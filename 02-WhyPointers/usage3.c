#include <stdio.h>

int main() {
    FILE *fp = fopen("./readme.md", "r");

    if (fp == NULL) {
        printf("打开文件失败\n");
        return 1;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
