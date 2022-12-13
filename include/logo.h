#ifndef LOGO_PRINTER_H
# define LOGO_PRINTER_H
	
# include <string.h>
# include <stdio.h>
# include <sys/time.h>
# include <stdlib.h>
# include <ctype.h>

const char   *FG_COLOR_BLACK = "\033[0;30m";
const char   *FG_COLOR_RED =	"\033[0;31m";
const char   *FG_COLOR_GREEN = "\033[0;32m";
const char   *FG_COLOR_YELLOW = "\033[0;33m";
const char   *FG_COLOR_BLUE = "\033[0;34m";
const char   *FG_COLOR_MAGENTA = "\033[0;35m";
const char   *FG_COLOR_CYAN = "\033[0;36m";
const char   *FG_COLOR_WHITE = "\033[0;37m";

const int symbols[] = {
    0b01101001100110010110000000000000, // 0
    0b10000100010001000100000000000000, // 1
    0b11100001011010000111000000000000, // 2
    0b11100001111000011110000000000000, // 3
    0b00010101100111110001000000000000, // 4
    0b11111000011000011110000000000000, // 5
    0b01111000111110010111000000000000, // 6
    0b11110001001001001000000000000000, // 7
    0b01101001011010010110000000000000, // 8
    0b01111001011100100100000000000000, // 9

    0b01101001111110011001000000000000, // A
    0b11101001111010011110000000000000, // B
    0b01111000100010000111000000000000, // C
    0b11101001100110011110000000000000, // D
    0b11101000111010001110000000000000, // E
    0b11101000111010001000000000000000, // F
    0b01111000100110010111000000000000, // G
    0b10011001111110011001000000000000, // H
    0b01000100010001000100000000000000, // I
    0b00010001100110010110000000000000, // J
    0b10011010110010101001000000000000, // K
    0b10001000100010001111000000000000, // L
    0b10011011110110011001000000000000, // M
    0b10011101101110011001000000000000, // N
    0b11111001100110011111000000000000, // O
    0b11111001111110001000000000000000, // P
    0b11111001100110111111000000000000, // Q
    0b11111001111110101001000000000000, // R
    0b01111000011000011110000000000000, // S
    0b11110010001000100010000000000000, // T
    0b10011001100110010110000000000000, // U
    0b10011001100101010010000000000000, // V
    0b10011001100111111001000000000000, // W, not good
    0b10011010011001011001000000000000, // X
    0b10010101001000100010000000000000, // Y
    0b11110001011010001111000000000000, // Z

    0b00000000000000000000000000000000, // space
};

# define EMPTY ' '

# define SYMBOL_WIDTH 4
# define SYMBOL_HEIGHT 5

# define SCALE_Y 2
# define SCALE_X 1

# define RANDOM_SYMBOL (char)-1
# define RANDOM_MAX '9'
# define RANDOM_MIN '0'

# define DELAY_VALUE_MMS 7500
# define DELAY_BTWN_ITER 1000000
# define MAX_COUNTER 500
# define DIVIDER (MAX_COUNTER / SYMBOL_HEIGHT)


void		logo_cycle(int *idxs, size_t len);
void	    print_logo(int opened[], int idxs[], int idxs_len);
void 	    print_line(int opened[], int idxs[], int idxs_len, int line_num, int offset);
void		print_opened_line(const char *color, char line);
void        print_closed_line(const char *color);
void        print_symbol(const char c, const char *color);

void		delay(int milli_seconds); 
char	    gen_char(char min, char max);

#endif
