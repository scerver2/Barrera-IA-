🚧 Control de barrera automàtica amb Intel·ligència Artificial i Arduino
🚧 Control de barrera automática con Inteligencia Artificial y Arduino
> **Català** · [Castellano](#-versión-en-castellano)
---
🟨 Versió en català
Projecte educatiu STEM en què l'alumnat dissenya, construeix i programa una
barrera automàtica controlada mitjançant Intel·ligència Artificial.
El projecte combina Intel·ligència Artificial, programació, electrònica,
disseny i fabricació digital per resoldre un repte real: crear un sistema capaç
de reconéixer visualment una situació mitjançant un model d'IA i actuar sobre
una barrera física controlada amb Arduino.
---
🌐 Accés al projecte
Aplicació web
👉 https://scerver2.github.io/Barrera-IA-/
Des d'aquesta aplicació es pot carregar un model de Teachable Machine,
utilitzar la càmera del dispositiu i comunicar-se amb Arduino mitjançant
Web Serial API.
📘 Recurs Educatiu Obert – eXeLearning
👉 https://scerver2.github.io/Barrera-IA-/docs/
El recurs eXeLearning conté la proposta didàctica completa:
objectius d'aprenentatge;
competències i sabers;
metodologia;
desenvolupament de les sessions;
materials i recursos;
avaluació;
atenció a la diversitat;
instruccions per reproduir l'experiència.
---
🎯 Objectiu del projecte
L'objectiu és que l'alumnat passe de ser consumidor de tecnologia a
dissenyar, entrenar, programar i construir un sistema intel·ligent funcional.
L'alumnat ha de:
Analitzar el problema i proposar una solució.
Crear i entrenar un model d'Intel·ligència Artificial amb Teachable Machine.
Comprovar i millorar el funcionament del model.
Programar la comunicació entre el navegador i Arduino.
Controlar actuadors físics a partir de les prediccions de la IA.
Construir i muntar el prototip de la barrera.
Provar el sistema, detectar errors i introduir millores.
Reflexionar sobre les possibilitats i limitacions de la Intel·ligència Artificial.
---
🤖 Com funciona?
El sistema integra tres elements principals:
1. Intel·ligència Artificial
L'alumnat crea un model de classificació d'imatges amb
Teachable Machine.
2. Aplicació web
El model s'executa directament al navegador mitjançant TensorFlow.js.
La càmera detecta la classe entrenada i, quan es compleixen les condicions
programades, l'aplicació envia una ordre al microcontrolador.
3. Arduino
La comunicació entre la pàgina web i Arduino es realitza mitjançant
Web Serial API.
Arduino rep l'ordre i controla els elements físics del prototip,
com ara el servomotor que obri o tanca la barrera.
---
🧠 Tecnologies utilitzades
Intel·ligència Artificial
Google Teachable Machine
TensorFlow.js
Arduino
HTML
CSS
JavaScript
Web Serial API
Electrònica
Servomotors
Fabricació digital
Disseny i construcció de prototips
GitHub
GitHub Pages
eXeLearning
---
💻 Competència digital de l'alumnat
El projecte permet treballar de manera integrada diferents dimensions de la
competència digital.
L'alumnat:
crea contingut digital;
entrena i avalua un sistema d'Intel·ligència Artificial;
programa una aplicació;
estableix comunicació entre programari i maquinari;
resol problemes tècnics;
experimenta mitjançant prova-error;
analitza les limitacions dels sistemes d'IA;
desenvolupa estratègies de pensament computacional;
treballa de manera col·laborativa en el desenvolupament d'un producte digital.
---
🛠️ Metodologia
La proposta es desenvolupa mitjançant un enfocament actiu basat en:
Aprenentatge Basat en Projectes (ABP).
Resolució de problemes.
Pensament computacional.
Metodologia STEM.
Experimentació.
Aprenentatge cooperatiu.
Disseny iteratiu.
Prova, detecció d'errors i millora del prototip.
El docent planteja el repte i acompanya el procés, mentre que l'alumnat
assumeix un paper actiu en la construcció de la solució.
---
🔄 Fases del projecte
El projecte segueix un procés progressiu:
Repte → Disseny → Entrenament de la IA → Programació → Construcció →
Integració → Proves → Millora → Producte final
Aquest procés permet comprendre que un sistema d'Intel·ligència Artificial
no funciona de manera aïllada, sinó que forma part d'un sistema tecnològic
més ampli.
---
♻️ Projecte replicable
El projecte ha estat dissenyat perquè qualsevol docent o centre educatiu
puga adaptar-lo al seu context.
En aquest repositori es proporcionen:
codi font;
aplicació web;
exemples;
recursos gràfics;
documentació;
proposta didàctica completa en eXeLearning;
accés al material mitjançant GitHub Pages.
No és necessari disposar d'infraestructura específica d'Intel·ligència
Artificial: l'entrenament del model es pot realitzar amb Teachable Machine
i la inferència s'executa directament des del navegador.
---
📂 Estructura del repositori
```text
Barrera-IA-
│
├── Codis/           # Programes i exemples
├── Imatges/         # Recursos gràfics del projecte
├── docs/            # Recurs Educatiu Obert creat amb eXeLearning
├── index.html       # Aplicació web principal
├── README.md        # Documentació del projecte
└── LICENSE          # Llicència del projecte
```
---
📖 Recurs Educatiu Obert
La proposta didàctica completa ha estat publicada en format web mitjançant
eXeLearning:
👉 https://scerver2.github.io/Barrera-IA-/docs/
Aquest recurs permet que altres docents puguen consultar, reutilitzar,
modificar i adaptar la proposta educativa.
---
👨‍🏫 Autoria
Salvador Cervera
Institut Francesc Ferrer i Guàrdia
Projecte educatiu desenvolupat en l'àmbit de Tecnologia, programació,
Intel·ligència Artificial i robòtica educativa.
---
📜 Llicència
Els materials educatius, textos, documentació i recursos originals d'aquest
projecte es publiquen sota la llicència:
Creative Commons Reconeixement-CompartirIgual 4.0 Internacional  
(CC BY-SA 4.0)
https://creativecommons.org/licenses/by-sa/4.0/deed.ca
Aquesta llicència permet compartir i adaptar els materials, sempre que es
reconega l'autoria i les obres derivades es distribuïsquen sota la mateixa
llicència.
Els recursos o components de tercers mantenen, si escau, les seues
respectives llicències.
---
🏫 Finalitat educativa
Aquest projecte té finalitat exclusivament educativa i no incorpora
publicitat ni finalitats comercials.
---
🟥 Versión en castellano
Proyecto educativo STEM en el que el alumnado diseña, construye y programa una
barrera automática controlada mediante Inteligencia Artificial.
El proyecto combina Inteligencia Artificial, programación, electrónica,
diseño y fabricación digital para resolver un reto real: crear un sistema capaz
de reconocer visualmente una situación mediante un modelo de IA y actuar sobre
una barrera física controlada con Arduino.
---
🌐 Acceso al proyecto
Aplicación web
👉 https://scerver2.github.io/Barrera-IA-/
Desde esta aplicación se puede cargar un modelo de Teachable Machine,
utilizar la cámara del dispositivo y comunicarse con Arduino mediante
Web Serial API.
📘 Recurso Educativo Abierto – eXeLearning
👉 https://scerver2.github.io/Barrera-IA-/docs/
El recurso eXeLearning contiene la propuesta didáctica completa:
objetivos de aprendizaje;
competencias y saberes;
metodología;
desarrollo de las sesiones;
materiales y recursos;
evaluación;
atención a la diversidad;
instrucciones para reproducir la experiencia.
---
🎯 Objetivo del proyecto
El objetivo es que el alumnado pase de ser consumidor de tecnología a
diseñar, entrenar, programar y construir un sistema inteligente funcional.
El alumnado debe:
Analizar el problema y proponer una solución.
Crear y entrenar un modelo de Inteligencia Artificial con Teachable Machine.
Comprobar y mejorar el funcionamiento del modelo.
Programar la comunicación entre el navegador y Arduino.
Controlar actuadores físicos a partir de las predicciones de la IA.
Construir y montar el prototipo de la barrera.
Probar el sistema, detectar errores e introducir mejoras.
Reflexionar sobre las posibilidades y limitaciones de la Inteligencia Artificial.
---
🤖 ¿Cómo funciona?
El sistema integra tres elementos principales:
1. Inteligencia Artificial
El alumnado crea un modelo de clasificación de imágenes con
Teachable Machine.
2. Aplicación web
El modelo se ejecuta directamente en el navegador mediante TensorFlow.js.
La cámara detecta la clase entrenada y, cuando se cumplen las condiciones
programadas, la aplicación envía una orden al microcontrolador.
3. Arduino
La comunicación entre la página web y Arduino se realiza mediante
Web Serial API.
Arduino recibe la orden y controla los elementos físicos del prototipo,
como el servomotor que abre o cierra la barrera.
---
🧠 Tecnologías utilizadas
Inteligencia Artificial
Google Teachable Machine
TensorFlow.js
Arduino
HTML
CSS
JavaScript
Web Serial API
Electrónica
Servomotores
Fabricación digital
Diseño y construcción de prototipos
GitHub
GitHub Pages
eXeLearning
---
💻 Competencia digital del alumnado
El proyecto permite trabajar de manera integrada diferentes dimensiones de la
competencia digital.
El alumnado:
crea contenido digital;
entrena y evalúa un sistema de Inteligencia Artificial;
programa una aplicación;
establece comunicación entre software y hardware;
resuelve problemas técnicos;
experimenta mediante ensayo-error;
analiza las limitaciones de los sistemas de IA;
desarrolla estrategias de pensamiento computacional;
trabaja de manera colaborativa en el desarrollo de un producto digital.
---
🛠️ Metodología
La propuesta se desarrolla mediante un enfoque activo basado en:
Aprendizaje Basado en Proyectos (ABP).
Resolución de problemas.
Pensamiento computacional.
Metodología STEM.
Experimentación.
Aprendizaje cooperativo.
Diseño iterativo.
Prueba, detección de errores y mejora del prototipo.
El docente plantea el reto y acompaña el proceso, mientras que el alumnado
asume un papel activo en la construcción de la solución.
---
🔄 Fases del proyecto
El proyecto sigue un proceso progresivo:
Reto → Diseño → Entrenamiento de la IA → Programación → Construcción →
Integración → Pruebas → Mejora → Producto final
Este proceso permite comprender que un sistema de Inteligencia Artificial
no funciona de manera aislada, sino que forma parte de un sistema tecnológico
más amplio.
---
♻️ Proyecto replicable
El proyecto ha sido diseñado para que cualquier docente o centro educativo
pueda adaptarlo a su contexto.
En este repositorio se proporcionan:
código fuente;
aplicación web;
ejemplos;
recursos gráficos;
documentación;
propuesta didáctica completa en eXeLearning;
acceso al material mediante GitHub Pages.
No es necesario disponer de infraestructura específica de Inteligencia
Artificial: el entrenamiento del modelo se puede realizar con Teachable Machine
y la inferencia se ejecuta directamente desde el navegador.
---
📂 Estructura del repositorio
```text
Barrera-IA-
│
├── Codis/           # Programas y ejemplos
├── Imatges/         # Recursos gráficos del proyecto
├── docs/            # Recurso Educativo Abierto creado con eXeLearning
├── index.html       # Aplicación web principal
├── README.md        # Documentación del proyecto
└── LICENSE          # Licencia del proyecto
```
---
📖 Recurso Educativo Abierto
La propuesta didáctica completa ha sido publicada en formato web mediante
eXeLearning:
👉 https://scerver2.github.io/Barrera-IA-/docs/
Este recurso permite que otros docentes puedan consultar, reutilizar,
modificar y adaptar la propuesta educativa.
---
👨‍🏫 Autoría
Salvador Cervera
Institut Francesc Ferrer i Guàrdia
Proyecto educativo desarrollado en el ámbito de Tecnología, programación,
Inteligencia Artificial y robótica educativa.
---
📜 Licencia
Los materiales educativos, textos, documentación y recursos originales de este
proyecto se publican bajo la licencia:
Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional  
(CC BY-SA 4.0)
https://creativecommons.org/licenses/by-sa/4.0/deed.es
Esta licencia permite compartir y adaptar los materiales, siempre que se
reconozca la autoría y las obras derivadas se distribuyan bajo la misma licencia.
Los recursos o componentes de terceros mantienen, en su caso, sus respectivas
licencias.
---
🏫 Finalidad educativa
Este proyecto tiene finalidad exclusivamente educativa y no incorpora
publicidad ni fines comerciales.
