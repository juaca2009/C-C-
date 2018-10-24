#ifndef _SHIP_H_
#define _SHIP_H_

class Ship{
	private:
		int posX, posY;
		int player;
	public:
		Ship();
		~Ship();
		int getPosX();
		int getPosY();
		void setPosX(int _posX);
		void setPosY(int _posY);
		int getPlayer(){return player;}
		void setPlayer(int _player){player=_player;}
		
};
#endif
