#include <string>
#include <iostream>

namespace expression {

/**
 * @class Expression
 * @brief Abstract class for mathematical expressions.
 *
 * This class provides the interface for expressions, which can be evaluated
 * and converted to a string.
 */

    class Expression {
    public:

    /**
     * @brief Returns a string representation of the expression.
     * @return A string representing the expression.
     */
        
        virtual std::string toString() const = 0;

    /**
     * @brief Evaluates the expression.
     * @return The result of the evaluation.
     */
        
        virtual double evaluate() const = 0;

        virtual ~Expression() = default;

    };

    void printExpression(const Expression& e) {
        std::cout << e.toString() << " = " << e.evaluate() << std::endl;
    }

/**
 * @class Constant
 * @brief Represents a constant numerical expression.
 * 
 * The Constant class is derived from the Expression class. It represents a constant
 * value that can be evaluated and printed as a string.
 */

    class Constant : public Expression {
    public:

        /**
         * @brief Constructor to initialize the constant value.
         * 
         * @param value The constant value that this object represents.
         */

        Constant(double value) : value(value) {}

        /**
         * @brief Returns a string representation of the constant.
         * 
         * @return A string representation of the constant.
         */

        std::string toString() const override {
            return std::to_string(value);
        }

        /**
         * @brief Evaluates the constant expression.
         * 
         * @return The value of the constant.
         */

        double evaluate() const override {
            return value;
        }
    private:
        double value;
    };

/**
 * @class BinaryPlus
 * @brief Represents a binary addition expression.
 * 
 * The BinaryPlus class is derived from the Expression class. It represents the
 * addition of two expressions, which can be evaluated and printed as a string.
 */

    class BinaryPlus : public Expression {
    public:

        /**
         * @brief Constructor to initialize the left and right expressions.
         * 
         * @param left The left expression in the addition.
         * @param right The right expression in the addition.
         */

        BinaryPlus(const Expression& left, const Expression& right) : left(left), right(right) {}
        
        /**
         * @brief Converts the binary addition to a string.
         * 
         * @return A string representation of the binary addition in the form "(left + right)".
         */

        std::string toString() const override {
            return "(" + left.toString() + " + " + right.toString() + ")";
        }

        /**
         * @brief Evaluates the binary addition expression.
         * 
         * @return The sum of the left and right expressions.
         */

        double evaluate() const override {
            return left.evaluate() + right.evaluate();
        }
    private:
        const Expression& left;
        const Expression& right;
    };

}
