    asm("    .section    .rodata\n");

    asm("    .align    2\n");

    asm(".LC0:\n");

    asm("    .ascii    \"Enter a hexadecimal number:\" \n");

    asm("    .align    2\n");

    asm(".LC1:\n");

    asm("    .ascii    \"%x\" \n");

    asm("    .align    2\n");

    asm(".LC2:\n");

    asm("    .ascii    \"You have entered %#x (%d).\" \n");

    asm("    .text\n");

    asm("    .align    2\n");

    asm("    .global    main\n");

    asm("    .syntax unified\n");

    asm("    .arm\n");

    asm("    .fpu softvfp\n");

    asm("    .type    main, %function\n");

    asm("main:\n");

    asm("    @ args = 0, pretend = 0, frame = 88\n");

    asm("    @ frame_needed = 1, uses_anonymous_args = 0\n");

    asm("    push    {fp, lr}\n");

    asm("    add    fp, sp, #4\n");

    asm("    sub    sp, sp, #88\n");

    asm("    ldr    r3, .L3\n");

    asm(".LPIC0:\n");

    asm("    add    r3, pc, r3\n");

    asm("    mov    r0, r3\n");

    asm("    bl    printf(PLT)\n");

    asm("    sub    r3, fp, #88\n");

    asm("    mov    r1, r3\n");

    asm("    ldr    r3, .L3+4\n");

    asm(".LPIC1:\n");

    asm("    add    r3, pc, r3\n");

    asm("    mov    r0, r3\n");

    asm("    bl    scanf(PLT)\n");

    asm("    ldr    r3, [fp, #-88]\n");

    asm("    ldr    r2, [fp, #-88]\n");

    asm("    mov    r1, r3\n");

    asm("    ldr    r3, .L3+8\n");

    asm(".LPIC2:\n");

    asm("    add    r3, pc, r3\n");

    asm("    mov    r0, r3\n");

    asm("    bl    printf(PLT)\n");

    asm("    mov    r3, #0\n");

    asm("    mov    r0, r3\n");

    asm("    sub    sp, fp, #4\n");

    asm("    @ sp needed\n");

    asm("    pop    {fp, pc}\n");

    asm(".L4:\n");

    asm("    .align    2\n");

    asm(".L3:\n");

    asm("    .word    .LC0-(.LPIC0+8)\n");

    asm("    .word    .LC1-(.LPIC1+8)\n");

    asm("    .word    .LC2-(.LPIC2+8)\n");

    asm("    .size    main, .-main\n");