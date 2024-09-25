# Cálculo de Triângulos com C++

Este projeto em C++ permite realizar operações matemáticas diversas relacionadas a triângulos. O programa oferece as seguintes funcionalidades:

- **Verificar se os lados formam um triângulo válido**: Utiliza a desigualdade triangular 

    <p>A + B > C<p/> <p>A + C > B<p/> <p>B + C > A<p/>

- **Classificação por lados**: Identifica se o triângulo é ESCALENO, ISÓSCELES ou EQUILÁTERO.
- **Classificação por ângulos**: Determina se o triângulo é retângulo, acutângulo ou obtusângulo.
- **Funções trigonométricas**: Calcula o seno, cosseno e tangente de um ângulo fornecido em graus.
- **Teorema de Pitágoras**: Calcula a hipotenusa dados os dois catetos de um triângulo retângulo.

Além disso, o programa possui uma "inteligência artificial simples" que oferece sugestões quando são detectadas entradas incorretas, como quando os lados não formam um triângulo válido ou quando ângulos somam valores inconsistentes.

## Preparação do Ambiente

Para compilar e executar o código, siga estes passos:

### 1. Instalar o GCC (GNU Compiler Colection)

(caso você use GNU/LINUX às seguintes distribuições)
- **Linux** (Debian/Ubuntu):

  ```bash
  sudo apt update
  sudo apt install g++

### Windows (todas as versões)
Recomendamos instalar o MinGW. Siga as instruções fornecidas no site oficial abaixo.
<p>https://sourceforge.net/projects/mingw/<p/>

## Linux (verificando a instalação em ambiente Linux) 

- **após instalar o GCC, verifique a versão do compilador para confirmar que foi instalado corretamente**

```bash
g++ --version
```
**compile o código em sua máquina (na pasta do projeto)**

```bash
g++ triangulo.cpp -o triangulo -lm
```

**Depois de compilar, execute o programa com o comando:**
(para Linux/Mac)

```bash
./triangulo
```
(para windows)

```bash
triangulo.exe
```

# Como configurar C/C++ no Windows (8, 10 e 11)

### Configurando C/C++ com MinGW

<p>Acesse o site oficial do MinGW e baixe o instalador do MinGW.<p><p/>
<p>o instalador e selecione a opção "Basic Setup". Na lista, selecione o pacote mingw32-gcc-g++ e clique em “Mark for Installation”.</p> 
<p>Clique em “Apply Changes” para instalar o compilador.</p> 

### Configurando as variáveis de ambiente 

<p>Após a instalação, abra o menu "Iniciar" e pesquise por "Variáveis de Ambiente".<p/>
Selecione "Editar as variáveis de ambiente do sistema".<p/>
Em "Variáveis do sistema", encontre a variável Path e clique em "Editar".<p/>
Adicione o caminho para o diretório bin do MinGW. Normalmente ele está localizado em:
  
```bash
C:\MinGW\bin
```

Clique em "OK" para salvar as mudanças.

**Testar a Instalação**

Abra o Prompt de Comando e digite:
```bash
g++ --version
```

Se tudo estiver configurado corretamente, você verá a versão do compilador.

### compilando um arquivo C++ no Windows ou Linux (Debian/Ubuntu/Arch) via CLI (Command-line interface)

- **Crie um arquivo hello.cpp**

```bash
mkdir hello.cpp
```

- **Para entrar em um arquivo, use "cd [arquivo]"**

```bash
cd hello.cpp
```

- **Abra com o Visual Studio Code (com o comando "code .") ou VIM/NVIM (para ambientes Linux ou com WSL2), ou o seu editor de código preferido. Cole o código abaixo:**

```bash
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
No Prompt de Comando, navegue até a pasta onde o arquivo foi salvo e compile o programa:

```bash
g++ hello.cpp -o hello
```

- **Execute o programa:**

```bash
./hello
```

#### Com qualquer uma dessas opções, você estará preparado para compilar e executar programas em C++ no Windows ou Linux! haha 😁
