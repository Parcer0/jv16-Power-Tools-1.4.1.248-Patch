/*
  Name: jv16 PowerTools Patch
  Copyright: [N]eo [S]ecurity [T]eam [NST]®
  Author: HaCkZaTaN <hck_zatan@hotmail.com>
  Date: 05/02/05 22:21
  Contact:  Irc.InfoGroup.cl #neosecurityteam
  Description: jv16 Power Tools 1.4.1.248 Patch
*/

#include <stdio.h>

typedef struct bytepair BYTEPAIR;

struct bytepair
{
long offset;
char val;
}; 

static const BYTEPAIR byte_pairs[119]= { 
{0x000C934C, 0x00},
{0x000C934D, 0x2C},
{0x000C934E, 0x00},
{0x000C934F, 0x00},
{0x000CBF4F, 0x90},
{0x000CBF50, 0xC6},
{0x000CBF51, 0x05},
{0x000CBF52, 0x30},
{0x000CBF53, 0x4B},
{0x000CBF54, 0x4E},
{0x000CBF56, 0xEB},
{0x000CBF57, 0x66},
{0x000CBF58, 0xC7},
{0x000CBF59, 0x05},
{0x000CBF5A, 0x9B},
{0x000CBF5B, 0x4B},
{0x000CBF5C, 0x4E},
{0x000CBF5E, 0x90},
{0x000CBF5F, 0x90},
{0x000CBF60, 0xC6},
{0x000CBF61, 0x05},
{0x000CBF62, 0xA0},
{0x000CBF63, 0x4B},
{0x000CBF64, 0x4E},
{0x000CBF66, 0xEB},
{0x000CBF67, 0xC7},
{0x000CBF68, 0x05},
{0x000CBF69, 0x31},
{0x000CBF6A, 0x07},
{0x000CBF6B, 0x56},
{0x000CBF6D, 0xE9},
{0x000CBF6E, 0x41},
{0x000CBF6F, 0x24},
{0x000CBF70, 0x0F},
{0x000CBF71, 0xEB},
{0x000CBF72, 0x1B},
{0x000CBF73, 0x90},
{0x000CBF74, 0x90},
{0x000CBF75, 0x90},
{0x000CBF76, 0x90},
{0x000CBF77, 0x8B},
{0x000CBF78, 0x4D},
{0x000CBF79, 0xFC},
{0x000CBF7A, 0xC6},
{0x000CBF7B, 0x01},
{0x000CBF7D, 0x33},
{0x000CBF7E, 0xC9},
{0x000CBF7F, 0xC7},
{0x000CBF80, 0x05},
{0x000CBF81, 0x31},
{0x000CBF82, 0x07},
{0x000CBF83, 0x56},
{0x000CBF85, 0x0F},
{0x000CBF86, 0x84},
{0x000CBF87, 0xD3},
{0x000CBF89, 0xE9},
{0x000CBF8A, 0xA9},
{0x000CBF8B, 0xDB},
{0x000CBF8C, 0xF0},
{0x000CBF8D, 0xFF},
{0x000CBF8E, 0xC7},
{0x000CBF8F, 0x05},
{0x000CBF90, 0x3E},
{0x000CBF91, 0x4D},
{0x000CBF92, 0x4E},
{0x000CBF94, 0xE9},
{0x000CBF95, 0x62},
{0x000CBF96, 0xDE},
{0x000CBF97, 0x16},
{0x000CBF98, 0xC6},
{0x000CBF99, 0x05},
{0x000CBF9A, 0x42},
{0x000CBF9B, 0x4D},
{0x000CBF9C, 0x4E},
{0x000CBF9F, 0x68},
{0x000CBFA0, 0x7C},
{0x000CBFA1, 0x99},
{0x000CBFA2, 0x59},
{0x000CBFA4, 0xC3},
{0x000CBFA5, 0xC6},
{0x000CBFA6, 0x05},
{0x000CBFA7, 0x30},
{0x000CBFA8, 0x4B},
{0x000CBFA9, 0x4E},
{0x000CBFAB, 0x75},
{0x000CBFAC, 0x66},
{0x000CBFAD, 0xC7},
{0x000CBFAE, 0x05},
{0x000CBFAF, 0x9B},
{0x000CBFB0, 0x4B},
{0x000CBFB1, 0x4E},
{0x000CBFB3, 0x7E},
{0x000CBFB4, 0x05},
{0x000CBFB5, 0xC6},
{0x000CBFB6, 0x05},
{0x000CBFB7, 0xA0},
{0x000CBFB8, 0x4B},
{0x000CBFB9, 0x4E},
{0x000CBFBB, 0x7E},
{0x000CBFBC, 0xC7},
{0x000CBFBD, 0x05},
{0x000CBFBE, 0x3E},
{0x000CBFBF, 0x4D},
{0x000CBFC0, 0x4E},
{0x000CBFC2, 0xE8},
{0x000CBFC3, 0xE1},
{0x000CBFC4, 0xEF},
{0x000CBFC5, 0xF1},
{0x000CBFC6, 0xC6},
{0x000CBFC7, 0x05},
{0x000CBFC8, 0x42},
{0x000CBFC9, 0x4D},
{0x000CBFCA, 0x4E},
{0x000CBFCC, 0xFF},
{0x000CBFCD, 0xE9},
{0x000CBFCE, 0x6C},
{0x000CBFCF, 0x21},
{0x000CBFD0, 0xE9},
{0x000CBFD1, 0xFF},
};

