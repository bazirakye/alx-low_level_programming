## File descriptors

In Unix-like operating systems, a file descriptor is a unique identifier that is used to access a file or other input/output (I/O) resource. 
It is a non-negative integer value that represents an open file or I/O stream within a process.

When a process opens a file or other I/O resource, the operating system assigns it a file descriptor that can be used to read from, write to, or otherwise manipulate the resource. File descriptors are used extensively in Unix-based systems, where almost everything is treated as a file, including regular files, directories, network sockets, and other I/O resources.

In C programming language, file descriptors are represented using the int data type and are manipulated using functions defined in the standard C library, such as open(), read(), write(), and close().
