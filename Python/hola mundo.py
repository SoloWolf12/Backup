def potencia(numero, exponente):
    contador = 1  # Simple ayudante del ciclo
    elevado = 1  # Aquí almacenamos el resultado de ir multiplicando el número
    # Hacer un ciclo desde 1 hasta el exponente, para multiplicarlo ese número de veces
    while contador <= exponente:
        elevado = elevado * numero
        contador = contador + 1


# Termina el ciclo y regresamos el número elevado
    return elevado