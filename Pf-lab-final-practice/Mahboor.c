#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define INITIAL_CAPACITY 4
#define MAX_INPUT 2048   // for safe input reading

// --------------------------------------------------------------------
// Function Prototypes
// --------------------------------------------------------------------
void insertLine(char ***buffer, int *size, int *capacity, int index, const char *text);
void deleteLine(char ***buffer, int *size, int index);
void shrinkToFit(char ***buffer, int *capacity, int size);
void printAllLines(char **buffer, int size);
void freeAll(char ***buffer, int *size, int *capacity);
void saveToFile(char **buffer, int size, const char *filename);
void loadFromFile(char ***buffer, int *size, int *capacity, const char *filename);

// --------------------------------------------------------------------
// Helper: Safe memory allocation check
// --------------------------------------------------------------------
void checkAllocation(void *ptr) {
    if (!ptr) {
        fprintf(stderr, "Memory Allocation Failed! Program Terminating.\n");
        exit(1);
    }
}

// --------------------------------------------------------------------
// Insert Line: Shifts POINTERS, allocates only required memory for text
// --------------------------------------------------------------------
void insertLine(char ***buffer, int *size, int *capacity, int index, const char *text) {
    if (index < 0 || index > *size) {
        printf("Invalid index.\n");
        return;
    }

    // Expand if no space
    if (*size == *capacity) {
        *capacity *= 2;
        *buffer = realloc(*buffer, (*capacity) * sizeof(char*));
        checkAllocation(*buffer);
        printf("[Expanded capacity to %d]\n", *capacity);
    }

    // Shift POINTERS to make space
    for (int i = *size - 1; i >= index; i--) {
        (*buffer)[i + 1] = (*buffer)[i];
    }

    // Allocate exact memory for new line
    (*buffer)[index] = malloc(strlen(text) + 1);
    checkAllocation((*buffer)[index]);
    strcpy((*buffer)[index], text);

    (*size)++;
}

// --------------------------------------------------------------------
// Delete Line: free memory and shift POINTERS
// --------------------------------------------------------------------
void deleteLine(char ***buffer, int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index.\n");
        return;
    }

    free((*buffer)[index]);

    // Shift pointers left
    for (int i = index; i < *size - 1; i++) {
        (*buffer)[i] = (*buffer)[i + 1];
    }

    (*size)--;
}

// --------------------------------------------------------------------
// shrinkToFit: reduce capacity to EXACT size
// --------------------------------------------------------------------
void shrinkToFit(char ***buffer, int *capacity, int size) {
    *capacity = size;
    *buffer = realloc(*buffer, size * sizeof(char*));
    checkAllocation(*buffer);
    printf("[Capacity shrinked to %d]\n", *capacity);
}

// --------------------------------------------------------------------
// Print all stored lines
// --------------------------------------------------------------------
void printAllLines(char **buffer, int size) {
    if (size == 0) {
        printf("[Buffer Empty]\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        printf("%d: %s\n", i, buffer[i]);
    }
}

// --------------------------------------------------------------------
// Free all allocated memory
// --------------------------------------------------------------------
void freeAll(char ***buffer, int *size, int *capacity) {
    for (int i = 0; i < *size; i++) {
        free((*buffer)[i]);
    }
    free(*buffer);

    *size = 0;
    *capacity = 0;

    printf("[All memory freed]\n");
}

// --------------------------------------------------------------------
// Save text buffer to a file
// --------------------------------------------------------------------
void saveToFile(char **buffer, int size, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%s\n", buffer[i]);
    }

    fclose(fp);
    printf("[Saved to file successfully]\n");
}

// --------------------------------------------------------------------
// Load text file and rebuild dynamic structure
// --------------------------------------------------------------------
void loadFromFile(char ***buffer, int *size, int *capacity, const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Cannot open file.\n");
        return;
    }

    // Free old memory
    freeAll(buffer, size, capacity);

    *capacity = INITIAL_CAPACITY;
    *size = 0;
    *buffer = malloc((*capacity) * sizeof(char*));
    checkAllocation(*buffer);

    char temp[MAX_INPUT];
    while (fgets(temp, MAX_INPUT, fp)) {
        temp[strcspn(temp, "\n")] = '\0'; // remove newline
        insertLine(buffer, size, capacity, *size, temp);
    }

    fclose(fp);
    printf("[File loaded successfully]\n");
}

// --------------------------------------------------------------------
// MAIN PROGRAM MENU
// --------------------------------------------------------------------
int main() {
    char **buffer = malloc(INITIAL_CAPACITY * sizeof(char*));
    checkAllocation(buffer);

    int size = 0;
    int capacity = INITIAL_CAPACITY;

    int choice;
    char temp[MAX_INPUT];
    int index;
    char filename[100];

    while (1) {
        printf("\n---- Minimal Text Editor ----\n");
        printf("1. Insert Line\n");
        printf("2. Delete Line\n");
        printf("3. Print All Lines\n");
        printf("4. Shrink To Fit\n");
        printf("5. Save To File\n");
        printf("6. Load From File\n");
        printf("7. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                printf("Enter index: ");
                scanf("%d", &index);
                getchar();

                printf("Enter line text: ");
                fgets(temp, MAX_INPUT, stdin);
                temp[strcspn(temp, "\n")] = '\0';

                insertLine(&buffer, &size, &capacity, index, temp);
                break;

            case 2:
                printf("Enter index to delete: ");
                scanf("%d", &index);
                getchar();
                deleteLine(&buffer, &size, index);
                break;

            case 3:
                printAllLines(buffer, size);
                break;

            case 4:
                shrinkToFit(&buffer, &capacity, size);
                break;

            case 5:
                printf("Enter filename: ");
                scanf("%s", filename);
                saveToFile(buffer, size, filename);
                break;

            case 6:
                printf("Enter filename: ");
                scanf("%s", filename);
                loadFromFile(&buffer, &size, &capacity, filename);
                break;

            case 7:
                freeAll(&buffer, &size, &capacity);
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}
