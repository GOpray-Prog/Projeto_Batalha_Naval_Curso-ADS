# Batalha Naval - Versão Beta 1.1

## Sobre o Jogo
Este é um jogo de **Batalha Naval** desenvolvido em **linguagem C**. O objetivo é posicionar estrategicamente seus navios no tabuleiro e preparar-se para a batalha!

## Funcionalidades
- Tabuleiro de **10x10** representado por coordenadas de linha (0-9) e coluna (a-j).
- Dois navios de **tamanho 3**, cada um ocupando **três células consecutivas**.
- Verifica se os navios estão dentro dos limites do tabuleiro.
**Restrição de sobreposição**: Verifica se os navios estão na mesma posição, garantindo que cada célula seja ocupada por apenas um navio

## Como Jogar
1. O tabuleiro será exibido no console.
2. Digite as coordenadas do primeiro navio (exemplo: `2b, 3c, 4d`).
3. Digite as coordenadas do segundo navio (exemplo: `5e, 6f, 7g`).
4. O tabuleiro atualizado será exibido mostrando as posições dos navios.

## Requisitos
- Compilador C (GCC, Clang, etc.).
- Terminal para execução do programa.

## Como Compilar e Executar
Abra um terminal e execute os seguintes comandos:
```sh
gcc batalha_naval.c -o batalha_naval
./batalha_naval
```

## Melhorias Futuras
- Implementar verificação para impedir sobreposição de navios.
- Criar mecânica de ataque e defesa.
- Adicionar modo multiplayer.

## Autor
Desenvolvido por **Guilherme Oliveira - GOPRAY**.

---

Divirta-se jogando! 🚢💥

