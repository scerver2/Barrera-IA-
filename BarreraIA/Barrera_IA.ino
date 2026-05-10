#include <Servo.h>

// Pins
const int SERVO_PIN = 9;
const int LED_PIN   = 3; //led vermell 
const int Led2 = 5;      // led verd 

// Posicions del servo (pots ajustar-los si cal)
const int ANGLE_REPOS   = 0;   // Barrera baixada
const int ANGLE_ACTIVAR = 90;  // Barrera pujada

Servo barrera;

// Estat actual (només per tenir-ho clar)
char estatActual = 'R'; // Comencem en Repos

void setup() {
  Serial.begin(9600);          // Ha de coincidir amb la velocitat de la pàgina web
  barrera.attach(SERVO_PIN);
  pinMode(LED_PIN, OUTPUT);
  pinMode(Led2,OUTPUT);

  // Estat inicial: Repos
  posarEnRepos();

  // Missatge de debug al Monitor Sèrie (opcional)
  Serial.println("Barrera IA llesta. Esperant ordres 'R' o 'A'...");
}

void loop() {
  // Si arriba alguna cosa pel port sèrie...
  if (Serial.available() > 0) {
    char ordre = Serial.read();

    // Ignorem salts de línia o retorns de carro ('\n', '\r')
    if (ordre == '\n' || ordre == '\r') {
      return;
    }

    // Debug (opcional)
    Serial.print("Ordre rebuda: ");
    Serial.println(ordre);

    if (ordre == 'R') {
      posarEnRepos();
      estatActual = 'R';
    } 
    else if (ordre == 'A') {
      posarEnActivar();
      estatActual = 'A';
    }
    // ací pots afegir una tercera opció, ex: 'B' = blocatge, etc.
  }

  // No cal fer res més al loop, l’Arduino només reacciona a ordres
}

// ---------- Funcions auxiliars ----------

void posarEnRepos() {
  barrera.write(ANGLE_REPOS);   // Barrera baixada
  digitalWrite(LED_PIN, HIGH);   // LED vermell encés
  digitalWrite(Led2, LOW);  // LED verd apagat
}

void posarEnActivar() {
  barrera.write(ANGLE_ACTIVAR); // Barrera pujada
  digitalWrite(LED_PIN, LOW);  // LED vermell apagat
  digitalWrite(Led2, HIGH); //   LED verd encés
  delay(3000);
}
