🏙️ Super Trunfo Cidades

Este projeto é um programa escrito em linguagem C que simula um jogo de comparação de cidades, inspirado no estilo do jogo Super Trunfo. Nele, duas cidades são cadastradas com seus respectivos dados, e o jogador pode compará-las por diferentes atributos para ver qual cidade vence em cada confronto.
✅ Funcionalidades

    Permite o cadastro de duas cidades;

    Cada cidade possui:

        Nome;

        Código do estado (entre 'A' e 'H');

        Código de identificação (de 01 a 04);

        População total;

        Área em km²;

        Produto Interno Bruto (PIB);

        Quantidade de pontos turísticos.

    O programa calcula automaticamente:

        PIB per capita;

        Densidade populacional;

        “Poder” Super Trunfo baseado nos dados inseridos.

    O jogador pode escolher dois atributos diferentes para comparar entre as cidades.

    Exibe o vencedor de cada comparação e o resultado final do jogo.

🧠 Requisitos para Executar

Para executar este programa, você precisa:

    Ter um compilador de C instalado no seu computador (como o GCC, presente no Linux, macOS ou Windows com MinGW ou WSL);

    Ter acesso a um terminal ou prompt de comando;

    Ter o arquivo cartas_cidades.c, que contém o código-fonte do programa.

🛠️ Como Compilar e Executar
Em sistemas Linux ou macOS

Você deve abrir o terminal e acessar a pasta onde está o arquivo do programa. Em seguida, deve usar o compilador para transformar o arquivo-fonte em um executável. Após isso, o executável poderá ser executado diretamente.

Por exemplo, você irá:

    Abrir o terminal;

    Acessar a pasta do projeto;

    Compilar o arquivo usando o compilador;

    Executar o arquivo gerado.

Em sistemas Windows

Você pode usar o MinGW (um compilador para C no Windows) ou o WSL (subsistema do Linux para Windows). Os passos são semelhantes aos do Linux/macOS, acessando o prompt de comando, navegando até a pasta onde o arquivo está salvo, compilando e executando.

Se você usa o Dev C++, Code::Blocks ou outra IDE:

    Crie um novo projeto em C;

    Adicione o arquivo cartas_cidades.c;

    Compile e execute diretamente pela interface da IDE.

💬 Como o Programa Funciona

Depois de executar o programa, ele seguirá o seguinte fluxo:

    Solicita os dados da primeira cidade;

    Solicita os dados da segunda cidade;

    Exibe os dados calculados de ambas as cidades;

    Apresenta um menu com 7 atributos para comparação:

        População;

        Área;

        PIB;

        PIB per capita;

        Pontos turísticos;

        Densidade populacional;

        Poder Super Trunfo.

    Você escolhe um primeiro atributo para comparar;

    O programa mostra qual cidade venceu naquele atributo;

    Você escolhe um segundo atributo diferente;

    O programa mostra o vencedor dessa nova comparação;

    Exibe o resultado final do jogo com base nos dois confrontos.

📌 Recomendações

Durante a compilação do programa, é recomendado ativar os avisos de compilação para garantir que seu código está bem escrito. Isso ajuda a encontrar possíveis erros ou más práticas durante o desenvolvimento.
📁 Estrutura do Projeto

A estrutura do projeto é simples e composta pelos seguintes arquivos:

    cartas_cidades.c: código-fonte principal do jogo;

    README.md (ou .txt): este documento de explicação.

🤝 Contribuição

Você pode contribuir com este projeto fazendo melhorias no código, otimizando a lógica, adicionando novos recursos ou apenas corrigindo erros. Para isso, siga estes passos:

    Faça um fork deste repositório no GitHub;

    Crie uma nova branch com uma descrição da melhoria que deseja fazer;

    Faça suas alterações no código;

    Suba suas alterações e abra um Pull Request.

🧾 Licença

Este projeto é de uso educacional e está aberto para aprendizado, modificação e uso pessoal. Fique à vontade para usar como base para seus estudos.
👨‍💻 Autor

Douglas Meneses
Estudante de Análise e Desenvolvimento de Sistemas
Repositório: github.com/menesesdouglas/super-trunfo-cidades
