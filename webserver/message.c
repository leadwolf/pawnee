# include <errno.h>
#include <unistd.h>
# include <string.h>
# include <stdio.h>


const char* WELCOME_MESSAGE =
"          _____                    _____                    _____                    _____                    _____          \n"
"         /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         \n"
"        /::\\____\\                /::\\____\\                /::\\    \\                /::\\____\\                /::\\____\\       \n"
"       /:::/    /               /:::/    /               /::::\\    \\              /:::/    /               /:::/    /        \n"
"      /:::/    /               /:::/    /               /::::::\\    \\            /:::/    /               /:::/    /         \n"
"     /:::/    /               /:::/    /               /:::/\\:::\\    \\          /:::/    /               /:::/    /          \n"
"    /:::/____/               /:::/    /               /:::/__\\:::\\    \\        /:::/    /               /:::/____/         \n"
"   /::::\\    \\              /:::/    /               /::::\\   \\:::\\    \\      /:::/    /               /::::\\    \\           \n"
"  /::::::\\____\\________    /:::/    /      _____    /::::::\\   \\:::\\    \\    /:::/    /      _____    /::::::\\____\\________  \n"
" /:::/\\:::::::::::\\    \\  /:::/____/      /\\    \\  /:::/\\:::\\   \\:::\\____\\  /:::/____/      /\\    \\  /:::/\\:::::::::::\\    \\ \n"
"/:::/  |:::::::::::\\____\\|:::|    /      /::\\____\\/:::/  \\:::\\   \\:::|    ||:::|    /      /::\\____\\/:::/  |:::::::::::\\____\\\n"
"\\::/   |::|~~~|~~~~~     |:::|____\\     /:::/    /\\::/   |::::\\  /:::|____||:::|____\\     /:::/    /\\::/   |::|~~~|~~~~~     \n"
" \\/____|::|   |           \\:::\\    \\   /:::/    /  \\/____|:::::\\/:::/    /  \\:::\\    \\   /:::/    /  \\/____|::|   |          \n"
"       |::|   |            \\:::\\    \\ /:::/    /         |:::::::::/    /    \\:::\\    \\ /:::/    /         |::|   |          \n"
"       |::|   |             \\:::\\    /:::/    /          |::|\\::::/    /      \\:::\\    /:::/    /          |::|   |          \n"
"       |::|   |              \\:::\\__/:::/    /           |::| \\::/____/        \\:::\\__/:::/    /           |::|   |        \n"
"       |::|   |               \\::::::::/    /            |::|  ~|               \\::::::::/    /            |::|   |          \n"
"       |::|   |                \\::::::/    /             |::|   |                \\::::::/    /             |::|   |          \n"
"       \\::|   |                 \\::::/    /              \\::|   |                 \\::::/    /              \\::|   |          \n"
"        \\:|   |                  \\::/____/                \\:|   |                  \\::/____/                \\:|   |          \n"
"         \\|___|                   ~~                       \\|___|                   ~~                       \\|___|          \n"
"\n\n"
"German: Hallo! Willkommen Kuruk Server von Nicolas de Moraes und Christopher Caroni erstellt.\n"
"English: Hello! Welcome to the Kuruk server created by Nicolas De Moraës and Christopher Caroni.\n"
"Spanish: ¡Hola! servidor Kuruk Bienvenido creado por Nicolás de Moraes y Christopher Caroni.\n"
"French: Bonjour! Bienvenue sur le serveur Kuruk créé par Nicolas De Moraës et Christopher Caroni.\n"
"Hindi: नमस्कार! आपका स्वागत है Kuruk सर्वर निकोलस डे मोरेस और क्रिस्टोफर Caroni द्वारा बनाई गई।\n"
"Italian: Buongiorno! server di benvenuto Kuruk creato da Nicolas de Moraes e Christopher Caroni.\n"
"Japanese: こんにちは！ニコラス・デ・モラエスとクリストファー・カロニによって作成されたウェルカムKurukサーバー\n"
"Norwegian: Hello! Velkommen Kuruk server opprettet av Nicolas de Moraes og Christopher Caroni.\n"
"Polish: Cześć! Witamy serwer Kuruk stworzony przez Nicolasa de Moraes i Christopher Caroni.\n"
"Portuguese: Olá! servidor Kuruk Bem-vindo criado por Nicolas de Moraes e Christopher Caroni.\n";

int display_welcome_message(int socket_client) {
  if (write(socket_client, WELCOME_MESSAGE, strlen(WELCOME_MESSAGE)) == -1) {
    perror("Cannot write welcome message");
    return -1;
  }
  return 0;
}

/*
* read un message jusqua 1024 de longueur et réécrit ce message
* Lance perror en cas d'erreur. Stocke dans connected la valeur de
* read ou write, lequel a été fait en dernier avant l'erreur.
*/
int repeat_messages(int socket_client) {
  int status = 1;
  char readMessage[1024];
  if ( (status = read(socket_client, &readMessage, 1024)) == -1)
  {
    perror("Could not read user message");
    return -1;
  }
  if (write(socket_client, &readMessage, status) == -1)
  {
    perror("Could not write user message");
    return -1;
  }
  return status;
}
