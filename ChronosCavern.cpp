#include <iostream>

int main(){
	
	const int x_axis = 8, y_axis = 8;
	int player_x, player_y;
	bool stop = false;
	while(!stop){
	
	std::cout << "Enter your postion: x: (1-6): ";
	std::cin >> player_x;
	std::cout << "Enter your position: y: (1-6): ";
	std::cin >> player_y;
	player_x += 1;
	player_y += 1;
	
	if(player_x < 1 || player_x > 7 || player_y < 1 || player_y > 7 ){
		std::cout << "Error: Position cannot exceed 6 or be lower than 0. Try Again.\n";
	} else {
		stop = true;
	}
}
	
	
	for(int rows = 1; rows <= y_axis; rows++){
		for(int column = 1; column <= x_axis; column++){
			if(rows == 1 || rows == 8 || column == 1 || column == 8){
				if(rows == 8 && column == 7){
					std::cout << 'E';
				} else {
				std::cout << '#';
			    }
			} else if (column == player_x && rows == player_y){
				std::cout << 'P';
			} else {
				std::cout << '.';
			}
		}
		std::cout << std::endl;
	}
}