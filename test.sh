#!/bin/bash

# Diretório de origem para os arquivos .c
SRC_DIR="src"

# Arquivos de origem
SRCS="$SRC_DIR/test-main.c $SRC_DIR/contact.c $SRC_DIR/layout.c $SRC_DIR/contact_layout.c $SRC_DIR/search_engine.c $SRC_DIR/uuid.c $SRC_DIR/tools.c" 

# Flags de compilação
CFLAGS="-Wall -Iinclude"

# Nome do executável
OUTPUT="test"

# Compilação dos arquivos .c para gerar um executável
gcc $CFLAGS $SRCS -o $OUTPUT

# Verifica se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Compilação bem-sucedida. Executando $OUTPUT..."
    
    # Executa o programa compilado
    ./test
else
    echo "Erro na compilação."
fi