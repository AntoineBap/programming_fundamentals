*This activity has been created as part of the 42 curriculum by abaptist.*

# get_next_line

> Reads a file descriptor line by line, one call at a time.

## Description

`get_next_line` is a C function that returns the next line from a file descriptor each time it is called. It handles any file descriptor (regular file, stdin, etc.) and works with an adjustable read_buffer size defined at compile time.

---

## Prototype

char *get_next_line(int fd);

**Parameters**

| Parameter | Description |
|-----------|-------------|
| `fd` | File descriptor to read from |

**Return value**

- The next line read, including the trailing `\n` if present
- `NULL` if there is nothing more to read, or if an error occurred

---

## Files

| File | Description |
|------|-------------|
| `get_next_line.c` | Core function and helper logic (`load_fullline`, `extract_line`, `extract_leftover`) |
| `get_next_line.h` | Header — prototypes and `read_buffer_SIZE` define |
| `get_next_line_utils.c` | Utility functions (`ft_strlen`, `ft_strdup`, `ft_strndup`, `ft_strchr`, `ft_strjoin`) |

---

## Compilation

```bash
cc -Wall -Wextra -Werror -D read_buffer_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl
```

You can set `read_buffer_SIZE` to any positive value at compile time. Default is `1025`.


## How it works

Each call to `get_next_line` goes through three steps:

1. **`load_fullline`** — fills an internal read_buffer by calling `read()` repeatedly until a `\n` is found or EOF is reached. Uses a `static` variable to persist leftover data between calls.
2. **`extract_line`** — extracts the current line (up to and including `\n`) from the accumulated read_buffer.
3. **`extract_leftover`** — saves everything after `\n` into the static variable for the next call.

# Sources

- Google (stackOverflow, websites similar to man)
- man
- Claude for the readME