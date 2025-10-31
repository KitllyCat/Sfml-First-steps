#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 02 - Bucle y eventos");
	
	Color fondo = Color::Black;
    // Bucle principal del programa (game loop)
    while (window.isOpen()) {

        // 1️⃣ Manejo de eventos
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed) {
                window.close(); // Cierra la ventana al presionar la "X"
            }
			if (e.type == Event::KeyPressed && e.key.code == Keyboard::Up){
                cout<<"arriba"<<endl;
            }
            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Down){
                cout<<"abajo"<<endl;
            }
            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Enter){
                fondo=Color::Blue;
            }
            // Ejemplo: cerrar con la tecla Escape
            if (e.type == Event::KeyPressed && e.key.code == Keyboard::X){
                window.close();
            }
        }

        // 2️⃣ Lógica del programa (movimientos, actualizaciones, etc.)

        // 3️⃣ Dibujar o limpiar pantalla
        window.clear(fondo);
        window.display();
    }

    return 0;
}
