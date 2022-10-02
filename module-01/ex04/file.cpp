In this example, the variable indata is declared as type ifstream. It is used in the same way that cin is used for doing input from the keyboard. The statement indata >> num; reads characters from the file and converts them to a data value of the appropriate type-in this case integer.
 
In doing so, whitespace characters are skipped over; the same action takes place in the case of reading into a variable of type char, float or double. (Whitespace characters include space, tab, newline). Several values my be read using the same input statement. For example: indata >> num1 >> num2 >> num3;

The following example shows how to read one character at a time.
