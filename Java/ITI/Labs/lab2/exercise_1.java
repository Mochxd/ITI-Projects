package lab2;

public class exercise_1 {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        String operation = "70 + 30";
        int result = calc.doOperation(operation);
        System.out.println("The Output of " + operation + " is " + result);
    }
}
class Calculator {
    int doOperation(String operation) {
        String[] parts = operation.split(" ");
        int num1 = Integer.parseInt(parts[0]);
        String operator = parts[1];
        int num2 = Integer.parseInt(parts[2]);
        int result = 0;
        switch (operator) {
            case "+":
                result = num1 + num2;
                break;
            default:
                System.out.println("Invalid operator");
        }
        return result;
    }
}
