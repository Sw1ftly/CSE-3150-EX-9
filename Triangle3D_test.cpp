#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Triangle3d.h"

TEST_CASE("Testing the Triangle3d Area Calculation") {
    // Test with basic right triangle
    Point3d p1(0, 0, 0), p2(1, 0, 0), p3(0, 1, 0);
    Triangle3d triangle(p1, p2, p3);
    CHECK(triangle.area() == doctest::Approx(0.5));

    // Test with another right triangle with different orientation
    Point3d p4(0, 0, 0), p5(0, 0, 3), p6(4, 0, 0);
    Triangle3d triangle2(p4, p5, p6);
    CHECK(triangle2.area() == doctest::Approx(6.0));

    // Test with degenerate triangle (all points are the same)
    Point3d p10(1, 1, 1);
    Triangle3d triangle4(p10, p10, p10);
    CHECK(triangle4.area() == doctest::Approx(0.0));

    // Test with degenerate triangle (all points on a line)
    Point3d p11(0, 0, 0), p12(1, 1, 1), p13(2, 2, 2);
    Triangle3d triangle5(p11, p12, p13);
    CHECK(triangle5.area() == doctest::Approx(0.0));

    // Test with negative coordinates
    Point3d p17(-1, -1, 0), p18(-1, 1, 0), p19(1, 0, 0);
    Triangle3d triangle7(p17, p18, p19);
    CHECK(triangle7.area() == doctest::Approx(2.0));
}