Get Next Line

📌 Project Overview

Get Next Line (GNL) is a project that focuses on reading a file line by line, handling different file descriptors, and efficiently managing memory. The goal is to implement a function that reads and returns one line at a time from a file or standard input.

🖥️ Technologies Used

Language: C

System Calls: read, malloc, free

File Management: Handles multiple file descriptors

📋 Project Requirements

Implement get_next_line, which returns a line from a file descriptor.

Manage memory efficiently to avoid leaks.

Handle multiple file descriptors simultaneously.

Ensure the function works with different buffer sizes.

Return NULL when reaching the end of a file or in case of an error.

🔧 Key Features

1️⃣ Reading a Line Efficiently

Uses read() to fetch data in chunks (defined by BUFFER_SIZE).

Stores leftover characters for the next call.

2️⃣ Handling Multiple File Descriptors

Uses a static storage system to keep track of different file descriptors.

Ensures data integrity across multiple calls.

3️⃣ Memory Management

Avoids memory leaks by freeing allocated memory properly.

Uses dynamic memory allocation to store lines.

🏁 How to Use

Include the header file in your project:

#include "get_next_line.h"

Call get_next_line(fd) in a loop to read a file line by line:

int fd = open("file.txt", O_RDONLY);
char *line;
while ((line = get_next_line(fd)))
{
    printf("%s", line);
    free(line);
}
close(fd);

📜 Final Notes

get_next_line is useful for file parsing, log reading, and interactive input handling.

The implementation must be efficient, robust, and memory-leak-free.

The function must work regardless of BUFFER_SIZE, ensuring adaptability.

🔹 This project helps build a deeper understanding of file handling and memory management in C! 🚀
