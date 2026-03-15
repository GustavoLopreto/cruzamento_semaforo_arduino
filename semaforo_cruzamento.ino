// Definição dos pinos do primeiro conjunto de LEDs (Semáforo 1)
#define LED_AMAR 12  // LED Amarelo
#define LED_VERD 11  // LED Verde
#define LED_VERM 13  // LED Vermelho

// Definição dos pinos do segundo conjunto de LEDs (Semáforo 2)
#define LED_AMAR2 6  // LED Amarelo
#define LED_VERD2 5  // LED Verde
#define LED_VERM2 7  // LED Vermelho

// Definição dos pinos do semáforo de pedestres (relacionados ao Semáforo 1)
#define PED_VERD 8   // LED Verde de pedestres
#define PED_VERM 9   // LED Vermelho de pedestres

void setup() {
  // Configura os pinos dos LEDs do primeiro conjunto como saída
  pinMode(LED_AMAR, OUTPUT);
  pinMode(LED_VERD, OUTPUT);
  pinMode(LED_VERM, OUTPUT);

  // Configura os pinos dos LEDs do segundo conjunto como saída
  pinMode(LED_AMAR2, OUTPUT);
  pinMode(LED_VERD2, OUTPUT);
  pinMode(LED_VERM2, OUTPUT);

  // Configura os pinos dos LEDs do semáforo de pedestres como saída
  pinMode(PED_VERD, OUTPUT);
  pinMode(PED_VERM, OUTPUT);

  // Inicializa o estado dos LEDs do Semáforo 1 e do Semáforo de pedestres
  // Semáforo 1: Verde aceso, Amarelo e Vermelho apagados
  digitalWrite(LED_VERD, HIGH);
  digitalWrite(LED_AMAR, LOW);
  digitalWrite(LED_VERM, LOW);

  // Semáforo 2: Vermelho aceso, Amarelo e Verde apagados
  digitalWrite(LED_VERD2, LOW);
  digitalWrite(LED_AMAR2, LOW);
  digitalWrite(LED_VERM2, HIGH);

  // Semáforo de pedestres: Vermelho aceso (pedestres não podem atravessar)
  digitalWrite(PED_VERD, LOW);
  digitalWrite(PED_VERM, HIGH);
}

void loop() {
  // Semáforo 1: Verde, Semáforo 2: Vermelho, Pedestres: Vermelho
  delay(10000); // Mantém o semáforo 1 verde por 10 segundos

  // Transição do Semáforo 1: Verde -> Amarelo -> Vermelho
  digitalWrite(LED_VERD, LOW); 
  digitalWrite(LED_AMAR, HIGH); 
  delay(2000); // Mantém o amarelo por 2 segundos

  digitalWrite(LED_AMAR, LOW); 
  digitalWrite(LED_VERM, HIGH); 

  // Semáforo de pedestres: Verde (pedestres podem atravessar)
  digitalWrite(PED_VERM, LOW); 
  digitalWrite(PED_VERD, HIGH); 
  delay(10000); // Mantém o verde por 10 segundos

  // Transição do Semáforo de Pedestres: Verde -> Vermelho
  digitalWrite(PED_VERD, LOW); 
  digitalWrite(PED_VERM, HIGH); 
  delay(1000); // Espera 1 segundo antes de mudar o semáforo 2

  // Semáforo 2: Verde, Semáforo 1: Vermelho, Pedestres: Vermelho
  digitalWrite(LED_VERM2, LOW); 
  digitalWrite(LED_VERD2, HIGH); 
  delay(10000); // Mantém o verde do semáforo 2 por 10 segundos

  // Transição do Semáforo 2: Verde -> Amarelo -> Vermelho
  digitalWrite(LED_VERD2, LOW); 
  digitalWrite(LED_AMAR2, HIGH); 
  delay(2000); // Mantém o amarelo por 2 segundos

  digitalWrite(LED_AMAR2, LOW); 
  digitalWrite(LED_VERM2, HIGH); 
  delay(1000); // Espera 1 segundo antes de mudar o semáforo 1

  // Reinicia o ciclo: Semáforo 1 Verde, Semáforo 2 Vermelho, Pedestres: Vermelho
  digitalWrite(LED_VERM, LOW); 
  digitalWrite(LED_VERD, HIGH); 
}
