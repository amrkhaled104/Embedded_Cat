#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "global.h"

void DisplayQueueEntry(QueueEntry e) {
    printf("Name: %s, Age: %d\n", e.Name, e.age);
}

void DisplayStackEntry(StackEntry e) {
    printf("Name: %s, Age: %d\n", e.Name, e.age);
}

int main() {
    Queue q;
    Stack s;
    QueueEntry qe1 = {"Alice", 30};
    QueueEntry qe2 = {"Bob", 25};
    StackEntry se1 = {"Charlie", 35};
    StackEntry se2 = {"Diana", 28};

   
    CreatQueue(&q);
    CreateStack(&s);

    
    Append(qe1, &q);
    Append(qe2, &q);

    
    Push(se1, &s);
    Push(se2, &s);

   
    printf("Queue Elements:\n");
    TraverseQueue(&q, DisplayQueueEntry);

    
    printf("\nStack Elements:\n");
    TraverseStack(&s, DisplayStackEntry);

    return 0;
}
