#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	const float TREE_HORIZONTAL_POSITION = 810;
	const float TREE_VERTICAL_POSITION = 0;

    VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Timber", Style::Fullscreen);

	Texture textureBackground;

	textureBackground.loadFromFile("graphics/background.png");

	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	Texture textureTree;

	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(TREE_HORIZONTAL_POSITION, TREE_VERTICAL_POSITION);
	
	while (window.isOpen()) {

		window.clear();

		window.draw(spriteBackground);
		window.draw(spriteTree);

		window.display();

		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			window.close();
		}
	}
}