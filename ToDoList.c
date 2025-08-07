#include <stdio.h>
#include <string.h>

int main() {
    char tasks[10][100]; // Max 10 tasks, each up to 100 characters
    int taskCount = 0;
    int choice;
    int i;

    while (1) {
        printf("\n--- Simple To-Do List ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (taskCount >= 10) {
                printf("Task list is full.\n");
            } else {
                printf("Enter task: ");
                getchar(); // Clear input buffer
                fgets(tasks[taskCount], 100, stdin);
                tasks[taskCount][strcspn(tasks[taskCount], "\n")] = 0; // Remove newline
                taskCount++;
                printf("Task added.\n");
            }
        } else if (choice == 2) {
            if (taskCount == 0) {
                printf("No tasks yet.\n");
            } else {
                printf("\n--- Your Tasks ---\n");
                for (i = 0; i < taskCount; i++) {
                    printf("%d. %s\n", i + 1, tasks[i]);
                }
            }
        } else if (choice == 3) {
            if (taskCount == 0) {
                printf("No tasks to delete.\n");
            } else {
                int del;
                printf("Enter task number to delete: ");
                scanf("%d", &del);
                if (del < 1 || del > taskCount) {
                    printf("Invalid number.\n");
                } else {
                    for (i = del - 1; i < taskCount - 1; i++) {
                        strcpy(tasks[i], tasks[i + 1]);
                    }
                    taskCount--;
                    printf("Task deleted.\n");
                }
            }
        } else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
