#include <stdio.h>
#include <stdlib.h>

void instalar(int op);
void desinstalar(int op);


int main(){
    puts("Bem vindo ao script do Pop_OS!, por favor insira ");
    puts("1 - Instalar");
    puts("2 - Desinstalar");
    puts("3 - Informação sobre o script");
    int op;
    scanf("%d", &op);
    switch (op) {
        case 1:{
            instalar(op);
            break;
        }
        case 2:{
            desinstalar(op);
            break;
        }
        case 3:{
            break;
        }
    }
    return 0;

}

void instalar(int op){
    puts("Por favor insira um numero:");
    puts("1 - Instalar todos os programas");
    puts("2 - Selecionar alguns programas");
    scanf("%d", &op);
    switch (op) {
        case 1:{
            system("sudo apt update");
            system("sudo apt-get install cmake telegram-desktop steam discord lutris neofetch");
            system("sudo apt-get upgrade");
            system("cd && cd Downloads && wget https://github.com/VSCodium/vscodium/releases/download/1.73.1.22314/codium_1.73.1.22314_amd64.deb");
            system("cd && cd Downloads && sudo apt-get install ./codium_1.73.1.22314_amd64.deb");
            system("flatpak remote-add --user --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo");
            system("flatpak install flathub im.riot.Riot");
            system("flatpak install com.valvesoftware.Steam.CompatibilityTool.Proton-GE");
            system("cd && rm -rf .bashrc");
            system("ln -s MyLinuxConfiguration/Pop_OS/.bashrc ~/");
        }
    }
}
