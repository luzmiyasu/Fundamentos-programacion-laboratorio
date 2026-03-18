Algoritmo DESCUENTO
	Definir precio,total Como Real
	Definir r Como caracter
	
	Escribir "Ingrese el precio del producto"
	Leer precio
	
	Escribir"Es un cliente VIP"
	Leer r
	
	Si  r="si" Entonces
		total=precio*0.85
		Escribir "Su descuento es del 15% el total a pagar es:",total
		
	SiNo 
		total=precio
		Escribir "No se aplico ningun descuento el total a pagar es:",precio
	Fin Si
	
FinAlgoritmo
