cmake_minimum_required(VERSION 3.8)

project("SnippetsC" C)

add_executable(SnippetsC
        main.c

        # Basics
        basics/typedef_struct.c
        basics/basics_defs.h
        basics/code_file_structure.c
        basics/arithmetic_operators.c
        basics/float_double.c
        basics/assert_snippet.c
        basics/variable_number_args.c
        basics/struct_basic.c


        # IO
        io/read_file_demo.c
        io/printf_scanf_snippet.c
        io/iodefs.h
        io/scanf_snippet.c
        io/printf_snippet.c
        io/printf_decimals.c
        io/puts_snippet.c
        io/getc_snippet.c
        io/scanf_hex_octal.c


        # Math
        math/mathdefs.h
        math/pow_snippet.c
        math/sqrt_snippet.c
        math/ceil_floor.c
        math/modulus_snippet.c


        # Strings
        strings/textdefs.h
        strings/strncmp_startswith.c
        strings/not_ready/substring.c
        strings/not_ready/strlenAW.c
        strings/not_ready/ffof.c


        # Errors
        errors/error_defs.h
        errors/perror_snippet.c
        errors/strerror_perror.c
        errors/fprintf_stderr.c

        )


set(CMAKE_C_FLAGS "-std=c99")

