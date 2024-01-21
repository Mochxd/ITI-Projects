package lab2;
import java.util.Stack;


public class exercise1_bonus {
    public static void main(String[] args) {
        Calculator2 calc = new Calculator2();
        String operation = "70 + 30 x 5 - 8 + 7 / 4"; //213.75
        double result = calc.doOperation(operation);
        System.out.println("The Output of " + operation + " is " + result);

    }
}
class Calculator2 {
    public double doOperation(String operation) {
        String[] tokens = operation.split("\\s+");
        Stack<String> operators = new Stack<>();
        Stack<Double> operands = new Stack<>();

        for(int i = 0 ; i < tokens.length; i++){
            String token = tokens[i];
            if(!isOperator(token)){ // + - * /
                operands.push(Double.parseDouble(token));
            }
            else {
                if(operators.isEmpty()){
                    operators.push(token);
                }
                else { // scriptEngine --> java_script 
                    if (isHigherPrecedence(operators.peek(), token) || isSamePrecedence(operators.peek(), token)) {
                        String operator = operators.pop();
                        double operand2 = operands.pop();
                        double operand1 = operands.pop();
                        Double res = doOperation(operand1, operator, operand2);
                        operands.push(res);
                        operators.push(token);
                    } else {
                        double operand1 = operands.pop();
                        double operand2 = Double.parseDouble(tokens[++i]);
                        Double res = doOperation(operand1, token, operand2);
                        operands.push(res);
                    }
                }
            }
        }
        double operand2 = operands.pop();
        double operand1 = operands.pop();
        String operator = operators.pop();
        return doOperation(operand1, operator, operand2);
    }
    private boolean isOperator(String operand){
        return operand.equals("+") || operand.equals("-") || operand.equals("x") || operand.equals("/");
    }
    private boolean isHigherPrecedence(String operator1, String operator2){
        return (operator1.equals("x") || operator1.equals("/")) && (operator2.equals("+") || operator2.equals("-"));
    }
    private boolean isSamePrecedence(String operator1, String operator2){
        return (operator1.equals("x") || operator1.equals("/")) && (operator2.equals("x") || operator2.equals("/"))
        || (operator1.equals("+") || operator1.equals("-")) && (operator2.equals("+") || operator2.equals("-"));
    }
    private Double doOperation(double operand1, String operator, double operand2){
        switch (operator){
            case "+":
                return operand1 + operand2;
            case "-":
                return operand1 - operand2;
            case "/":
                return operand1 / operand2;
            case "x":
                return operand1 * operand2;
        }
        return Double.NaN;
    }
}