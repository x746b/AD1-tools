#ifndef LIBAD1_FILE_READER_H
#define LIBAD1_FILE_READER_H

#include <assert.h>
#include <stdio.h>
#include <sys/stat.h>
#include "libad1_definitions.h"
#include "libad1_reader.h"

unsigned char* read_file_data(ad1_session* session, ad1_item_header* ad1_item);

long read_zlib_chunk(ad1_session* session, unsigned char* output_data_ptr, unsigned long offset,
                     unsigned int zlib_chunk_size, unsigned long decompressed_size);

long zlib_inflate(unsigned char* compressed_data, unsigned int data_size, unsigned char* output,
                  unsigned long decompressed_size);

void stat_ad1_file(ad1_session* session, ad1_item_header* ad1_item, struct stat* stbuf);

void parse_timestamp(struct timespec* time, const char* time_s);

#endif