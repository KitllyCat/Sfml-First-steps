#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 06 - Alternar Sprites", Style::Close);
    window.setFramerateLimit(60);

    Texture texturaJugadorA;
    Texture texturaJugadorB;
    if (!texturaJugadorA.loadFromFile("player.png")) {
        cout << "Error: no se encontro player.png" << endl;
        return -1;
    }
    if (!texturaJugadorB.loadFromFile("player2.png")) {
        cout << "Error: no se encontro player2.png" << endl;
        return -1;
    }

    // --- Datos del sprite sheet ---
    const int FRAME_WIDTH  = 64;
    const int FRAME_HEIGHT = 64;
    const int NUM_FRAMES   = 4;

    Sprite jugadorA(texturaJugadorA);
    jugadorA.setScale(4.f, 4.f);
    jugadorA.setPosition(900.f, 500.f);

    Sprite jugadorB(texturaJugadorB);
    jugadorB.setScale(4.f, 4.f);
    jugadorB.setPosition(900.f, 500.f);

    // --- Sprite activo ---
    Sprite* spriteActivo = &jugadorA;

    // --- Control de animación ---
    int frameActual = 0;
    float tiempoAcumulado = 0.f;
    float tiempoPorFrame = 0.15f;

    Clock reloj;

    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed)
                window.close();

            // --- Alternar sprite con teclas ---
            if (e.type == Event::KeyPressed) {
                if (e.key.code == Keyboard::A) {
                    spriteActivo = &jugadorA;
                }
                else if (e.key.code == Keyboard::D) {
                    spriteActivo = &jugadorB;
                }
            }
        }

        float deltaTime = reloj.restart().asSeconds();
        tiempoAcumulado += deltaTime;

        if (tiempoAcumulado >= tiempoPorFrame) {
            tiempoAcumulado = 0.f;
            frameActual++;

            if (frameActual >= NUM_FRAMES)
                frameActual = 0;

            // Recortar el frame del sprite activo
            spriteActivo->setTextureRect(IntRect(
                FRAME_WIDTH * frameActual,
                0,
                FRAME_WIDTH,
                FRAME_HEIGHT
            ));
        }

        // --- Dibujado ---
        window.clear(Color(255, 255, 255));
        window.draw(*spriteActivo); // dibuja el sprite activo
        window.display();
    }

    return 0;
}
