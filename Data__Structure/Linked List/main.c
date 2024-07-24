#include <stdio.h>
#include "list.h"

// Function to print a ListEntry
void PrintEntry(ListEntry entry) {
    printf("Name: %s, Age: %d\n", entry.Name, entry.age);
}

int main() {
    // Create a list
    List myList;
    CreateList(&myList);

    // Create some entries
    ListEntry e1 = {"Alice", 30};
    ListEntry e2 = {"Bob", 25};
    ListEntry e3 = {"Charlie", 40};

    // Insert entries into the list
    InsertList(0, e1, &myList); // Insert at the beginning
    InsertList(1, e2, &myList); // Insert at the second position
    InsertList(2, e3, &myList); // Insert at the third position

    // Print the list size
    printf("List size after insertions: %d\n", ListSize(&myList));

    // Traverse the list and print each entry
    printf("List contents:\n");
    TraverseList(&myList, PrintEntry);

    // Retrieve an entry from the list
    ListEntry retrievedEntry;
    RetrieveList(1, &retrievedEntry, &myList);
    printf("Retrieved entry at position 1: Name: %s, Age: %d\n", retrievedEntry.Name, retrievedEntry.age);

    // Replace an entry in the list
    ListEntry newEntry = {"David", 35};
    ReplaceList(1, newEntry, &myList);

    // Traverse the list again to see the changes
    printf("List contents after replacement:\n");
    TraverseList(&myList, PrintEntry);

    // Delete an entry from the list
    ListEntry deletedEntry;
    DeleteList(1, &deletedEntry, &myList);
    printf("Deleted entry: Name: %s, Age: %d\n", deletedEntry.Name, deletedEntry.age);

    // Print the list size after deletion
    printf("List size after deletion: %d\n", ListSize(&myList));

    // Traverse the list again to see the changes
    printf("List contents after deletion:\n");
    TraverseList(&myList, PrintEntry);

    // Destroy the list
    DestroyList(&myList);

    // Print the list size after destruction
    printf("List size after destruction: %d\n", ListSize(&myList));

    return 0;
}
