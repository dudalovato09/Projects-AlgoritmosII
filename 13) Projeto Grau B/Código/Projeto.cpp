/*Grupo: Bruno Golin Ferreira, Eduarda Pinto Lovato e Let�cia Forini Tondello*/

#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Defini��es de constantes para limitar valores m�ximos
#define max_usuario 999           // N�mero m�ximo de usu�rios (clientes e restaurantes)
#define max_com 999               // N�mero m�ximo de comidas por restaurante
#define max_pedidos 999           // N�mero m�ximo de pedidos por restaurante
#define max_nome 50               // Tamanho m�ximo do nome de usu�rios e comidas
#define max_senha 20              // Tamanho m�ximo da senha
#define max_itens_pedido 20       // N�mero m�ximo de itens por pedido

// Vari�veis globais para controle de estado do programa
int tipoUsuario, i, j, opcao, opcaoRestaurante, opcaoComida;
int contadorClientes = 0;         // Contador de clientes cadastrados
int contadorRestaurantes = 0;     // Contador de restaurantes cadastrados

// Estrutura para representar um pedido
struct Pedido {
    char itens[max_itens_pedido][max_nome];  // Nome dos itens no pedido
    float precos[max_itens_pedido];          // Pre�os dos itens
    int contadorItens;                       // Quantidade de itens no pedido
    float total;                             // Valor total do pedido
};

// Estrutura para representar um cliente
struct Cliente {
    char nome[max_nome];      // Nome do cliente
    char senha[max_senha];    // Senha do cliente
};

// Estrutura para representar um restaurante
struct Restaurante {
    char nome[max_nome];           // Nome do restaurante
    char senha[max_senha];         // Senha do restaurante
    char comidas[max_com][max_nome]; // Lista de comidas dispon�veis
    float precos[max_com];         // Pre�os das comidas
    char descricoes[max_com][100]; // Descri��o de cada comida
    struct Pedido pedidos[max_pedidos]; // Lista de pedidos associados ao restaurante
    int contadorComidas;           // N�mero de comidas cadastradas
    int contadorPedidos;           // N�mero de pedidos realizados
};

// Arrays globais para armazenar clientes e restaurantes
Cliente clientes[max_usuario];      // Lista de clientes
Restaurante restaurantes[max_usuario]; // Lista de restaurantes

// Declara��o de fun��es (prototipagem)
void cadastrarCliente();
void menuCliente(Cliente *cliente);
void menuRestaurante(Restaurante *restaurante);
void apagarProduto(Restaurante *restaurante);
void fazerPedido(Cliente *cliente);
void verPedidos(Restaurante *restaurante);
void cadastrarComida(Restaurante *restaurante);
int loginRestaurante(char *nome, char *senha);
int loginCliente(char *nome, char *senha);
void cadastro();
void cadastrarRestaurante();
void obterDescricaoRestricao(char *descricao);
void exibirDescricaoComidas(Restaurante *restaurante);
void salvarDados();
void carregarDados();
void salvarPedidosEmArquivo(Restaurante *restaurante);

