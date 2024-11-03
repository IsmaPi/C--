class Rectangle {
    private:
        double width;
        double height;
    public:
        Rectangle(double width, double height) : width(width), height(height) {}

        Rectangle(double size) : width(size), height(size) {}

};

void foo() {
    Rectangle r1(2.0, 3.0);
    Rectangle r2(4.0);
}