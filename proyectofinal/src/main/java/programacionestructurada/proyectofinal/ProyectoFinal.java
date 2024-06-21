package programacionestructurada.proyectofinal;

import java.util.Date;
import java.util.LinkedList;
import programacionestructurada.proyectofinal.logica.Alumno;
import programacionestructurada.proyectofinal.logica.Carrera;
import programacionestructurada.proyectofinal.logica.Controladora;
import programacionestructurada.proyectofinal.logica.Inscripcion;
import programacionestructurada.proyectofinal.logica.Materia;

public class ProyectoFinal {

    public static void main(String[] args){
        
        Controladora control = new Controladora();
        
        //Creamos lista de inscripciones y agregamos la carrera
        LinkedList<Inscripcion> listaInscripciones = new LinkedList<Inscripcion> ();
        Carrera carre = new Carrera(40, "Tecnicatura en Desarrollo de Software", listaInscripciones);
        control.crearCarrera(carre);
        
        //Creamos Inscripciones
        LinkedList<Alumno> listaAlumnos = new LinkedList<Alumno> ();
        Inscripcion ins = new Inscripcion(40, "Programacion I", listaAlumnos, carre);

        //Creamos lista de materias
        LinkedList<Materia> listaMaterias = new LinkedList<Materia> ();

        //Creamos materias
        Alumno alu = new Alumno(30, "Felipe", "Lemir", new Date(), listaMaterias, ins);
        
        Materia mat1 = new Materia(58, "Programacion I", "Cuatrimestral", alu);
        Materia mat2 = new Materia(59, "Programacion II", "Cuatrimestral", alu);
        Materia mat3 = new Materia(60, "Programacion Avanzada", "Anual", alu);
        
        //Guardamos en DB
        control.crearMateria(mat1);
        control.crearMateria(mat2);
        control.crearMateria(mat3);
        
        listaMaterias.add(mat1);
        listaMaterias.add(mat2);
        listaMaterias.add(mat3);
        
        carre.setListaInscripciones(listaInscripciones); //Agregamos a nivel lógico
        control.editarCarrera(carre); //Agregamos en DB
        
        //control.eliminarAlumno(15);
        //alu.setApellido("Capadona");
        //control.crearAlumno(alu);
        //System.out.println("-----------BUSQUEDA INDIVIDUAL-------------");
        //System.out.println("El alumno es: " + alu.toString());
        //System.out.println("-----------BUSQUEDA DE TODOS-------------");
        //ArrayList<Alumno> listaAlumnos = control.traerListaAlumnos();
        //for (Alumno al : listaAlumnos) {
        //    System.out.println("El alumno es: " + al.toString());
        //}
        //System.out.println("------------------------------------------");
    }
}
