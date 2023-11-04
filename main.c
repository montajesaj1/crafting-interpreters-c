#include "common.h"
#include "debug.h"
#include "chunk.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);

    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}

// TODO: implement debug.h pg.237
