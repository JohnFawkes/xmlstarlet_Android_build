#include <stdio.h>
#include <libxml/xmlversion.h>
static const char depyx_usage[] = {
'X','M','L','S','t','a','r','l','e','t',' ','T','o','o','l','k','i','t',':',' ','C','o','n','v','e','r','t',' ','P','Y','X',' ','i','n','t','o',' ','X','M','L','\n',
'U','s','a','g','e',':',' ','%','s',' ','p','2','x',' ','[','<','p','y','x','-','f','i','l','e','>',']','\n',
'w','h','e','r','e','\n',
' ',' ','<','p','y','x','-','f','i','l','e','>',' ','-',' ','i','n','p','u','t',' ','P','Y','X',' ','d','o','c','u','m','e','n','t',' ','f','i','l','e',' ','n','a','m','e',' ','(','s','t','d','i','n',' ','i','s',' ','u','s','e','d',' ','i','f',' ','m','i','s','s','i','n','g',')','\n',
'\n',
'T','h','e',' ','P','Y','X',' ','f','o','r','m','a','t',' ','i','s',' ','a',' ','l','i','n','e','-','o','r','i','e','n','t','e','d',' ','r','e','p','r','e','s','e','n','t','a','t','i','o','n',' ','o','f','\n',
'X','M','L',' ','d','o','c','u','m','e','n','t','s',' ','t','h','a','t',' ','i','s',' ','d','e','r','i','v','e','d',' ','f','r','o','m',' ','t','h','e',' ','S','G','M','L',' ','E','S','I','S',' ','f','o','r','m','a','t','.','\n',
'(','s','e','e',' ','E','S','I','S',' ','-',' ','I','S','O',' ','8','8','7','9',' ','E','l','e','m','e','n','t',' ','S','t','r','u','c','t','u','r','e',' ','I','n','f','o','r','m','a','t','i','o','n',' ','S','e','t',' ','s','p','e','c',',','\n',
'I','S','O','/','I','E','C',' ','J','T','C','1','/','S','C','1','8','/','W','G','8',' ','N','9','3','1',' ','(','E','S','I','S',')',')','\n',
'\n',
0 };
void fprint_depyx_usage(FILE* out, const char* argv0) {
  fprintf(out, depyx_usage, argv0);
}