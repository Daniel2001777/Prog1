#include "Simple_window.h"
#include "Graph.h"


int main(){

	Simple_window win {Point{100,100}, 800, 1000, "Window"};

	const int g_size = 800;
	const int s_size = 100;
	Lines grid;

	for (int i = s_size; i < g_size; i += s_size)
	{
		grid.add(Point{ i, 0}, {Point (i, g_size)});
		grid.add(Point{0,i}, {Point(g_size,i)});
	}
	grid.set_color(Color::black);

	Vector_ref<Rectangle> vr;

	for(int i=0; i<8; i++)
	{
		vr.push_back(new Rectangle(Point{i*100, i*100}, 100, 100));
		vr[i].set_fill_color(Color::red);
		win.attach(vr[i]);
	}

	Vector_ref<Image> im;


	for(int j = 0; j<3; j++)
	{
		int i =3;
		im.push_back(new Image(Point(i*200, j*200), "badge.jpg"));
		im[j].set_mask(Point{200,200}, 200,200);
		win.attach(im[j]);
		i++;
	}

	Image i(Point(200,200), "badge.jpg");
	i.set_mask(Point(300,200), 100,100);

	win.attach(i);
	win.attach(grid);
	while(win.wait_for_button())
	{
		i.move(100,100);

	}
}