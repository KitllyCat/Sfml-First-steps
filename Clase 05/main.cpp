#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 05 - Texto y Fuentes", Style::Close);
    window.setFramerateLimit(60);

    Font fuente;
    if (!fuente.loadFromFile("fuente.ttf")) {
        cout << "Error: No se pudo cargar la fuente." << endl;
        return -1;
    }

    Text texto;
    texto.setFont(fuente);
    texto.setString("Primer mensaje de la ventana");
    texto.setCharacterSize(80);
    texto.setFillColor(Color::White);
    texto.setStyle(Text::Bold);
    texto.setPosition(500.f, 400.f);

    Text instruccion;
    instruccion.setFont(fuente);
    instruccion.setString("Presiona [Espacio] para cambiar el mensaje  -  [Enter] para pantalla blanca 1s");
    instruccion.setCharacterSize(40);
    instruccion.setFillColor(Color(200, 200, 200));
    instruccion.setPosition(480.f, 600.f);

    // Texto alternativo para mostrar después del parpadeo
    Text titulo;
    titulo.setFont(fuente);
    titulo.setString("Has cambiado de mensaje!!!");
    titulo.setCharacterSize(75);
    titulo.setFillColor(Color::White);
    titulo.setStyle(Text::Bold);
    titulo.setPosition(500.f, 400.f);

    Clock clock;
    bool cambiado = false;
    bool mostrarPantallaBlanca = false;
    bool cambiarTexto = false;

    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed) {
                window.close();
            }

            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Space) {
                if (!cambiado) {
                    texto.setString("Este es un nuevo mensaje~!!!");
                    texto.setFillColor(Color(255, 200, 100));
                    cambiado = true;
                } else {
                    texto.setString("Primer mensaje de la ventana");
                    texto.setFillColor(Color::White);
                    cambiado = false;
                }
            }

            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Enter) {
                mostrarPantallaBlanca = true;
                clock.restart();
            }
        }

        if (mostrarPantallaBlanca) {
            if (clock.getElapsedTime().asSeconds() >= 1.0f) {
                mostrarPantallaBlanca = false;
                cambiarTexto = true;
            }
        }

        if (cambiarTexto) {
            texto.setString(titulo.getString());
            texto.setCharacterSize(titulo.getCharacterSize());
            texto.setFillColor(titulo.getFillColor());
            texto.setStyle(titulo.getStyle());
            texto.setPosition(titulo.getPosition());
            cambiado = true;        // mantenemos el estado coherente
            cambiarTexto = false;   // ya aplicado
        }
        
        if (mostrarPantallaBlanca) {
            window.clear(Color::White);
        } else {
            window.clear(Color::Black);
        }
        
        window.draw(texto);
        window.draw(instruccion);
        window.display();
    }

    return 0;
}
