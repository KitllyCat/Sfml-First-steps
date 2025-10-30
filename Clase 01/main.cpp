#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Leccion 02 - Bucle y eventos");

    // Bucle principal del programa (game loop)
    while (window.isOpen()) {

        // 1️⃣ Manejo de eventos
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed) {
                window.close(); // Cierra la ventana al presionar la "X"
            }

            // Ejemplo: cerrar con la tecla Escape
            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Escape
			) {
                window.close();
            }
        }

        // 2️⃣ Lógica del programa (movimientos, actualizaciones, etc.)

        // 3️⃣ Dibujar o limpiar pantalla
        window.clear(Color::Black);
        window.display();
    }

    return 0;
}
