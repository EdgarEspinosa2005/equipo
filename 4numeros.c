    // Imprimir cada dígito por separado
    printf("Los dígitos del número son:\n");

    // Obtener y mostrar el primer dígito
    digito = numero / 1000;
    printf("%d\n", digito);

    // Obtener y mostrar el segundo dígito
    digito = (numero % 1000) / 100;
    printf("%d\n", digito);

    // Obtener y mostrar el tercer dígito
    digito = (numero % 100) / 10;
    printf("%d\n", digito);

    // Obtener y mostrar el cuarto dígito
    digito = numero % 10;
    printf("%d\n", digito);

    return 0;
}
