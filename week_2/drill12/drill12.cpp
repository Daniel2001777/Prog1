#include "Graph.h"
#include "Simple_window.h"

int main(){
	using namespace Graph_lib;

	Simple_window win {Point{100,100},600,400,"My window"};

	Axis xa {Axis::x, Point{10,300}, 280, 10, "x axsis"};
	xa.set_color(Color::blue);

	win.set_label("My window #2");

	Axis ya {Axis::y, Point{20,300},280, 10, "y axsis"};

	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);

	win.set_label("My window #3");

	Function sine{sin,0,100,Point{20,150},1000,50,50};
	sine.set_color(Color::red);

	win.attach(sine);
	win.set_label("MY window #4");

	Polygon poly;
	poly.add(Point{300,200});
	poly.add(Point{350,100});
	poly.add(Point{400,200});

	poly.set_color(Color::yellow);
	poly.set_style(Line_style::dash);

	win.set_label("My window #5");

	Rectangle r {Point{200,200}, 100, 50};
	r.set_style(Line_style::dash);

	win.set_label("My window #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point{100,50});
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{50,75});

	r.set_fill_color(Color::yellow);
	poly.set_style(Line_style(Line_style::dash,4));
	poly_rect.set_style(Line_style(Line_style::dash,2));
	poly_rect.set_fill_color(Color::green);
	win.set_label("My window #7");

	Text t {Point{150,150}, "Hello, graphical world! Szia!"};

	win.set_label("My window #8");

	t.set_font(Font::times_bold);
	t.set_font_size(10);

	win.set_label("My window #9");

	Image ii {Point{100,100},"badge.jpg"};

	win.set_label("My window #10");

	//ii.move(100,200);
	//win.set_label("My window #11");

	Circle c {Point{100,200},50};
	c.set_color(Color::blue);
	//Ellipse e {Point{100,200},75,25};
	//e.set_color(Color::dark_red);
	Mark m {Point{100,200},'x'};

	ostringstream oss;
	oss << "screen size:" << x_max() << "*" << y_max() << "; window size:" << win.x_max() << "*" << win.y_max();
	Text sizes {Point{100,20},oss.str()};

	/*Image cal{Point{225,225},"snow_cpp.gif"};
	cal.set_mask(Point{40,40},200,150);*/

	win.set_label("My window #12");

	win.attach(xa);
	win.attach(ya);
	win.attach(poly);
	win.attach(t);
	win.attach(r);
	win.attach(ii);
	win.attach(c);
	win.attach(m);
	//win.attach(e);
	win.attach(sizes);
	//win.attach(cal);
	win.attach(poly_rect);
	win.wait_for_button();
}



//g++ drill12.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp `fltk-config --ldflags --use-images` -o drill12