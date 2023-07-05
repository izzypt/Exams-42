int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	// Manejar signo negativo
	if (str[0] == '-')
	{
		sign = -1;
		++i;
	}
	// Iterar sobre la cadena de entrada
	while (str[i] != '\0')
	{
		// Convertir carácter a número en la base dada
		char c = str[i];
		int digit_value = 0;
		if (c >= '0' && c <= '9')
			digit_value = c - '0';
		else if (c >= 'a' && c <= 'f')
			digit_value = c - 'a' + 10;
		else if (c >= 'A' && c <= 'F')
			digit_value = c - 'A' + 10;
		else
			break;
		// Actualizar resultado parcial
		result = result * str_base + digit_value;
		++i;
	}
	return result * sign;
}
