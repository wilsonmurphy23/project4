#include <stdio.h>

void readFat12(const char *image) {
    FILE *file = fopen(image, "rb");

    int bytes;
    while ((bytes = fgetc(file)) != EOF) {
        printf("%02X ", bytes);
    }

    FILE *recovered_files = fopen("recovered_files", "w");
    fprintf(recovered_files, "test output");

}

int main(int argc, char *argv[]) {

    readFat12(argv[1]);
}