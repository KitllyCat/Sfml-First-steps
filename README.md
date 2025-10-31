# Sfml (Simple and Fast Multimedia Library)

SFML es una biblioteca de desarrollo de software multiplataforma diseñada para proporcionar una interfaz de programación de aplicaciones (API) sencilla para diversos componentes multimedia en computadoras. EL propósito de este repositorio es almacenar el aprendizaje desarrollado con esta herramienta para su uso, enfocándolo en el inicio del desarrollo de videojuegos en c++.

## Distribucion de clases:

1. Introducción y configuración del entorno
- Objetivo: Tener DevC++ configurado con SFML 2.5.1 y compilar el primer "hola ventana".
- Entregables: Proyecto base, instrucciones de linking y estructura de carpetas.
- Ejercicio: Compilar una ventana vacía.

2. Bucle principal, eventos y cierre de ventana
- Objetivo: Entender el loop principal, pollEvent, eventos de teclado y ratón.
- Ejercicio: Cerrar con ESC, cambiar fondo con tecla.

3. Dibujar formas básicas en SFML
- Objetivo: Dibujar figuras geométricas básicas
- Ejercicio: Crear una escena donde aparezcan al menos 3 figuras distintas

4. Texturas, Sprites y carga de imágenes
- Objetivo: Usar sf::Texture, sf::Sprite, gestionar recursos y prevenir pérdidas de memoria.
- Ejercicio: Mostrar una imagen y moverla con las teclas.

5. Texto y fuentes (sf::Text, sf::Font)
- Objetivo: Mostrar diálogos, HUD, y manejar fuentes (TTF).
- Ejercicio: Crear un pequeño HUD con nombre, vida y un texto de diálogo.

6. Animaciones por sprite sheet
- Objetivo: Animar personajes con sprite sheets y temporización.
- Ejercicio: Animación caminando (idle/walk) con cambio de frame según tiempo.

7. Input avanzado y control de jugador
- Objetivo: Input continuo vs eventos, control de física simple (velocidad), detección de colisiones básicas.
- Ejercicio: Mover personaje con velocidad variable y colisionar con rectángulos.

8. Cámaras y vistas (sf::View)
- Objetivo: Centrar la cámara en el jugador, zonas fijas, límites.
- Ejercicio: Crear mapa más grande que la pantalla y hacer que la cámara siga al jugador.

9. Tilemaps y mapas por capas (TMX básico)
- Objetivo: Mostrar tilemaps (o crear uno simple en código), optimizar dibujo por vista.
- Ejercicio: Crear un pequeño mapa 20x15 con colisiones en capas.

10. Sistema de diálogo (novela visual)
- Objetivo: Diseño de una clase DialogManager que muestre líneas, avanza con tecla, con portrait y opción de elección.
- Ejercicio: Implementar diálogo con 3 opciones que cambian una variable de estado.

11. Audio (sf::Music y sf::Sound)
- Objetivo: Música de fondo, efectos cortos, volumen y estados (pause/resume).
- Ejercicio: Reproducir música, botón para silenciar SFX/Music.

12. Arquitectura orientada a objetos para un RPG
- Objetivo: Diseñar clases: Entity, Player : Entity, NPC : Entity, Item, Inventory, Scene/State.
- Ejercicio: Esqueleto de clases con interacciones básicas.

13. Sistema de escenas/estados (menu, juego, inventario, diálogo)
- Objetivo: Implementar StateManager para cambiar entre pantallas y ahorrar lógica.
- Ejercicio: Menú principal -> juego -> pausa -> inventario.

14. Guardar/cargar (serialización simple)
- Objetivo: Persistir progreso (JSON sencillo o CSV), guardar posición, inventario y estado de misiones.
- Ejercicio: Guardar y cargar estado del jugador.

15. Pulido final, despliegue y GitHub
- Objetivo: Paquete final, estructura de repo, .gitignore recomendado, cómo subir releases y documentación (README).
- Ejercicio: Subir el proyecto inicial a GitHub con README y preview (GIF o imágenes).

## Dev.

- **Kitlly~**     [![GitHub](https://img.shields.io/badge/GitHub-000?style=flat&logo=github&logoColor=white)](https://github.com/KitllyCat)
