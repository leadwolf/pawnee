# include <stdio.h>
# include <stdlib.h>

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

const char* MESSAGE_404 =
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
"EEEEEEEEEEEEEEEEEEEEEE                                                                                         444444444       000000000            444444444\n"
"E::::::::::::::::::::E                                                                                        4::::::::4     00:::::::::00         4::::::::4  \n"
"E::::::::::::::::::::E                                                                                       4:::::::::4   00:::::::::::::00      4:::::::::4  \n"
"EE::::::EEEEEEEEE::::E                                                                                      4::::44::::4  0:::::::000:::::::0    4::::44::::4  \n"
"  E:::::E       EEEEEErrrrr   rrrrrrrrr   rrrrr   rrrrrrrrr      ooooooooooo   rrrrr   rrrrrrrrr           4::::4 4::::4  0::::::0   0::::::0   4::::4 4::::4  \n"
"  E:::::E             r::::rrr:::::::::r  r::::rrr:::::::::r   oo:::::::::::oo r::::rrr:::::::::r         4::::4  4::::4  0:::::0     0:::::0  4::::4  4::::4  \n"
"  E::::::EEEEEEEEEE   r:::::::::::::::::r r:::::::::::::::::r o:::::::::::::::or:::::::::::::::::r       4::::4   4::::4  0:::::0     0:::::0 4::::4   4::::4  \n"
"  E:::::::::::::::E   rr::::::rrrrr::::::rrr::::::rrrrr::::::ro:::::ooooo:::::orr::::::rrrrr::::::r     4::::444444::::4440:::::0 000 0:::::04::::444444::::444\n"
"  E:::::::::::::::E    r:::::r     r:::::r r:::::r     r:::::ro::::o     o::::o r:::::r     r:::::r     4::::::::::::::::40:::::0 000 0:::::04::::::::::::::::4\n"
"  E::::::EEEEEEEEEE    r:::::r     rrrrrrr r:::::r     rrrrrrro::::o     o::::o r:::::r     rrrrrrr     4444444444:::::4440:::::0     0:::::04444444444:::::444\n"
"  E:::::E              r:::::r             r:::::r            o::::o     o::::o r:::::r                           4::::4  0:::::0     0:::::0          4::::4  \n"
"  E:::::E       EEEEEE r:::::r             r:::::r            o::::o     o::::o r:::::r                           4::::4  0::::::0   0::::::0          4::::4  \n"
"EE::::::EEEEEEEE:::::E r:::::r             r:::::r            o:::::ooooo:::::o r:::::r                           4::::4  0:::::::000:::::::0          4::::4  \n"
"E::::::::::::::::::::E r:::::r             r:::::r            o:::::::::::::::o r:::::r                         44::::::44 00:::::::::::::00         44::::::44\n"
"E::::::::::::::::::::E r:::::r             r:::::r             oo:::::::::::oo  r:::::r                         4::::::::4   00:::::::::00           4::::::::4\n"
"EEEEEEEEEEEEEEEEEEEEEE rrrrrrr             rrrrrrr               ooooooooooo    rrrrrrr                         4444444444     000000000             4444444444\n"
"\n\n"
"German: Seite nicht gefunden!\n"
"English: Page not found!\n"
"Spanish: ¡Página no encontrada!\n"
"French: Page non trouvée!\n"
"Hindi: पृष्ठ नहीं मिला!\n"
"Italian: Pagina non trovata!\n"
"Japanese: ページが見つかりません！\n"
"Norwegian: Side ikke funnet!\n"
"Polish: Strona nie znaleziona!\n"
"Portuguese: Página não encontrada!\n";

void send_status(FILE *client, int code, const char *reason_phrase)
{
  fprintf(client, "HTTP/1.1 %d:%s\n", code, reason_phrase);
  return;
}

int write_welcome_message(FILE * fp) {
  send_status(fp, 200, "OK");
  char* response = "Connection: close\n"
  "Content-Length: 3788\n"
  "\n";
  if (fprintf(fp, "%s%s", response, WELCOME_MESSAGE) < 0)
  {
    perror("fprintf");
    return -1;
  }
  return 0;
}

int write_404_message(FILE *fp) {
  send_status(fp, 404, "Not Found");
  char* response = "Connection: close\n"
  "Content-Length: 5542\n"
  "\n";
  if (fprintf(fp, "%s%s", response, MESSAGE_404) < 0)
  {
    perror("fprintf");
    return -1;
  }
  return 0;
}
