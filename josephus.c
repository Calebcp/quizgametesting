#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct Node {  
    int id;  
    struct Node *next;  
} Node;  
  
int main() {  
    int m, n;  
    scanf("%d %d", &m, &n);  
  
    Node *head = NULL, *tail = NULL;  
    for (int i = 1; i <= m; i++) {  
        Node *new_node = (Node *)malloc(sizeof(Node));  
        new_node->id = i;  
        new_node->next = NULL;  
        if (!head) {  
            head = new_node;  
            tail = new_node;  
        } else {  
            tail->next = new_node;  
            tail = new_node;  
        }  
    }  
    tail->next = head;  
  
    Node *p = tail;  
    while (p->next != p) {  
        for (int i = 0; i < n; i++) {  
            p = p->next;  
        }  
        Node *temp = p->next;  
        p->next = temp->next;  
        free(temp);  
    }  
  
    printf("The lucky person is no:%d\n", p->id);  
    free(p);  
    return 0;  
}  