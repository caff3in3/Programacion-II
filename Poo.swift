import UIKit

var greeting = "Hello, playground"

let lugarDeNacimiento = "DF"
var ubicacionActual = "Veracruh"

print(ubicacionActual)

class Persona {
    
    var nombre: String
    var apellido: String
    var edad: Int
    
    init(nombre: String, apellido: String, edad: Int){
        self.nombre = nombre
        self.apellido = apellido
        self.edad = edad
    }
    
    func cambioedad(edad: Int){
        self.edad = edad
    }
}

var eduardo: Persona =
Persona(nombre: "Eduardo", apellido: "Loza", edad: 40)

print(eduardo.apellido)
print(eduardo.nombre)
print(eduardo.edad)

eduardo.apellido = "Power"
print(eduardo.apellido)
