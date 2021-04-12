
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <limits.h>
int programa = 0;
int ejercicio = 0;
int main()
{
    char desicion[2];
    system("git clone https://github.com/angelo-dising/Programas");
    char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
  FILE *f;




 	f = fopen ( "HELP_MODULE.py", "wt" );
 	fputs("from pathlib import Path\n",f);
     fputs("import os\n",f);
     fputs("import shutil\n",f);
     fputs("wd = os.getcwd()\n",f);
     fputs("from distutils.dir_util import copy_tree\n",f);
     fputs("wd = wd + \"\\\\Programas\"\n",f);
     fputs("DIRECTORIO_ORIGEN = wd\n",f);
     fputs("DIRECTORIO_DESTINO = \"C:\\\\DATAS\"\n",f);
     fputs("if os.path.exists(DIRECTORIO_DESTINO) == False:\n",f);
     fputs("\tprint(\"Copiando...\")\n",f);
     fputs("\tcopy_tree(DIRECTORIO_ORIGEN, DIRECTORIO_DESTINO)\n",f);
     fputs("\tprint(\"Copiado\")\n",f);
     
     fclose(f);
        system("python HELP_MODULE.py");

do{
printf("INGRESE EL NUMERO DE EL PROGRAMA QUE DESEA (SOLO EL NUMERO)\n");
scanf("%d",&programa);
switch (programa)
{
case 1:
    system("C:\\\\DATAS\\\\1.exe");
    break;
case 2:
    system("C:\\\\DATAS\\\\2.exe");
    break;
case 3:
    system("C:\\\\DATAS\\\\3.exe");
    break;
case 4:
    system("C:\\\\DATAS\\\\4.exe");
    break;
case 5:
    system("C:\\\\DATAS\\\\5.exe");
    break;
case 6:
    system("C:\\\\DATAS\\\\6.exe");
    break;
case 7:
    system("C:\\\\DATAS\\\\7.exe");
    break;
case 8:
    system("C:\\\\DATAS\\\\8.exe");
    break;
case 9:
    system("C:\\\\DATAS\\\\9.exe");
    break;
case 10:
    system("C:\\\\DATAS\\\\10.exe");
    break;
case 11:
    system("C:\\\\DATAS\\\\11.exe");
    break;
case 12:
    system("C:\\\\DATAS\\\\12.exe");
    break;
case 13:
    system("C:\\\\DATAS\\\\13.exe");
    break;
case 14:
    system("C:\\\\DATAS\\\\14.exe");
    break;
case 15:
    system("C:\\\\DATAS\\\\15.exe");
    break;
case 16:
    system("C:\\\\DATAS\\\\16.exe");
    break;
case 17:
    system("C:\\\\DATAS\\\\17.exe");
    break;
case 18:
    system("C:\\\\DATAS\\\\18.exe");
    break;
case 19:
    system("C:\\\\DATAS\\\\19.exe");
    break;
case 20:
    system("C:\\\\DATAS\\\\20.exe");
    break;
case 21:
    system("C:\\\\DATAS\\\\21.exe");
    break;
case 22:
    system("C:\\\\DATAS\\\\22.exe");
    break;
case 23:
    system("C:\\\\DATAS\\\\23.exe");
    break;
case 24:
    system("C:\\\\DATAS\\\\24.exe");
    break;
case 25:
    system("C:\\\\DATAS\\\\25.exe");
    break;
case 26:
    system("C:\\\\DATAS\\\\26.exe");
    break;
case 27:
    system("C:\\\\DATAS\\\\27.exe");
    break;
case 28:
    system("C:\\\\DATAS\\\\28.exe");
    break;
case 29:
    system("C:\\\\DATAS\\\\29.exe");
    break;
case 30:
    system("C:\\\\DATAS\\\\30.exe");
    break;
case 31:
    system("C:\\\\DATAS\\\\31.exe");
    break;
case 32:
    system("C:\\\\DATAS\\\\32.exe");
    break;
case 33:
    system("C:\\\\DATAS\\\\33.exe");
    break;
case 34:
    system("C:\\\\DATAS\\\\34.exe");
    break;
case 35:
    system("C:\\\\DATAS\\\\35.exe");
    break;
case 36:
    system("C:\\\\DATAS\\\\36.exe");
    break;
case 37:
    system("C:\\\\DATAS\\\\37.exe");
    break;
case 38:
    system("C:\\\\DATAS\\\\38.exe");
    break;
case 39:
    system("C:\\\\DATAS\\\\39.exe");
    break;
case 40:
    system("C:\\\\DATAS\\\\40.exe");
    break;
case 41:
    system("C:\\\\DATAS\\\\41.exe");
    break;
case 42:
    system("C:\\\\DATAS\\\\42.exe");
    break;
case 43:
    system("C:\\\\DATAS\\\\43.exe");
    break;
case 44:
    system("C:\\\\DATAS\\\\44.exe");
    break;
case 45:
    system("C:\\\\DATAS\\\\45.exe");
    break;
case 46:
    system("C:\\\\DATAS\\\\46.exe");
    break;
case 47:
    system("C:\\\\DATAS\\\\47.exe");
    break;
case 48:
    system("C:\\\\DATAS\\\\48.exe");
    break;
case 49:
    system("C:\\\\DATAS\\\\49.exe");
    break; 
case 50:
    system("C:\\\\DATAS\\\\50.exe");
    break;
case 51:
    system("C:\\\\DATAS\\\\51.exe");
    break;
case 52:
    system("C:\\\\DATAS\\\\52.exe");
    break;
case 53:
    system("C:\\\\DATAS\\\\53.exe");
    break;
case 54:
    system("C:\\\\DATAS\\\\54.exe");
    break;
case 55:
    system("C:\\\\DATAS\\\\55.exe");
    break;
case 56:
    system("C:\\\\DATAS\\\\56.exe");
    break;   
case 57:
    system("C:\\\\DATAS\\\\57.exe");
    break;
case 58:
    system("C:\\\\DATAS\\\\58.exe");
    break;                  
default:
printf("ESE PROGRAMA NO EXISTE!");
    break;
}

printf("\nQUIERE INICIAR OTRO PROGRAMA? SI(Si)   NO(No)\n");
scanf("%s",desicion);

}while (strcmp(desicion, "No") != 0);


    return 0;
}