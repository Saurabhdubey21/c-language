#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 256

typedef struct {
    char tasks[MAX_TASKS][TASK_LENGTH];
    int count;
} ToDoList;

void addTask(ToDoList *list) {
    if (list->count >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }
    printf("Enter a task: ");
    getchar(); // Clear the newline character from the input buffer
    fgets(list->tasks[list->count], TASK_LENGTH, stdin);
    list->tasks[list->count][strcspn(list->tasks[list->count], "\n")] = 0; // Remove newline
    list->count++;
    printf("Task added!\n");
}

void viewTasks(ToDoList *list) {
    if (list->count == 0) {
        printf("No tasks in the list.\n");
        return;
    }
    printf("To-Do List:\n");
    for (int i = 0; i < list->count; i++) {
        printf("%d. %s\n", i + 1, list->tasks[i]);
    }
}

void deleteTask(ToDoList *list) {
    if (list->count == 0) {
        printf("No tasks to delete.\n");
        return;
    }
    int taskNumber;
    printf("Enter the task number to delete: ");
    scanf("%d", &taskNumber);
    if (taskNumber < 1 || taskNumber > list->count) {
        printf("Invalid task number!\n");
        return;
    }
    for (int i = taskNumber - 1; i < list->count - 1; i++) {
        strcpy(list->tasks[i], list->tasks[i + 1]);
    }
    list->count--;
    printf("Task deleted!\n");
}

int main() {
    ToDoList list;
    list.count = 0;
    int choice;

    do {
        printf("\nTo-Do List Menu:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(&list);
                break;
            case 2:
                viewTasks(&list);
                break;
            case 3:
                deleteTask(&list);
                break;
            case 4:
                printf("Exiting the application.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}