asm("    .section    .rodata\n");

asm("    .align    2\n");

asm(".LC0:\n");

asm("    .ascii    \" Uzycie:%s nazwa_pliku  \"\n");

asm("    .align    2\n");

asm(".LC1:\n");

asm("    .ascii    \"w\" \n");

asm("    .align    2\n");

asm(".LC2:\n");

asm("    .ascii    \" Nie moge otworzyc pliku % s \ 012 \ 000 \" \n");

asm("    .align    2\n");

asm(".LC3:\n");

asm("    .ascii    \" Wcisnij Ctrl + D + Enter lub Ctrl + Z + Enter aby zakonczyc \" \n");

asm("    .text\n");

asm("    .align    2\n");

asm("    .global    main\n");

asm("    .syntax unified\n");

asm("    .arm\n");

asm("    .fpu softvfp\n");

asm("    .type    main, %function\n");

asm("main:\n");

asm("    @ args = 0, pretend = 0, frame = 16\n");

asm("    @ frame_needed = 1, uses_anonymous_args = 0\n");

asm("    push    {r4, fp, lr}\n");

asm("    add    fp, sp, #8\n");

asm("    sub    sp, sp, #20\n");

asm("    str    r0, [fp, #-24]\n");

asm("    str    r1, [fp, #-28]\n");

asm("    ldr    r4, .L7\n");

asm(".LPIC1:\n");

asm("    add    r4, pc, r4\n");

asm("    ldr    r3, [fp, #-24]\n");

asm("    cmp    r3, #1\n");

asm("    bgt    .L2\n");

asm("    ldr    r3, [fp, #-28]\n");

asm("    ldr    r3, [r3]\n");

asm("    mov    r2, r3\n");

asm("    ldr    r3, .L7+4\n");

asm(".LPIC0:\n");

asm("    add    r3, pc, r3\n");

asm("    mov    r1, r3\n");

asm("    ldr    r3, .L7+8\n");

asm("    ldr    r3, [r4, r3]\n");

asm("    add    r0, r3, #168\n");

asm("    bl    fprintf(PLT)\n");

asm("    mvn    r0, #0\n");

asm("    bl    exit(PLT)\n");

asm(".L2:\n");

asm("    ldr    r3, [fp, #-28]\n");

asm("    add    r3, r3, #4\n");

asm("    ldr    r3, [r3]\n");

asm("    ldr    r2, .L7+12\n");

asm(".LPIC2:\n");

asm("    add    r2, pc, r2\n");

asm("    mov    r1, r2\n");

asm("    mov    r0, r3\n");

asm("    bl    fopen(PLT)\n");

asm("    str    r0, [fp, #-16]\n");

asm("    ldr    r3, [fp, #-16]\n");

asm("    cmp    r3, #0\n");

asm("    bne    .L3\n");

asm("    ldr    r3, [fp, #-28]\n");

asm("    add    r3, r3, #4\n");

asm("    ldr    r3, [r3]\n");

asm("    mov    r2, r3\n");

asm("    ldr    r3, .L7+16\n");

asm(".LPIC3:\n");

asm("    add    r3, pc, r3\n");

asm("    mov    r1, r3\n");

asm("    ldr    r3, .L7+8\n");

asm("    ldr    r3, [r4, r3]\n");

asm("    add    r0, r3, #168\n");

asm("    bl    fprintf(PLT)\n");

asm("    mvn    r0, #0\n");

asm("    bl    exit(PLT)\n");

asm(".L3:\n");

asm("    ldr    r3, .L7+20\n");

asm(".LPIC4:\n");

asm("    add    r3, pc, r3\n");

asm("    mov    r0, r3\n");

asm("    bl    puts(PLT)\n");

asm("    b    .L4\n");

asm(".L5:\n");

asm("    ldr    r3, .L7+8\n");

asm("    ldr    r3, [r4, r3]\n");

asm("    add    r1, r3, #84\n");

asm("    ldr    r0, [fp, #-20]\n");

asm("    bl    fputc(PLT)\n");

asm("    ldr    r1, [fp, #-16]\n");

asm("    ldr    r0, [fp, #-20]\n");

asm("    bl    fputc(PLT)\n");

asm(".L4:\n");

asm("    ldr    r3, .L7+8\n");

asm("    ldr    r3, [r4, r3]\n");

asm("    mov    r0, r3\n");

asm("    bl    fgetc(PLT)\n");

asm("    str    r0, [fp, #-20]\n");

asm("    ldr    r3, [fp, #-20]\n");

asm("    cmn    r3, #1\n");

asm("    bne    .L5\n");

asm("    ldr    r0, [fp, #-16]\n");

asm("    bl    fclose(PLT)\n");

asm("    mov    r3, #0\n");

asm("    mov    r0, r3\n");

asm("    sub    sp, fp, #8\n");

asm("    @ sp needed\n");

asm("    pop    {r4, fp, pc}\n");

asm(".L8:\n");

asm("    .align    2\n");

asm(".L7:\n");

asm("    .word    _GLOBAL_OFFSET_TABLE_-(.LPIC1+8)\n");

asm("    .word    .LC0-(.LPIC0+8)\n");

asm("    .word    __sF(GOT)\n");

asm("    .word    .LC1-(.LPIC2+8)\n");

asm("    .word    .LC2-(.LPIC3+8)\n");

asm("    .word    .LC3-(.LPIC4+8)\n");

asm("    .size    main, .-main\n");