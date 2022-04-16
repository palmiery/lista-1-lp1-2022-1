#ifndef PT_IN_RECT_HPP
#define PT_IN_RECT_HPP

struct Ponto {
int x; 
int y; 
// Construtor padrão
Ponto ( int xi =0, int yi =0 ) : x{xi}, y{yi} // copia args para os campos x e y
{ /* nada */ }
};


int pt_in_rect ( const Ponto &ie, const Ponto &sd, const Ponto &p );

#endif