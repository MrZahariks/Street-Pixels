#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
	// �������� ����
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Street Pixel");

	// ���������
	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type != sf::Event::Closed) { continue; }
			window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}