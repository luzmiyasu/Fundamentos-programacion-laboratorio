Algoritmo DescuentoPapeleria
	Definir nombre, PRODUCTO1, MONEDA Como Cadena 
	Definir cantidad, resultado, resultadoTotal, PRECIO_BOLIGRAFO, DESCUENTO Como Real
	PRODUCTO1 = "Lapicero Azul"
	PRECIO_BOLIGRAFO = 5
	MONEDA = "Bs."
	DESCUENTO = 0.10
	
	Escribir "Escriba su nombre:"
	Leer nombre
	
	Escribir "Ingrese cantidad de boligrafos comprados:"
	Leer cantidad
	
	resultado <- Cantidad*PRECIO_BOLIGRAFO
	
	Escribir "================================================="
	Escribir "|               Nota de Venta                   |"
	Escribir "================================================="
	Escribir "|   Detalle    | Precio Uni. | Cantidad | Total |"
	Escribir "| ", PRODUCTO1 , "   |    " , PRECIO_BOLIGRAFO, "    |    " , cantidad, "    |    " , resultado
	Escribir "================================================="
	Si cantidad > 20 Entonces
		resultadoTotal = resultado - resultado * descuento
		Escribir "El descuento aplicado es de: ",descuento * 100, "%"
		Escribir "El total a pagar es de: ", resultadoTotal
	SiNo
		Escribir "NO se aplico ningun descuento"
		Escribir"Total a pagar es de: ", resultado
	Fin Si
	
FinAlgoritmo
