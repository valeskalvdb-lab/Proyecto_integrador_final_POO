# Renta-de-Autos-Proyecto-Integrador-TC1030.301
Sistema de gestión de renta de autos

Es esencial que una agencia de renta de autos tenga una organización clara para hacer que su sistema sea claro, eficiente y ordenado. Este proyecto consiste en el desarrollo de un sistema automatizado para la gestión de una agencia de renta de vehículos. Permite administrar flotas independientes para cada tipo de auto a disponibilidad y permite calcular el pago a realizar según el tipo de vehículo rentado, así como gestionar qué autos se encuentran disponibles para ser rentados. 
## Funcionalidad: 
Hay tres tipos de autos que se pueden rentar: 
-	Autos compactos: ideales para la ciudad, con un límite de kilometraje establecido y cargos extra por cada kilómetro excedido. 
-	Autos SUV: Vehículos familiares y más versátiles, donde el precio base incrementa si cuentan con tracción 4x4 o una fila de asientos extra. 
-	Autos deportivos: Vehículos de gama alta que añaden un costo de seguro base y aplican un cargo extra de protección si el conductor es menor de 25 años.
El programa permite visualizar los vehículos disponibles en las tres flotas, realizar la renta mediante el ID único del auto y procesar la devolución calculando el precio final de forma automatizada.
## Limitaciones: 
Para interactuar de forma correcta con el sistema en la consola, hay que tener en cuenta los siguientes puntos:
-	Navegación por Menús: Deberás ingresar caracteres o números específicos según te lo indique la interfaz para navegar entre las opciones de renta, devolución y visualización.
-	Sin Interfaz Gráfica: El programa se ejecuta completamente a través de la terminal de comandos.
-	IDs Sensibles: Al buscar un vehículo para renta o devolución, asegúrate de ingresar el ID exactamente como está registrado.
-	Validación de Entradas: Si ingresas una opción no válida en el menú, el programa te solicitará el dato nuevamente.
## Interés: 
Este proyecto surgió después de un intento de hacer un sistema de predicción de resultados de fórmula 1. Sin embargo, me encontré con muchas trabas, entre estas que mi proyecto se estaba encaminando mucho más hacia el análisis de datos debido a que necesitaba extraer las bases de datos reales usando herramientas como pandas y FastF1 en Python para después pasar las bases de datos a C++. Tomando en cuenta que el objetivo de este curso no es realmente aprender a manejar bases de datos, decidí mantener la idea de relacionar el proyecto con autos, pero con un trabajo que me permita realmente implementar lo aprendido a lo largo de este periodo: un sistema de renta de autos. Con esta idea pude implementar el uso de vectores para guardar los datos de los autos en renta en lugar de manejar archivos de datos CSV enormes. 
## Diagrama UML: 
