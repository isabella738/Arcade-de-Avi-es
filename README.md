# Arcade-de-Avioes
Jogo de terminal de tiro com aviões

!Aviso: só funciona em Windows

Sobre o jogo:
- Contem 3 niveis, sendo o ultimo o Chefão
- A cada nivel, o player tem um level up, ficando mais forte e recebendo um modelo diferente de avião
- A cada nível, os inimigos tambem se desenvolvem, recebendo também uma sprite diferente
- O Chefão tem 2 tipos de ataque que se alternam com o tempo
- "Animacoes" de dano e morte inclusas

Sobre o código:
- O código é baseado em contantes atualizações de tela, que aqui é chamado de frame
- A tela de terminal é sobreescrita varias vezes por segundo, o que é mais rápido que apagar e escrever, mas ainda assim pode apresentar lentidão a depender da máquina
- Para movimentar o jogador, é usada a função nativa do Windows _getch que permite ler um caractere sem apertar enter. Por isso não funciona em outros sistemas operacionais.
- Os inimigos são gerados aleatoriamente após um countdown, e suas posições são armazenadas em vetor
- Cada projetil inimigo tambem tem sua posição armazenada em vetor
- O jogador tem sua própria struct e seu próprio vetor de projéteis, bem como o Chefão

Metas: otimizar o código, adáptá-lo para Linux e consertar bugs

*Observações
- O projeto foi feito em fevereiro, antes de começar a faculdade
- Foi o projeto mais trabalhoso que já fiz (até por causa falta de experiência)
