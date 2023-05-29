#include <stdio.h>
#include <stdlib.h>

struct file {
    char name[50];
    int size;
    char content[100];
};

void createFile() {
    struct file f;
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", f.name);

    printf("Enter file size: ");
    scanf("%d", &f.size);

    printf("Enter file content: ");
    scanf("%s", f.content);

    fp = fopen(f.name, "w");
    fwrite(&f, sizeof(f), 1, fp);
    fclose(fp);
}

void readFile() {
    struct file f;
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", f.name);

    fp = fopen(f.name, "r");
    fread(&f, sizeof(f), 1, fp);
    printf("Name: %s\nSize: %d\nContent: %s\n", f.name, f.size, f.content);
    fclose(fp);
}

void updateFile() {
    struct file f;
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", f.name);

    printf("Enter new file content: ");
    scanf("%s", f.content);

    fp = fopen(f.name, "w");
    fwrite(&f, sizeof(f), 1, fp);
    fclose(fp);
}

void deleteFile() {
    char name[50];

    printf("Enter file name: ");
    scanf("%s", name);

    if (remove(name) == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }
}

int main() {
    int choice;

    while (1) 
	{
        printf("\nFile Management System:\n");
        printf("1. Create file\n");
        printf("2. Read file\n");
        printf("3. Update file\n");
        printf("4. Delete file\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                createFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                updateFile();
                break;
            case 4:
            	deleteFile();
            	break;
    	}
    }
}
