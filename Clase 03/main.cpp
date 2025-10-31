#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 03 - Figuras Basicas");
    window.setFramerateLimit(60); // Controlar FPS

    //1. Crear un rectángulo
    RectangleShape rect(Vector2f(200, 120)); // ancho, alto
    rect.setFillColor(Color::Blue);
    rect.setPosition(300, 200); // posición x, y
    rect.setOutlineColor(Color::White);
    rect.setOutlineThickness(4);

    //2. Crear un círculo
    CircleShape circle(100); // radio
    circle.setFillColor(Color::Red);
    circle.setPosition(800, 400);
    circle.setOutlineColor(Color::Yellow);
    circle.setOutlineThickness(6);

    //3. Crear un triángulo con ConvexShape
    ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, Vector2f(0, 0));
    triangle.setPoint(1, Vector2f(200, 0));
    triangle.setPoint(2, Vector2f(100, 150));
    triangle.setFillColor(Color(100, 250, 50)); // Color RGB personalizado
    triangle.setPosition(1400, 500);

    //4. Crear una figura poligonal (pentágono)
    ConvexShape pentagon;
    pentagon.setPointCount(5);
    pentagon.setPoint(0, Vector2f(0, 50));
    pentagon.setPoint(1, Vector2f(50, 0));
    pentagon.setPoint(2, Vector2f(150, 0));
    pentagon.setPoint(3, Vector2f(200, 50));
    pentagon.setPoint(4, Vector2f(100, 150));
    pentagon.setFillColor(Color(180, 60, 200));
    pentagon.setPosition(850, 100);

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
	                case Keyboard::P:{
						pentagon.setFillColor(Color(35, 128, 122));
						break;
					}
					case Keyboard::R:{
						rect.setFillColor(Color(23, 105, 68));
						break;
					}
					case Keyboard::T:{
						triangle.setFillColor(Color(201, 95, 31));
						break;
					}
					case Keyboard::C:{
						circle.setFillColor(Color(110, 30, 189));
						break;
					}	
				}   			
			}
        }

        // Dibujar las figuras
        window.clear(Color(25, 25, 25));
		window.draw(pentagon);
		window.draw(rect);
		window.draw(triangle);
		window.draw(circle);
		window.display();

    }

    return 0;
}