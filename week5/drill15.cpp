#include "Simple_window.h"
#include "Graph.h"
double one(double x){return 1;}

double slope(double x) {return x/2;}

double square(double x) {return x*x;}

double sloping_cos(double x) {return cos(x)+slope(x);}


int main()
{

	const int xmax =600;
	const int ymax=600;
	const int axylength=400;
	const int noch = 400/20;
	const int x_origin= xmax/2;
	const int y_origin = ymax/2;
	const double x_scale = 20;
	const double y_scale =20;
	const double rmin = -10;
	const double rmax = 11;
	const Point orig(300,300);


	Simple_window win(Point{100,100},xmax, ymax, "drill15");

	Axis x{Axis::x,Point{100,y_origin}, axylength, noch, "1 == 20 pixels"};
	x.set_color(Color::red);
	win.attach(x);
	Axis y{Axis::y,Point{y_origin, axylength+100}, axylength, noch, "1 == 20 pixels"};
	y.set_color(Color::red);
	win.attach(y);

	Function s{one, rmin, rmax, orig, axylength, x_scale, y_scale};
	Function s2{slope, rmin, rmax, orig, axylength, x_scale, y_scale};
	Text ts2{Point{s2.point(0).x, s2.point(0).y-20},"x/2"};
	Function s3(square, rmin, rmax, orig, axylength, x_scale, y_scale);
	Function s4(cos, rmin, rmax, orig, axylength, x_scale, y_scale);
	s4.set_color(Color::cyan);
	Function s5(sloping_cos, rmin, rmax, orig, axylength, x_scale, y_scale);
	win.attach(s);
	win.attach(s2);
	win.attach(ts2);
	win.attach(s3);
	win.attach(s4);
	win.attach(s5);


	win.wait_for_button();
}