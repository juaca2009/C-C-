#ifndef __FICHAS_H__
#define __FICHAS_H__

class ficha{
	protected:
		char simbolo;
	public:
		void set_ficha(char _simbolo);
		void cambiar_simbolo(char sim);
		char get_simbolo();
};
#endif