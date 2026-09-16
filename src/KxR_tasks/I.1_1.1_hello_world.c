// first program C with using localization header for russian language output
//for switching utf-8 for russia language in console: COntrol Panel/Language/Region standarts/Addition/Choose sysytem language -> use unicode UTF_8
	
#include <stdio.h>
#include <locale.h>

 
int main () 
{
    char c = 0x30;
	setlocale(LC_ALL,"Rus");
        
        printf("%d,%c,%x",c,c,c);
    
    return 0 ;
    
}