<<<<<<< HEAD
=======
## [Main.h](./main.h) This Directory contains all the prototypes. 

>>>>>>> 17aa0df4f25aa844aad6d7ca35b45631ebffebbc
| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |
| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |

## Tasks :page_with_curl:

* `0. Tread lightly, she is near`
  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and
  prints it to the `POSIX` standard output.
  * The parameter `letters` is the number of letters the function should read and print.
  * If the file is `NULL` or cannot be opened or read - returns `0`.
  * If the `write` call fails or does not write the expected number of bytes - returns `0`.
  * Otherwise - returns the actual number of bytes the function can read and print.

* `1. Under the snow`
  * [1-create_file.c](./1-create_file.c): C function that creates a file.
  * The paramter `filename` is the name of the file to create.
  * The parameter `text_content` is a null-terminated string to write to the file.
  * If `text_content` is `NULL`, the function creates an empty file.
  * The created file has the permissions `rw-------`.
  * If the file already exists, the existing permissions are not changed.
  * Existing files are truncated.
  * If `filename` is `NULL` or the funciton fails - returns `-1`.
  * Otherwise - returns `1` on success.

<<<<<<< HEAD
* `2. Speak gently, she can hear`
  * [2-append_text_to_file.c](./2-append_text_to_file.c): C function that appends text at
  the end of a file.
  * The parameter `filename` is the name of the file.
  * The parameter `text_content` is a null-terminated string to append to the file.
  * The function does not create the file if it does not exist.
  * If `text_content` is `NULL`, nothing is added to the file.
  * If the function fails or `filename` is `NULL` - returns `-1`.
  * If the file does not exist or the user lacks write permissions on the file - returns `-1`.
  * Otherwise - returns `1`.

=======
>>>>>>> 17aa0df4f25aa844aad6d7ca35b45631ebffebbc
