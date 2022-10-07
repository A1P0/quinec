#include <stdio.h>

static const char *c[] = {
"#include <stdio.h>",
"",
"static const char *c[] = {",
"};",
"",
"static const char fmtq[] = { 0x22, 0x25, 0x73, 0x22, 0x2C, 0x0A, 0x00 };",
"static const char fmt[] = { 0x25, 0x73, 0x0A, 0x00 };",
"",
"int",
"main()",
"{",
"        int i;",
"",
"        for (i = 0; i < 3; i++)",
"                printf(fmt, c[i]);",
"",
"        for (i = 0; i < 22; i++)",
"                printf(fmtq, c[i]);",
"",
"        for (i = 3; i < 22; i++)",
"                printf(fmt, c[i]);",
"}",
};

static const char fmtq[] = { 0x22, 0x25, 0x73, 0x22, 0x2C, 0x0A, 0x00 };
static const char fmt[] = { 0x25, 0x73, 0x0A, 0x00 };

int
main()
{
        int i;

        for (i = 0; i < 3; i++)
                printf(fmt, c[i]);

        for (i = 0; i < 22; i++)
                printf(fmtq, c[i]);

        for (i = 3; i < 22; i++)
                printf(fmt, c[i]);
}
