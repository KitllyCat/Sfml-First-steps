#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
using namespace sf;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 07 - Input avanzado", Style::Close);
    window.setFramerateLimit(60);

    // --- Texturas ---
    Texture texturaCyan, texturaYellow, texturaRed;
    if (!texturaCyan.loadFromFile("caballeroAzul.png")) {
        std::cout << "Error: no se encontro cyan.png" << std::endl;
        return -1;
    }
    if (!texturaYellow.loadFromFile("caballeroAmarillo.png")) {
        std::cout << "Error: no se encontro yellow.png" << std::endl;
        return -1;
    }
    if (!texturaRed.loadFromFile("caballeroRojo.png")) {
        std::cout << "Error: no se encontro red.png" << std::endl;
        return -1;
    }

    // --- Sprite del jugador ---
    Sprite player(texturaCyan);
    player.setPosition(960, 540);

    float speed = 300.f;
    bool enDialogo = false;

    // Fuente y texto
    Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cout << "Error: no se encontro arial.ttf" << std::endl;
    }
    Text textoDialogo("EN DIALOGO", font, 50);
    textoDialogo.setFillColor(Color::White);
    textoDialogo.setPosition(800, 200);

    Clock reloj;

    while (window.isOpen()) {
        float dt = reloj.restart().asSeconds();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();

            // ---- EVENTOS TECLA PRESIONADA ----
            if (event.type == Event::KeyPressed) {
                if (event.key.code == Keyboard::Enter) {
                    enDialogo = !enDialogo;   // Cambia estado
                }
            }

            // ---- EVENTO CLICK ----
            if (event.type == Event::MouseButtonPressed) {
                if (event.mouseButton.button == Mouse::Left) {
                    Vector2i mousePos = Mouse::getPosition(window);
                    if (player.getGlobalBounds().contains((Vector2f)mousePos)) {
                        player.setTexture(texturaRed);   // Click → rojo
                    }
                }
            }
        }

        // ---- COLOR POR HOVER ----
        Vector2i mousePos = Mouse::getPosition(window);
        if (player.getGlobalBounds().contains((Vector2f)mousePos)) {
            if (player.getTexture() != &texturaRed) // no sobrescribir si ya está rojo
                player.setTexture(texturaYellow);
        } else {
            if (player.getTexture() != &texturaRed) // vuelve a cyan si no está rojo
                player.setTexture(texturaCyan);
        }

        // ---- MOVIMIENTO (8 direcciones con deltaTime) ----
        if (!enDialogo) {
            float dx = 0.f, dy = 0.f;

            if (Keyboard::isKeyPressed(Keyboard::W)) dy -= 1.f;
            if (Keyboard::isKeyPressed(Keyboard::S)) dy += 1.f;
            if (Keyboard::isKeyPressed(Keyboard::A)) dx -= 1.f;
            if (Keyboard::isKeyPressed(Keyboard::D)) dx += 1.f;

            if (dx != 0.f || dy != 0.f) {
                float length = std::sqrt(dx*dx + dy*dy);
                dx /= length;
                dy /= length;
                player.move(dx * speed * dt, dy * speed * dt);
            }
        }

        // ---- Dibujado ----
        window.clear(Color::Black);
        window.draw(player);

        if (enDialogo) {
            window.draw(textoDialogo);
        }

        window.display();
    }
}
