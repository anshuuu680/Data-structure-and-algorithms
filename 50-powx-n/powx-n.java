class Solution {
    public double myPow(double x, int n) {
        
        if (n == 0) {
            return 1;
        }

        // Handle negative powers and avoid overflow for Integer.MIN_VALUE
        if (n < 0) {
            if (n == Integer.MIN_VALUE) {
                return 1 / (myPow(x, Integer.MAX_VALUE) * x); // Adjust for overflow
            }
            return 1 / myPow(x, -n);
        }

        // Recursive step: optimize by dividing the problem into halves
        double half = myPow(x, n / 2);

        if (n % 2 == 0) {
            return half * half; // If n is even
        } else {
            return half * half * x; // If n is odd
        }
    }
}