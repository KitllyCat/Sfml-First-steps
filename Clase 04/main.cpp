#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Leccion 04 - Texturas y Sprites", Style::Close);
    window.setFramerateLimit(60);
	
    Texture textura;
    if (!textura.loadFromFile("personaje.png")) {
        return -1;
    }


    Sprite sprite;
    sprite.setTexture(textura);

    sprite.setPosition(800, 400);     // x, y
    sprite.setScale(0.5f, 0.5f);      // Escalar a la mitad del tamaño
    sprite.setRotation(0.f);          // Sin rotación inicial

    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed)
                window.close();
			
			if(e.type == Event::MouseButtonPressed){
				if (e.mouseButton.button == Mouse::Right){
					if(sprite.getGlobalBounds().contains(e.mouseButton.x , e.mouseButton.y)){
						cout<<"Clic"<<endl;	
					}
				}
			}
            
            if (e.type == Event::KeyPressed) {
                if (e.key.code == Keyboard::Left)
                    sprite.rotate(-5.f);
                else if (e.key.code == Keyboard::Right)
                    sprite.rotate(5.f);
            }
        }

        window.clear(Color::Black);
        window.draw(sprite);
        window.display();
    }

    return 0;
}
