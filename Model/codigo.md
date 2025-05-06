# Preguntas Teóricas

## CLASES ABSTRACTAS (6 pts)

### ¿Cómo sé que `Juego` es abstracta?

Porque tiene métodos con `= 0`, como `jugar()`, `calcularResultado()` y `mostrarReglas()`. Eso en CPP = a que no tienen cuerpo y que la clase es abstracta.

### ¿Qué significa eso para el programa?

- No se puede crear un objeto de `Juego` directamente.
- Las clases que heredan de ella tienen que implementar esos métodos.
- Se puede usar polimorfismo (por ejemplo, guardar distintos juegos en un vector de punteros a `Juego`).
- Todos los juegos comparten la misma "estructura", así es más fácil agregar nuevos.
