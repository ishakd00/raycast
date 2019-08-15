#include <SFML/Graphics.hpp>
#include "Map.hpp"
#include "World.hpp"
#ifndef MINIMAP_H
#define MINIMAP_H

// Height and width of the minimap window
#define MINIMAP_W_HEIGHT 200
#define MINIMAP_W_WIDTH 200

class Minimap{
	private:
		Map* map;
		World* game_world;
		sf::Uint8* map_pixels;
		sf::Texture map_texture;
		sf::Sprite map_sprite;
		int m_w, m_h; // Dimensions of minimap texture, equal to map dimensions	
		
	public:
	sf::RenderWindow* window;

	void setup_window();
	Minimap(Map* _map, World* _game_world);
	void update_minimap();
	void update_map_overlay();
	void update_map();
	sf::Vector2f map_coords_to_minimap_window_coords(sf::Vector2f map_coords);
};

#endif
