# Linked List Implementation

This project provides a simple implementation of a singly linked list in C. It includes functions to create, manage, and manipulate a linked list of entries, where each entry consists of a name and an age.

## File Overview

1. **list.h**  
   Header file defining the data structures and function prototypes for managing the linked list.

2. **list.c**  
   Implementation file containing the function definitions for managing the linked list.

3. **main.c**  
   Contains the `main` function demonstrating how to use the linked list functions.

## Data Structures

### `DATA`
- **Name**: A string of up to 10 characters.
- **age**: An integer representing the age.

### `ListEntry`
Alias for `DATA`. Represents an entry in the linked list.

### `listnode`
- **entry**: A `ListEntry` object.
- **Next**: Pointer to the next `listnode` in the list.

### `List`
- **Head**: Pointer to the first `listnode` in the list.
- **size**: Integer representing the number of entries in the list.

## Functions

- **CreateList(List *pl)**  
  Initializes an empty list.

- **ListEmpty(List *pl)**  
  Checks if the list is empty. Returns 1 if empty, 0 otherwise.

- **ListFull(List *pl)**  
  Checks if the list is full. Always returns 0 for this implementation.

- **ListSize(List *pl)**  
  Returns the number of entries in the list.

- **DestroyList(List *pl)**  
  Destroys the list and frees all allocated memory.

- **InsertList(int pos, ListEntry e, List *pl)**  
  Inserts an entry at the specified position in the list.

- **DeleteList(int pos, ListEntry *pe, List *pl)**  
  Deletes the entry at the specified position and stores it in `pe`.

- **TraverseList(List *pl, void (*Visit)(ListEntry))**  
  Traverses the list and applies the `Visit` function to each entry.

- **RetrieveList(int pos, ListEntry *pe, List *pl)**  
  Retrieves the entry at the specified position and stores it in `pe`.

- **ReplaceList(int pos, ListEntry e, List *pl)**  
  Replaces the entry at the specified position with a new entry.

