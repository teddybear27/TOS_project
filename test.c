#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


// Fonction affichage invité de commande
//void PromptView(){printf("> ");}

// Fonction principale
int main(int argc, char *argv[]) {
  int exitShell = 0;
  int ret = 0;

  while (exitShell != 1) {
    char command[500];
    printf("\n> ");
    //fgets(command,100,stdin);
    scanf("%s", command);


    if (strcmp(command, "exit") == 0){
      exitShell = 1;
      printf("\nVous avez quitté le programme\n");
      return EXIT_SUCCESS;
    }
    ret = execvp(command, argv);
    printf("ret = %d\n", ret);
  }



  return EXIT_SUCCESS;
}
