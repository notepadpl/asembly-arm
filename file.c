 #include <stdio.h>
 #include <stdlib.h>
 
 int main ()
 {
   FILE *fp; /* używamy metody wysokopoziomowej - musimy mieć zatem identyfikator pliku, uwaga na gwiazdkę! */
   char tekst[] = "Hello world";
   if ((fp=fopen("test.txt", "w"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }
   fprintf (fp, "%s", tekst); /* zapisz nasz łańcuch w pliku */
   fclose (fp); /* zamknij plik */
   return 0;
 }
