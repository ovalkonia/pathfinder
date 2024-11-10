#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
    if (!(c & (~127))) {
        mx_printchar(c);
        return;
    }

    unsigned char lead_byte_mask = 0;
    unsigned char multibyte_seq[4] = { 0 };
    unsigned char curr_byte = 4;
    while (c & 63) { // 00111111
        --curr_byte;
        multibyte_seq[curr_byte] = (c & 191) | 128; // 10xxxxxx
        lead_byte_mask = (lead_byte_mask >> 1) | 128;
        c >>= 6;
    }

    if ((lead_byte_mask >> 1) & multibyte_seq[curr_byte]) {
        --curr_byte;
        lead_byte_mask = (lead_byte_mask >> 1) | 128;
    }
    multibyte_seq[curr_byte] |= lead_byte_mask;
    write(STDOUT_FILENO, multibyte_seq + curr_byte, 4 - curr_byte);
}

