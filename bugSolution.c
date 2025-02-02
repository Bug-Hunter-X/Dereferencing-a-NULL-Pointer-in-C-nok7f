int main() {
  int *ptr = NULL;
  if (ptr != NULL) {
    *ptr = 10; 
  } else {
    fprintf(stderr, "Error: Pointer is NULL\n");
    return 1; // Indicate an error
  }
  return 0;
}