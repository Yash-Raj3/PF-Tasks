// Question # 05: [Points: 04], Time: 20 minutes
// Consider: Two trains are on the same track and they are coming toward each other. The speed of the
// first train is 50 km/h and the speed of the second train is 70 km/h. A honeybee starts flying between the
// trains when the distance between two trains is 100 km. The honeybee first flies from first train to
// second train. Once it reaches the second train, it immediately flies back to the first train … and so on
// until trains collide. Calculate the total distance travelled by the honeybee. Speed of a honeybee is 80
// km/h. Distance formula is given below.
// Total distance travelled by honeybee:
// (honeybee speed * distance)/(train_1 speed + train_2 speed)
// Your task is to solve the problem recursively (direct or indirect).
#include <stdio.h>
#include <math.h>

// Recursive function to calculate total distance travelled by the bee
double beeDistanceRecursive(double gap, double v1, double v2, double vb, int towardTrain2) {
    if (gap <= 1e-9)  // base case: trains have collided
        return 0.0;

    // Relative speed depending on direction
    double rel = towardTrain2 ? (vb + v2) : (vb + v1);

    // Time for this leg
    double t = gap / rel;

    // Distance bee flies in this leg
    double dBee = vb * t;

    // New gap after trains move closer
    double gapNext = gap - (v1 + v2) * t;

    // Recursive call: flip direction
    return dBee + beeDistanceRecursive(gapNext, v1, v2, vb, !towardTrain2);
}

int main() {
    double gap = 100.0;   // initial distance between trains
    double v1 = 50.0;     // train 1 speed
    double v2 = 70.0;     // train 2 speed
    double vb = 80.0;     // bee speed

    double totalDistance = beeDistanceRecursive(gap, v1, v2, vb, 1);

    printf("Total distance travelled by honeybee: %.6f km\n", totalDistance);

    return 0;
}
