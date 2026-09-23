*This activity has been created as part of the 42 curriculum by abaptist.*

# Description
The purpose of this exercise is to understand how printf works and recreate our own version of it.

Here is a list of all the possible conversions for our printf : 

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

## Lib Description

`ft_putstr` Prints a string (as defined by the common C convention).
`ft_putchar` Prints a single character.
`ft_putnbr` Prints an integer in base 10.
`ft_putnbr_unsigned` Prints an unsigned decimal (base 10) number.
`ft_putnbr_hexa_lower` Prints a number in hexadecimal (base 16) lowercase format.
`ft_putnbr_hexa_upper` Prints a number in hexadecimal (base 16) uppercase format.
`printer_conversion` Converts the argument to the right value according to the printf args
`ft_putnbr_ptr` The void * pointer argument has to be printed in hexadecimal format.
`ft_printf` 

# Instructions

### Compilation

`make`

This produces `libftprintf.a` at the root of the repository.


### Linking with your project

`cc -Wall -Wextra -Werror your_file.c libftprintf.a`

# Ressources

- Man (man function)
- Google
- Claude