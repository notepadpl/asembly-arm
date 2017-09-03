    asm("    .section    .rodata\n");

    asm("    .align    2\n");

    asm(".LC0:\n");

    asm("    .ascii    \" Hello world ! \" \n");

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

    asm("    push    {fp, lr}\n");

    asm("    add    fp, sp, #4\n");

    asm("    sub    sp, sp, #16\n");

    asm("    ldr    r3, .L3\n");

    asm(".LPIC0:\n");

    asm("    add    r3, pc, r3\n");

    asm("    sub    ip, fp, #20\n");

    asm("    ldm    r3, {r0, r1, r2, r3}\n");

    asm("    stmia    ip!, {r0, r1, r2}\n");

    asm("    strb    r3, [ip]\n");

    asm("    sub    r3, fp, #20\n");

    asm("    mov    r0, r3\n");

    asm("    bl    puts(PLT)\n");

    asm("    mov    r3, #0\n");

    asm("    mov    r0, r3\n");

    asm("    sub    sp, fp, #4\n");

    asm("    @ sp needed\n");

    asm("    pop    {fp, pc}\n");

    asm(".L4:\n");

    asm("    .align    2\n");

    asm(".L3:\n");

    asm("    .word    .LC0-(.LPIC0+8)\n");

    asm("    .size    main, .-main\n");