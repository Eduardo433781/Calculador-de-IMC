# Calculador de IMC

Aplicativo de terminal escrito em C que calcula o Índice de Massa Corporal (IMC) com base no peso e na altura informados.

O cálculo usado é:

```
IMC = peso (kg) / altura (m)²
```

## Funcionalidades

- Exibe um menu para calcular o IMC ou sair do programa.
- Permite fazer novos cálculos enquanto o programa estiver aberto.
- Mostra o IMC com duas casas decimais.
- Classifica o resultado conforme as faixas implementadas no código:
  - Abaixo de 18,5: abaixo do peso
  - De 18,5 até menos de 25: peso normal
  - De 25 até menos de 30: sobrepeso
  - 30 ou mais: obesidade
- Rejeita peso e altura que não sejam números válidos ou que sejam menores ou iguais a zero.

## Tecnologias

- Linguagem C
- Biblioteca padrão `stdio.h` para entrada e saída no terminal
- GCC (ou outro compilador C compatível) para compilar

Não há dependências externas.

## Estrutura do repositório

```
Calculador-de-IMC/
├── .vscode/
│   └── launch.json
├── main.c
├── main.exe
└── tempCodeRunnerFile.c
```

- `main.c`: código-fonte principal do programa.
- `main.exe`: executável já incluído no repositório para Windows.
- `.vscode/launch.json`: arquivo de configuração do VS Code; atualmente não define configurações de execução ou depuração.
- `tempCodeRunnerFile.c`: arquivo temporário com um trecho de código, não necessário para compilar o programa principal.

## Como compilar e executar

Instale um compilador C, como o GCC. No Windows, é possível usar uma distribuição como MinGW-w64.

### Windows (PowerShell)

Na pasta do projeto, compile e execute:

```powershell
gcc main.c -o imc.exe
.\imc.exe
```

### Linux ou macOS

Na pasta do projeto, compile e execute:

```bash
gcc main.c -o imc
./imc
```

O repositório também contém o arquivo `main.exe` já compilado para Windows. Para usar a versão mais recente do código-fonte, compile `main.c) com os comandos acima.

## Como usar

1. Escolha `1` para calcular ou `2` para sair.
2. Ao escolher calcular, informe o peso em quilogramas e a altura em metros. Por exemplo: peso `70` e altura `1.75`.
3. Consulte o resultado e a classificação exibidos. O menu aparecerá novamente para permitir outro cálculo.

## Limitações

- O programa funciona somente pelo terminal e não salva resultados ou histórico.
- Usa faixas fixas de classificação e não considera idade ou outros contextos individuais.
- O resultado é apenas informativo e não substitui uma avaliação profissional de saúde.
