# # 🚦 Controle de Cruzamento com Semáforos e Pedestres

## Sobre o Projeto
Este projeto foi desenvolvido utilizando **Arduino** para simular o controle de tráfego em um cruzamento urbano. Ele gerencia o tempo e a sincronia entre dois semáforos de veículos independentes e um semáforo exclusivo para pedestres. 

Esse projeto me ajudou a desenvolver habilidades essenciais de lógica de programação (controle de fluxo e temporizadores) e entendimento básico de hardware/eletrônica, conceitos fundamentais para quem atua na área de **Cybersecurity** e precisa entender como sistemas físicos interagem com software (IoT).

## Tecnologias e Componentes Utilizados
* Linguagem C++ (Arduino IDE)
* 1 Placa Arduino UNO
* 6 LEDs para os carros (2x Vermelhos, 2x Amarelos, 2x Verdes)
* 2 LEDs para pedestres (1x Vermelho, 1x Verde)
* Resistores, Jumpers e Protoboard

## Como funciona a Lógica
O sistema utiliza a função `delay()` para gerenciar o estado das portas lógicas (HIGH/LOW). 
1. O Semáforo 1 abre para os carros enquanto o Semáforo 2 e o de Pedestres permanecem fechados.
2. Ocorre a transição de segurança (Amarelo) para o Semáforo 1.
3. O Semáforo de Pedestres é liberado de forma segura.
4. O ciclo se alterna liberando o fluxo para o Semáforo 2.
