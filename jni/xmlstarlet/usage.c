#include <stdio.h>
#include <libxml/xmlversion.h>
static const char usage[] = {
'X','M','L','S','t','a','r','l','e','t',' ','T','o','o','l','k','i','t',':',' ','C','o','m','m','a','n','d',' ','l','i','n','e',' ','u','t','i','l','i','t','i','e','s',' ','f','o','r',' ','X','M','L','\n',
'C','o','m','p','i','l','e','d',' ','B','y',':',' ','J','a','m','e','s','3','4','6','0','2','\n',
'U','s','a','g','e',':',' ','%','s',' ','[','<','o','p','t','i','o','n','s','>',']',' ','<','c','o','m','m','a','n','d','>',' ','[','<','c','m','d','-','o','p','t','i','o','n','s','>',']','\n',
'w','h','e','r','e',' ','<','c','o','m','m','a','n','d','>',' ','i','s',' ','o','n','e',' ','o','f',':','\n',
' ',' ','e','d',' ',' ',' ',' ','(','o','r',' ','e','d','i','t',')',' ',' ',' ',' ',' ',' ','-',' ','E','d','i','t','/','U','p','d','a','t','e',' ','X','M','L',' ','d','o','c','u','m','e','n','t','(','s',')','\n',
' ',' ','s','e','l',' ',' ',' ','(','o','r',' ','s','e','l','e','c','t',')',' ',' ',' ',' ','-',' ','S','e','l','e','c','t',' ','d','a','t','a',' ','o','r',' ','q','u','e','r','y',' ','X','M','L',' ','d','o','c','u','m','e','n','t','(','s',')',' ','(','X','P','A','T','H',',',' ','e','t','c',')','\n',
' ',' ','t','r',' ',' ',' ',' ','(','o','r',' ','t','r','a','n','s','f','o','r','m',')',' ','-',' ','T','r','a','n','s','f','o','r','m',' ','X','M','L',' ','d','o','c','u','m','e','n','t','(','s',')',' ','u','s','i','n','g',' ','X','S','L','T','\n',
' ',' ','v','a','l',' ',' ',' ','(','o','r',' ','v','a','l','i','d','a','t','e',')',' ',' ','-',' ','V','a','l','i','d','a','t','e',' ','X','M','L',' ','d','o','c','u','m','e','n','t','(','s',')',' ','(','w','e','l','l','-','f','o','r','m','e','d','/','D','T','D','/','X','S','D','/','R','e','l','a','x','N','G',')','\n',
' ',' ','f','o',' ',' ',' ',' ','(','o','r',' ','f','o','r','m','a','t',')',' ',' ',' ',' ','-',' ','F','o','r','m','a','t',' ','X','M','L',' ','d','o','c','u','m','e','n','t','(','s',')','\n',
' ',' ','e','l',' ',' ',' ',' ','(','o','r',' ','e','l','e','m','e','n','t','s',')',' ',' ','-',' ','D','i','s','p','l','a','y',' ','e','l','e','m','e','n','t',' ','s','t','r','u','c','t','u','r','e',' ','o','f',' ','X','M','L',' ','d','o','c','u','m','e','n','t','\n',
' ',' ','c','1','4','n',' ',' ','(','o','r',' ','c','a','n','o','n','i','c',')',' ',' ',' ','-',' ','X','M','L',' ','c','a','n','o','n','i','c','a','l','i','z','a','t','i','o','n','\n',
' ',' ','l','s',' ',' ',' ',' ','(','o','r',' ','l','i','s','t',')',' ',' ',' ',' ',' ',' ','-',' ','L','i','s','t',' ','d','i','r','e','c','t','o','r','y',' ','a','s',' ','X','M','L','\n',
' ',' ','e','s','c',' ',' ',' ','(','o','r',' ','e','s','c','a','p','e',')',' ',' ',' ',' ','-',' ','E','s','c','a','p','e',' ','s','p','e','c','i','a','l',' ','X','M','L',' ','c','h','a','r','a','c','t','e','r','s','\n',
' ',' ','u','n','e','s','c',' ','(','o','r',' ','u','n','e','s','c','a','p','e',')',' ',' ','-',' ','U','n','e','s','c','a','p','e',' ','s','p','e','c','i','a','l',' ','X','M','L',' ','c','h','a','r','a','c','t','e','r','s','\n',
' ',' ','p','y','x',' ',' ',' ','(','o','r',' ','x','m','l','n',')',' ',' ',' ',' ',' ',' ','-',' ','C','o','n','v','e','r','t',' ','X','M','L',' ','i','n','t','o',' ','P','Y','X',' ','f','o','r','m','a','t',' ','(','b','a','s','e','d',' ','o','n',' ','E','S','I','S',' ','-',' ','I','S','O',' ','8','8','7','9',')','\n',
' ',' ','p','2','x',' ',' ',' ','(','o','r',' ','d','e','p','y','x',')',' ',' ',' ',' ',' ','-',' ','C','o','n','v','e','r','t',' ','P','Y','X',' ','i','n','t','o',' ','X','M','L','\n',
'<','o','p','t','i','o','n','s','>',' ','a','r','e',':','\n',
' ',' ','-','q',' ','o','r',' ','-','-','q','u','i','e','t',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','n','o',' ','e','r','r','o','r',' ','o','u','t','p','u','t','\n',
' ',' ','-','-','d','o','c','-','n','a','m','e','s','p','a','c','e',' ',' ',' ',' ',' ',' ','-',' ','e','x','t','r','a','c','t',' ','n','a','m','e','s','p','a','c','e',' ','b','i','n','d','i','n','g','s',' ','f','r','o','m',' ','i','n','p','u','t',' ','d','o','c',' ','(','d','e','f','a','u','l','t',')','\n',
' ',' ','-','-','n','o','-','d','o','c','-','n','a','m','e','s','p','a','c','e',' ',' ',' ','-',' ','d','o','n','\'','t',' ','e','x','t','r','a','c','t',' ','n','a','m','e','s','p','a','c','e',' ','b','i','n','d','i','n','g','s',' ','f','r','o','m',' ','i','n','p','u','t',' ','d','o','c','\n',
' ',' ','-','-','v','e','r','s','i','o','n',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','s','h','o','w',' ','v','e','r','s','i','o','n','\n',
' ',' ','-','-','h','e','l','p',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','s','h','o','w',' ','h','e','l','p','\n',
'W','h','e','r','e','v','e','r',' ','f','i','l','e',' ','n','a','m','e',' ','m','e','n','t','i','o','n','e','d',' ','i','n',' ','c','o','m','m','a','n','d',' ','h','e','l','p',' ','i','t',' ','i','s',' ','a','s','s','u','m','e','d','\n',
't','h','a','t',' ','U','R','L',' ','c','a','n',' ','b','e',' ','u','s','e','d',' ','i','n','s','t','e','a','d',' ','a','s',' ','w','e','l','l','.','\n',
'\n',
'T','y','p','e',':',' ','%','s',' ','<','c','o','m','m','a','n','d','>',' ','-','-','h','e','l','p',' ','<','E','N','T','E','R','>',' ','f','o','r',' ','c','o','m','m','a','n','d',' ','h','e','l','p','\n',
'\n',
0 };
void fprint_usage(FILE* out, const char* argv0) {
  fprintf(out, usage, argv0, argv0);
}
