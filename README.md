# Sfml (Simple and Fast Multimedia Library)

SFML es una biblioteca de desarrollo de software multiplataforma diseñada para proporcionar una interfaz de programación de aplicaciones (API) sencilla para diversos componentes multimedia en computadoras. EL propósito de este repositorio es almacenar el aprendizaje desarrollado con esta herramienta para su uso, enfocándolo en el inicio del desarrollo de videojuegos en c++.

## Distribucion de clases:

1. Introducción y configuración del entorno
- Objetivo: tener DevC++ configurado con SFML 2.5.1 y compilar el primer "hola ventana".
- Entregables: proyecto base, instrucciones de linking y estructura de carpetas.
- Ejercicio: compilar una ventana vacía.

2. Bucle principal, eventos y cierre de ventana
- Objetivo: entender el loop principal, pollEvent, eventos de teclado y ratón.
- Ejercicio: cerrar con ESC, cambiar fondo con tecla.

3. Texturas, Sprites y carga de imágenes
- Objetivo: usar sf::Texture, sf::Sprite, gestionar recursos y prevenir pérdidas de memoria.
- Ejercicio: mostrar una imagen y moverla con las teclas.

4. Texto y fuentes (sf::Text, sf::Font)
- Objetivo: mostrar diálogos, HUD, y manejar fuentes (TTF).
- Ejercicio: crear un pequeño HUD con nombre, vida y un texto de diálogo.

5. Animaciones por sprite sheet
- Objetivo: animar personajes con sprite sheets y temporización.
- Ejercicio: animación caminando (idle/walk) con cambio de frame según tiempo.

6. Input avanzado y control de jugador
- Objetivo: input continuo vs eventos, control de física simple (velocidad), detección de colisiones básicas.
- Ejercicio: mover personaje con velocidad variable y colisionar con rectángulos.

7. Cámaras y vistas (sf::View)
- Objetivo: centrar la cámara en el jugador, zonas fijas, límites.
- Ejercicio: crear mapa más grande que la pantalla y hacer que la cámara siga al jugador.

8. Tilemaps y mapas por capas (TMX básico)
- Objetivo: mostrar tilemaps (o crear uno simple en código), optimizar dibujo por vista.
- Ejercicio: crear un pequeño mapa 20x15 con colisiones en capas.

9. Sistema de diálogo (novela visual)
- Objetivo: diseño de una clase DialogManager que muestre líneas, avanza con tecla, con portrait y opción de elección.
- Ejercicio: implementar diálogo con 3 opciones que cambian una variable de estado.

10. Audio (sf::Music y sf::Sound)
- Objetivo: música de fondo, efectos cortos, volumen y estados (pause/resume).
- Ejercicio: reproducir música, botón para silenciar SFX/Music.

11. Arquitectura orientada a objetos para un RPG
- Objetivo: diseñar clases: Entity, Player : Entity, NPC : Entity, Item, Inventory, Scene/State.
- Ejercicio: esqueleto de clases con interacciones básicas.

12. Sistema de escenas/estados (menu, juego, inventario, diálogo)
- Objetivo: implementar StateManager para cambiar entre pantallas y ahorrar lógica.
- Ejercicio: menú principal -> juego -> pausa -> inventario.

13. Guardar/cargar (serialización simple)
- Objetivo: persistir progreso (JSON sencillo o CSV), guardar posición, inventario y estado de misiones.
- Ejercicio: guardar y cargar estado del jugador.

14. Pulido final, despliegue y GitHub
- Objetivo: paquete final, estructura de repo, .gitignore recomendado, cómo subir releases y documentación (README).
- Ejercicio: subir el proyecto inicial a GitHub con README y preview (GIF o imágenes).

## Dev.

- **Kitlly~**     [![GitHub](https://img.shields.io/badge/GitHub-000?style=flat&logo=github&logoColor=white)](https://github.com/KitllyCat)