int main(int argc, char *argv[])
{
    system("copy /B *.exe jv16_PowerTools.exe.nst");
    system("del /F /Q *.exe");
    system("ren jv16_PowerTools.exe.nst jv16_PowerTools.exe");
    
    FILE *jv16_PowerTools;
    FILE *fp;
    int i;
 printf("\n\t±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±Ü\n"
        "\t±Ûßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß±Û\n"
        "\t±Û                                                         ±Û\n"
        "\t±Û           [N]eo [S]ecurity [T]eam [N][S][T]             ±Û\n"
        "\t±Û                 [jv16 PowerTools Patch]                 ±Û\n"
        "\t±Û                jv16 Power Tools 1.4.1.248               ±Û\n"
        "\t±Û                                                         ±Û\n"
        "\t±Û ÛÛÛÛÛÛÛ   ÛÛÛÛÛÛÛ   ÛÛÛÛ   ÛÛ ÛÛ ÛÛÛÛ  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  ÛÛÛÛ  ÛÛ  ÛÛ   ÛÛÛ   ÛÛ ÛÛÛ  ÛÛÛ  ÛÛÛ ÛÛ ÛÛ ÛÛ ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  Û ÛÛÛ ÛÛ  ÛÛ   ÛÛÛ   ÛÛ      ÛÛÛ  ÛÛÛ    ÛÛ    ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  Û ÛÛÛ ÛÛ  ÛÛ   ÛÛÛ   ÛÛÛÛ    ÛÛÛ  ÛÛÛ    ÛÛ    ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  Û   ÛÛÛÛ  ÛÛ   ÛÛÛ    ÛÛÛÛÛ  ÛÛÛ  ÛÛÛ    ÛÛ    ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  Û    ÛÛÛ  ÛÛ   ÛÛÛ      ÛÛÛ  ÛÛÛ  ÛÛÛ    ÛÛ    ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ  Û    ÛÛÛ  ÛÛ   ÛÛÛ   ÛÛ ÛÛÛ  ÛÛÛ  ÛÛÛ    ÛÛ    ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ ÛÛÛ    ÛÛ  ÛÛ   ÛÛÛ   Û ÛÛ    ÛÛÛ  ÛÛÛ   ÛÛÛÛ   ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛ            ÛÛ   ÛÛÛ           ÛÛÛ  ÛÛÛ          ÛÛÛ ±Û\n"
        "\t±Û ÛÛÛÛ          ÛÛÛ   ÛÛÛÛ         ÛÛÛÛ  ÛÛÛÛ        ÛÛÛÛ ±Û\n"
        "\t±Û                                                         ±Û\n"
        "\t±Û                 [ HaCkZaTaN  ..... ]                    ±Û\n"
        "\t±Û                 [ Paisterist ..... ]                    ±Û\n"
        "\t±Û                 [ Daemon21   ..... ]                    ±Û\n"
        "\t±Û            [ Http://NeoSecurityTeam.Net ]               ±Û\n"
        "\t±Û                                                         ±Û\n"
        "\t±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±Û\n"
        "\t ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n\n\n");
        getchar();

jv16_PowerTools=fopen("jv16_PowerTools.exe","r+");
if (jv16_PowerTools == (FILE *)0)
{
printf("jv16_PowerTools.exe.exe not found. Aborting.\n\n");
printf("Hit <Enter> to quit.");
getchar();
return 1;
}
printf("Starting...\n");
for (i = 0; i < 119; i++)
{
fseek(jv16_PowerTools, byte_pairs[i].offset, SEEK_SET);
fwrite(&byte_pairs[i].val, 1, 1, jv16_PowerTools);
}
fclose(jv16_PowerTools);

printf("->Patch completed.\n\n");
printf("Hit <Enter> to quit.");
getchar();
return 0;
}
