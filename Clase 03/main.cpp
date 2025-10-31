#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 03 - Figuras Basicas");
    window.setFramerateLimit(60); // Controlar FPS

    RectangleShape rect(Vector2f(480, 450)); // ancho, alto
    rect.setFillColor(Color::Green);
    rect.setPosition(750.f,500.f); // posición x, y
    rect.setOutlineColor(Color::Black);
    rect.setOutlineThickness(10);

    ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, Vector2f(990.f, 300.f));
    triangle.setPoint(1, Vector2f(750.f, 500.f));
    triangle.setPoint(2, Vector2f(1230.f, 500.f));
    triangle.setFillColor(Color::Green);
    triangle.setOutlineColor(Color::Black);
    triangle.setOutlineThickness(10);

    CircleShape circle(100);
    circle.setFillColor(Color::Yellow);
    circle.setPosition(100.f, 100.f);
    circle.setOutlineColor(Color::Black);
    circle.setOutlineThickness(6);

    //Bucle principal
    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed)
                window.close();
            if (e.type == Event::KeyPressed && e.key.code == Keyboard::Escape)
                window.close();
            
			if (e.type == Event::KeyPressed){
                switch (e.key.code){
                	
					case Keyboard::R:{
						rect.setFillColor(Color(194, 130, 39));
						break;
					}
					case Keyboard::T:{
						triangle.setFillColor(Color(133, 60, 14));
						break;
					}
					case Keyboard::C:{ //Mueve el sol hacia la derecha
						circle.move(100.f,0);
						break;
					}	
				}   			
			}
        }

        // Dibujar las figuras
        window.clear(Color(25, 25, 25));
		window.draw(rect);
		window.draw(triangle);
		window.draw(circle);
		window.display();

    }

    return 0;
}