// Fun��o principal do programa
int main() {
	
    setlocale(LC_ALL, "Portuguese"); // Configura o uso de caracteres acentuados
    
    carregarDados();  // Carrega dados salvos anteriormente  

    int opcaoInicial;   // Controle do menu principal

	// Exibi��o do menu principal
    do {
        printf("\nSistema de Restaurante\n");
        printf("1. Logar como Restaurante\n");
        printf("2. Logar como Cliente\n");
        printf("3. Cadastro\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcaoInicial);
        getchar(); // Limpa o buffer do teclado
        system("cls");

        if (opcaoInicial == 1) {
        	
        	// Login para restaurantes
            char nome[max_nome], senha[max_senha];
            printf("\n========= LOGIN RESTAURANTE ========= \n");
            printf("Digite o nome do restaurante: ");
            fgets(nome, max_nome, stdin);
            nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n'

            printf("Digite a senha: ");
            fgets(senha, max_senha, stdin);
            senha[strcspn(senha, "\n")] = '\0'; // Remove o '\n'

            int indice = loginRestaurante(nome, senha);
            if (indice != -1) {
                printf("=====================================\n");
                system("pause");
                system("cls");
                menuRestaurante(&restaurantes[indice]);
            } else {
                printf("Nome ou senha inv�lidos!\n");
                printf("=====================================\n");
                system("pause");
                system("cls");
            }
        } else if (opcaoInicial == 2) {
            
            // Login para clientes
			char nome[max_nome], senha[max_senha];
            printf("\n========= LOGIN CLIENTE ========= \n");
            printf("Digite seu nome: ");
            fgets(nome, max_nome, stdin);
            nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n'

            printf("Digite sua senha: ");
            fgets(senha, max_senha, stdin);
            senha[strcspn(senha, "\n")] = '\0'; // Remove o '\n'

            int indice = loginCliente(nome, senha);
            if (indice != -1) {
                printf("==================================\n");
                system("pause");
                system("cls");
                menuCliente(&clientes[indice]);
            } else {
                printf("\nNome ou senha inv�lidos!\n");
                printf("==================================\n");
                system("pause");
                system("cls");
            }
        } else if (opcaoInicial == 3) {
            cadastro();
        } else if (opcaoInicial != 4) {
            printf("Op��o inv�lida!\n");
        }
    } while (opcaoInicial != 4);

    salvarDados();
    
    printf("Encerrando o sistema...\n");
    return 0;
}

void cadastrarCliente() {
    if (contadorClientes >= max_usuario) {
        printf("Limite de cadastro de clientes atingido!\n");
        return;
    }
    char nome[max_nome], senha[max_senha];
    printf("\n========= CADASTRO CLIENTE ========= \n");
    printf("Digite seu nome: ");
    getchar(); // Limpa o buffer
    fgets(nome, max_nome, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n

    printf("Digite sua senha: ");
    fgets(senha, max_senha, stdin);
    senha[strcspn(senha, "\n")] = '\0'; // Remove o \n

    strcpy(clientes[contadorClientes].nome, nome);
    strcpy(clientes[contadorClientes].senha, senha);
    contadorClientes++;
    printf("\nCliente cadastrado com sucesso!\n");
    printf("====================================\n");
    system("pause");
    system("cls");
}

void cadastrarRestaurante() {
    if (contadorRestaurantes >= max_usuario) {
        printf("Limite de restaurantes atingido!\n");
        return;
    }
    char nome[max_nome], senha[max_senha];
    printf("\n========= CADASTRO RESTAURANTE ========= \n");
    printf("Digite o nome do restaurante: ");
    getchar(); // Limpa o buffer
    fgets(nome, max_nome, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n

    printf("Digite sua senha: ");
    fgets(senha, max_senha, stdin);
    senha[strcspn(senha, "\n")] = '\0'; // Remove o \n

    strcpy(restaurantes[contadorRestaurantes].nome, nome);
    strcpy(restaurantes[contadorRestaurantes].senha, senha);
    restaurantes[contadorRestaurantes].contadorComidas = 0;
    restaurantes[contadorRestaurantes].contadorPedidos = 0;
    contadorRestaurantes++;
    printf("\nRestaurante cadastrado com sucesso!\n");
    printf("========================================\n");
    system("pause");
    system("cls");
}

// Menu de cadastro para clientes ou restaurantes
void cadastro() {
    printf("============ ESCOLHA DE CADASTRO =============\n");
    printf("Deseja cadastrar como:\n1- Cliente \n2- Restaurante\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &tipoUsuario);
    printf("\n==============================================\n");
    system("pause");
    system("cls");
    
    if (tipoUsuario == 1) {
        cadastrarCliente(); // Chama o cadastro de cliente
    } else if (tipoUsuario == 2) {
        cadastrarRestaurante(); // Chama o cadastro de restaurante
    } else {
        printf("Op��o inv�lida!\n"); // Trata op��o inv�lida
    }
}

	
int loginCliente (char *nome, char *senha) {
    // Percorre a lista de clientes cadastrados para verificar se o nome e a senha fornecidos s�o v�lidos
    for (i = 0; i < contadorClientes; i++) {
        // Verifica se o nome e a senha correspondem ao cliente atual
        // strcmp retorna 0 se as strings forem iguais
        if (strcmp(clientes[i].nome, nome) == 0 && strcmp(clientes[i].senha, senha) == 0) {
            // Retorna o �ndice do cliente encontrado
            return i;
        }
    }
    // Retorna -1 se nenhum cliente foi encontrado com o nome e senha fornecidos
    return -1;
}

int loginRestaurante (char *nome, char *senha) {
    // Percorre a lista de restaurantes cadastrados para verificar o login
    for (i = 0; i < contadorRestaurantes; i++) {
        // Verifica se o nome e a senha correspondem ao restaurante atual
        if (strcmp(restaurantes[i].nome, nome) == 0 && strcmp(restaurantes[i].senha, senha) == 0) {
            // Retorna o �ndice do restaurante encontrado
            return i;
        }
    }
    // Retorna -1 se nenhum restaurante foi encontrado com o nome e senha fornecidos
    return -1;
}

void obterDescricaoRestricao(char *descricao) {
    // Permite definir uma descri��o de restri��o alimentar para uma comida
    int opcaoRestricao;
    printf("\nEste prato � adequado para pessoas com restri��es alimentares?\n");
    printf("1. Sim\n");
    printf("2. N�o\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcaoRestricao);

    if (opcaoRestricao == 1) {
        // Usu�rio optou por adicionar uma descri��o de restri��o
        printf("\nDigite a descri��o da restri��o (ex: Sem gl�ten, Vegano): ");
        getchar(); // Limpa o buffer do teclado para evitar problemas ao usar fgets
        fgets(descricao, 100, stdin);
        descricao[strcspn(descricao, "\n")] = '\0'; // Remove o caractere de nova linha
    } else if (opcaoRestricao == 2) {
        // Define "Sem restri��es alimentares" como descri��o padr�o
        strcpy(descricao, "Sem restri��es alimentares");
    } else {
        // Caso o usu�rio escolha uma op��o inv�lida, define a descri��o padr�o
        printf("Op��o inv�lida! Definindo como 'Sem restri��es alimentares'.\n");
        strcpy(descricao, "Sem restri��es alimentares");
    }
}

void cadastrarComida(Restaurante *restaurante) {
    // Adiciona uma nova comida ao card�pio do restaurante
    if (restaurante->contadorComidas >= max_com) {
        printf("Limite de cadastro de alimentos atingido!\n");
        return;
    }
    char nomeComida[max_nome];
    float preco;
    char descricao[100];
    printf("============ CADASTRO DE ALIMENTO =============\n");
    getchar(); // Limpa o buffer
    printf("Digite o nome do alimento: ");
    fgets(nomeComida, max_nome, stdin);
    printf("Digite o valor do alimento: ");
    scanf("%f", &preco);
    
    // Obt�m a descri��o da restri��o alimentar associada ao alimento
    obterDescricaoRestricao(descricao);
    
    // Salva os dados da comida no card�pio do restaurante
    strcpy(restaurante->comidas[restaurante->contadorComidas], nomeComida);
    restaurante->precos[restaurante->contadorComidas] = preco;
    strcpy(restaurante->descricoes[restaurante->contadorComidas], descricao);
    restaurante->contadorComidas++; // Incrementa o contador de comidas cadastradas
    printf("\nAlimento cadastrado com sucesso!\n");
    printf("Descricao: %s\n", descricao);
    printf("==============================================\n");
    system("pause");
    system("cls");
}

void verPedidos(Restaurante *restaurante) {
    // Exibe todos os pedidos feitos no restaurante
    if (restaurante->contadorPedidos == 0) {
        // Caso n�o haja pedidos registrados
        printf("Nenhum pedido encontrado!\n");
        return;
    }
    printf("============ LISTA DE PEDIDOS =============\n");
    for (int i = 0; i < restaurante->contadorPedidos; i++) {
        // Exibe cada pedido e os itens associados
        printf("\nPedido %d:\n", i + 1);
        for (int k = 0; k < restaurante->pedidos[i].contadorItens; k++) {
            printf(" - %s: R$ %.2f\n", 
                   restaurante->pedidos[i].itens[k], 
                   restaurante->pedidos[i].precos[k]);
        }
        // Exibe o total do pedido
        printf(" Total: R$ %.2f\n", restaurante->pedidos[i].total);
    }
    printf("=============================================\n");
    system("pause");
    system("cls");
}

void exibirDescricaoComidas(Restaurante *restaurante) {
    // Lista todas as comidas cadastradas no restaurante junto com os pre�os e descri��es
    if (restaurante->contadorComidas <= 0) {
        printf("Nenhuma comida cadastrada neste restaurante.\n");
        return;
    }

    printf("\nComidas dispon�veis no restaurante %s:\n", restaurante->nome);

    for (int i = 0; i < restaurante->contadorComidas; i++) {
        // Exibe o nome, pre�o e observa��es (restri��es alimentares) de cada comida
        printf("%d. %s - R$ %.2f (Observa��o: %s)\n", 
               i + 1, 
               restaurante->comidas[i], 
               restaurante->precos[i], 
               restaurante->descricoes[i]);
    }
}

// Fun��o para o cliente fazer um pedido
void fazerPedido(Cliente *cliente) {
    printf("==================== FAZER PEDIDO =====================\n");

    // Verifica se h� restaurantes cadastrados
    if (contadorRestaurantes == 0) {
        printf("Nenhum restaurante cadastrado.\n");
        return;
    }

    // Lista os restaurantes dispon�veis com card�pios
    int restauranteDisponivel = 0; // Flag para verificar se h� restaurantes dispon�veis
    printf("\nRestaurantes dispon�veis:\n");
    for (i = 0; i < contadorRestaurantes; i++) {
        if (restaurantes[i].contadorComidas > 0) { // Apenas restaurantes com card�pios
            printf("%d. %s\n", i + 1, restaurantes[i].nome);
            restauranteDisponivel = 1;
        }
    }

    // Verifica se h� algum restaurante com card�pio dispon�vel
    if (!restauranteDisponivel) {
        printf("Nenhum restaurante com card�pio dispon�vel no momento.\n");
        return;
    }

    // Cliente escolhe um restaurante
    printf("\nEscolha um restaurante: ");
    scanf("%d", &opcaoRestaurante);
    opcaoRestaurante--; // Ajusta para �ndice de array (baseado em zero)

    // Valida a op��o do restaurante
    if (opcaoRestaurante < 0 || opcaoRestaurante >= contadorRestaurantes || restaurantes[opcaoRestaurante].contadorComidas == 0) {
        printf("Restaurante inv�lido ou sem card�pio dispon�vel!\n");
        return;
    }

    // Obt�m o restaurante escolhido
    Restaurante *restaurante = &restaurantes[opcaoRestaurante];

    // Exibe as comidas dispon�veis no restaurante
    exibirDescricaoComidas(restaurante);

    // Verifica se h� comidas cadastradas no restaurante
    if (restaurante->contadorComidas == 0) {
        printf("Nenhuma comida cadastrada neste restaurante.\n");
        return;
    }

    // Inicializa um novo pedido
    Pedido novoPedido;
    novoPedido.contadorItens = 0;
    novoPedido.total = 0.0;

    // Loop para o cliente adicionar comidas ao pedido
    do {
        printf("\nEscolha uma comida (0 para finalizar): ");
        scanf("%d", &opcaoComida);
        opcaoComida--; // Ajusta para �ndice de array

        // Valida a op��o da comida
        if (opcaoComida >= 0 && opcaoComida < restaurante->contadorComidas) {
            // Adiciona a comida selecionada ao pedido
            strcpy(novoPedido.itens[novoPedido.contadorItens], restaurante->comidas[opcaoComida]);
            novoPedido.precos[novoPedido.contadorItens] = restaurante->precos[opcaoComida];
            novoPedido.total += restaurante->precos[opcaoComida]; // Atualiza o total do pedido
            novoPedido.contadorItens++; // Incrementa o contador de itens
            printf("\nComida adicionada ao pedido!\n");
        } else if (opcaoComida != -1) { // Caso a entrada seja inv�lida
            printf("\nOp��o inv�lida!\n");
        }
    } while (opcaoComida != -1); // Finaliza o pedido ao digitar 0

    // Verifica se o pedido tem pelo menos um item
    if (novoPedido.contadorItens == 0) {
        printf("\nNenhuma comida foi adicionada ao pedido. Pedido cancelado.\n");
        system("pause"); // Pausa para exibir a mensagem
    	system("cls");   // Limpa a tela
        return;
    }

    // Adiciona o pedido ao restaurante
    restaurante->pedidos[restaurante->contadorPedidos] = novoPedido;
    restaurante->contadorPedidos++; // Incrementa o contador de pedidos do restaurante

    // Exibe o total do pedido
    printf("\nPedido realizado com sucesso! Total do pedido: R$ %.2f\n", novoPedido.total);
    printf("=========================================================\n");
    system("pause"); // Pausa para exibir a mensagem
    system("cls");   // Limpa a tela
}

// Fun��o para apagar uma comida do card�pio de um restaurante
void apagarProduto (Restaurante *restaurante) {
		printf("============ REMO��O DE ALIMENTO =============\n");

	    // Verifica se h� comidas cadastradas
	    if (restaurante -> contadorComidas == 0) {
	        printf("Nenhuma comida cadastrada!\n");
	        return;
	    }
	
	    // Solicita o nome do alimento a ser removido
	    char nomeComida[max_nome];
	    getchar(); // Limpa o buffer
	    printf ("Digite o nome do alimento: ");
	    fgets(nomeComida, max_nome, stdin);
	
	    // Percorre a lista de comidas para encontrar o item a ser removido
	    for (i = 0; i < restaurante -> contadorComidas; i++) {
	        if (strcmp(restaurante -> comidas[i], nomeComida) == 0) { // Compara os nomes
	            // Realiza o "shift" no array para remover o item
	            for (j = i; j < restaurante -> contadorComidas - 1; j++) {
	                strcpy (restaurante -> comidas[j], restaurante -> comidas[j + 1]);
	                restaurante -> precos[j] = restaurante -> precos[j + 1];
	            }
	            restaurante -> contadorComidas--; // Decrementa o contador de comidas
	            printf ("\nComida removida com sucesso!\n");
	            printf("==============================================\n");
			    system("pause");
			    system("cls");
			    return;
	        }
	    }

	    // Caso o alimento n�o seja encontrado
	    printf ("\nComida n�o encontrada!\n");
	    printf("==============================================\n");
		system("pause");
		system("cls");
}

// Menu principal para restaurantes
void menuRestaurante(Restaurante *restaurante) {
    do {
        printf("\nMenu do Restaurante %s\n", restaurante->nome);
        printf("1. Cadastrar Comida\n");
        printf("2. Ver Pedidos\n");
        printf("3. Apagar Produto\n");
        printf("4. Salvar Pedidos em Arquivo\n"); // Nova op��o
        printf("5. Logout\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                cadastrarComida(restaurante); //Cadastrar um alimento
                break;

            case 2:
                verPedidos(restaurante); //Ver todos os pedidos cadastrados
                break;

            case 3:
                apagarProduto(restaurante); //Apagar um alimento
                break;

            case 4:
                salvarPedidosEmArquivo(restaurante); //Salva todos os pedidos cadastrados at� o momento, no arquivo txt
                break;

            case 5:
                system("cls"); //Voltar ao menu
                return;

            default:
                printf("Op��o inv�lida!\n");
                break;
        }
    } while (opcao != 5);
}


// Menu principal para clientes
void menuCliente(Cliente *cliente) {
	    do {
	        // Exibe as op��es do menu
	        printf("\nMenu do Cliente %s\n", cliente -> nome);
	        printf("1. Fazer Pedido\n");
	        printf("2. Logout\n");
	        printf("Escolha uma op��o: ");
	        scanf("%d", &opcao);
			system("cls");
			
	        switch (opcao) {
	            case 1:
	                fazerPedido(cliente); // Fazer pedido
	                break;
	            case 2:
	                system("cls");
	                return; // Sai do menu
	            default:
	                printf ("Op��o inv�lida!\n");
	                break;
	        }
	    } while (opcao != 2);
}

void salvarDados() {
    FILE *arquivoClientes = fopen("clientes.txt", "w");
    if (arquivoClientes == NULL) {
        printf("Erro ao salvar os dados dos clientes!\n");
        return;
    }
    for (int i = 0; i < contadorClientes; i++) {
        fprintf(arquivoClientes, "%s,%s\n", clientes[i].nome, clientes[i].senha);
    }
    fclose(arquivoClientes);

    FILE *arquivoRestaurantes = fopen("restaurantes.txt", "w");
    if (arquivoRestaurantes == NULL) {
        printf("Erro ao salvar os dados dos restaurantes!\n");
        return;
    }
    for (int i = 0; i < contadorRestaurantes; i++) {
        fprintf(arquivoRestaurantes, "%s,%s\n", restaurantes[i].nome, restaurantes[i].senha);
    }
    fclose(arquivoRestaurantes);
}

void carregarDados() {
    FILE *arquivoClientes = fopen("clientes.txt", "r");
    if (arquivoClientes != NULL) {
        char linha[100];
        while (fgets(linha, sizeof(linha), arquivoClientes)) {
            sscanf(linha, "%[^0-9] %s", clientes[contadorClientes].nome, clientes[contadorClientes].senha);
            clientes[contadorClientes].nome[strlen(clientes[contadorClientes].nome) - 1] = '\0';
            contadorClientes++;
        }
        fclose(arquivoClientes);
    }

    FILE *arquivoRestaurantes = fopen("restaurantes.txt", "r");
    if (arquivoRestaurantes != NULL) {
        char linha[100];
        while (fgets(linha, sizeof(linha), arquivoRestaurantes)) {
            sscanf(linha, "%[^0-9] %s", restaurantes[contadorRestaurantes].nome, restaurantes[contadorRestaurantes].senha);
            restaurantes[contadorRestaurantes].nome[strlen(restaurantes[contadorRestaurantes].nome) - 1] = '\0';
            contadorRestaurantes++;
        }
        fclose(arquivoRestaurantes);
    }
}

void salvarPedidosEmArquivo(Restaurante *restaurante) {
    // Verifica se h� pedidos registrados para o restaurante.
    if (restaurante->contadorPedidos == 0) {
        printf("Nenhum pedido registrado para salvar!\n");
        return; // Encerra a fun��o se n�o h� pedidos.
    }

    // Define o nome do arquivo com base no nome do restaurante.
    char nomeArquivo[100];
    snprintf(nomeArquivo, sizeof(nomeArquivo), "pedidos_%s.txt", restaurante->nome);

    // Tenta abrir o arquivo para escrita.
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        // Se n�o conseguir abrir o arquivo, exibe uma mensagem de erro.
        printf("Erro ao abrir o arquivo para salvar os pedidos!\n");
        return;
    }

    // Escreve o cabe�alho no arquivo.
    fprintf(arquivo, "============ LISTA DE PEDIDOS - Restaurante %s =============\n", restaurante->nome);

    // Percorre todos os pedidos registrados no restaurante.
    for (int i = 0; i < restaurante->contadorPedidos; i++) {
        fprintf(arquivo, "\nPedido %d:\n", i + 1);
        for (int k = 0; k < restaurante->pedidos[i].contadorItens; k++) {
            // Para cada item do pedido, escreve no arquivo o nome e o pre�o.
            fprintf(arquivo, " - %s: R$ %.2f\n", 
                    restaurante->pedidos[i].itens[k], 
                    restaurante->pedidos[i].precos[k]);
        }
        // Escreve o total do pedido.
        fprintf(arquivo, " Total: R$ %.2f\n", restaurante->pedidos[i].total);
    }

    // Adiciona um rodap� para indicar o final da lista de pedidos.
    fprintf(arquivo, "==================================================================\n");

    fclose(arquivo); // Fecha o arquivo ap�s a escrita.
    printf("Pedidos salvos no arquivo '%s' com sucesso!\n", nomeArquivo);
}
