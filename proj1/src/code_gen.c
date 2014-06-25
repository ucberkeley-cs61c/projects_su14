#include "code_gen.h"
#include "parser.h"

/** A counter to prevent the issuance of duplicate labels. */
unsigned label_count = 0;
/** True iff the data segment has already been partially printed. */
int data_seg_opened = 0;
/** True iff the text segment has already been partially printed. */
int text_seg_opened = 0;



void emit_strings(AST *ast) {
    /* TODO: Implement me. */
}

void emit_static_memory() {
    /* TODO: Implement me. */
}

void emit_main(AST *ast) {
    /* TODO: Implement me. */
}

void emit_exit() {
    printf("    li $v0 10\n");
    printf("    syscall\n");
}

void emit_functions(AST *ast) {
    /* TODO: Implement me. */
}
