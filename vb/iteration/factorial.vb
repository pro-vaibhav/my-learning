Module Factorial
    Sub Main()
        Dim n As Integer
        Dim fact As Integer = 1
        Console.Write("Enter a number: ")
        n = Console.ReadLine()
        For i as Integer = 1 to n
            fact =  fact * i
        Next i
        Console.WriteLine("Factorial is {0}.", fact)
    End Sub
End Module