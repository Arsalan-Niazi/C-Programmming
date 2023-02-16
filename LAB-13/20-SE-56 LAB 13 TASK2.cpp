#include <iostream>
using namespace std;

                //WE HAVE BASE CLASS NAMED AS Shape
    class Shape {
                //THIS CLASS INCLUDES 2 PUBLIC METHODS
        public:
            void setWidth(int w) {
            width = w;
      }
            void setHeight(int h) {
            height = h;
      }
                //Shape CLASS HAS 2 PROTECTED MEMBERS NAMED AS WIDTH AND HEIGHT
        protected:
            int width;
            int height;
      };

            //ANOTHER BASE CLASS NAMED AS  PaintCost
    class PaintCost {
        public:
            //WE HAVE A PUBLIC METHOD NAMED AS getCost
            int getCost(int area) {
            return area * 70;
            }
    };

            //WE HAVE A DERIVED CLASS NAMED AS Rectangle HAVING PUBLIC METHOD FOR CALCULATING AREA
    class Rectangle: public Shape, public PaintCost {
        public:
            int getArea() {
            return (width * height);
      }
    };

        int main(void) {
            Rectangle Rect;
            int area;
            Rect.setWidth(5);
            Rect.setHeight(7);
            //GETTING VALUE OF AREA
            area = Rect.getArea();

                    // THIS WILL PRINT THE AREA
                    cout << "Total area: " << Rect.getArea() << endl;

                    // THIS WILL PRINT THE COST
                cout << "Total paint cost: $" << Rect.getCost(area) << endl<<endl;
                cout<<"---------------------------------------------------------";

                return 0;
        }
