Projecte: Barrera Automatitzada amb IA i Arduino 🚀 (Català)
Aquest projecte ha estat desenvolupat per a l'assignatura de Tecnologia de 4t d'ESO de l'Institut Francesc Ferrer i Guàrdia. L'objectiu és integrar la Intel·ligència Artificial amb el control físic de maquinari mitjançant Arduino.

📋 Funcionament del Sistema
El projecte es basa en la idea de connectar un "cervell" (el model d'IA al navegador) amb un "cos" (l'Arduino que actua físicament).
Captura i Processament (IA): Mitjançant una webcam, el model de Teachable Machine identifica dos estats: "Repos" (braços avall) i "Activar" (braç amunt amb palmell de la mà obert).
Comunicació: La pàgina web (HTML/JS) detecta la classe amb més probabilitat i envia un caràcter pel Port Sèrie:
'R' per a Repòs.
'A' per a Activar.
Acció Física (Arduino): L'Arduino rep l'ordre a 9600 bauds i actua:
'R': El servomotor baixa la barrera (0°) i el LED s'apaga.
'A': El servomotor puja la barrera (90°) i el LED s'encén.

🛠️ Materials i Requisits
Maquinari: Arduino UNO, servomotor SG90, LED, resistència de 220Ω i estructura tallada per làser.
Programari: Navegador Chrome/Edge (per Web Serial API), IDE d'Arduino i model de Teachable Machine.

📜 Llicència i Crèdits
Aquest projecte es distribueix sota una llicència Creative Commons. En cas de compartir, utilitzar o modificar aquest material, és obligatori citar l'autor original:
Autor: Salvador Cervera (Institut Francesc Ferrer i Guàrdia).

--------------------------------------------------------------------------------
Proyecto: Barrera Automatizada con IA y Arduino 🚀 (Castellano)
Este proyecto ha sido desarrollado para la asignatura de Tecnología de 4º de ESO del Institut Francesc Ferrer i Guàrdia. El objetivo es integrar la Inteligencia Artificial con el control físico de hardware mediante Arduino.

📋 Funcionamiento del Sistema
El proyecto se basa en la idea de conectar un "cerebro" (el modelo de IA en el navegador) con un "cuerpo" (el Arduino que actúa físicamente).
Captura y Procesamiento (IA): Mediante una webcam, el modelo de Teachable Machine identifica dos estados: "Repos" (brazos abajo) y "Activar" (brazo arriba con palma de la mano abierta).
Comunicación: La página web (HTML/JS) detecta la clase con mayor probabilidad y envía un carácter por el Puerto Serie:
'R' para Reposo.
'A' para Activar.
Acción Física (Arduino): El Arduino recibe la orden a 9600 bauds y actúa:
'R': El servomotor baja la barrera (0°) y el LED se apaga.
'A': El servomotor sube la barrera (90°) y el LED se enciende.

🛠️ Materiales y Requisitos
Hardware: Arduino UNO, servomotor SG90, LED, resistencia de 220Ω y estructura cortada por láser.
Software: Navegador Chrome/Edge (para Web Serial API), IDE de Arduino y modelo de Teachable Machine.

📜 Licencia y Créditos
Este proyecto se distribuye bajo una licencia Creative Commons. En caso de compartir, utilizar o modificar este material, es obligatorio citar al autor original:
Autor: Salvador Cervera (Institut Francesc Ferrer i Guàrdia)
