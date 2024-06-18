package programacionestructurada.proyectofinal;

import java.util.Date;
import java.util.LinkedList;
import programacionestructurada.proyectofinal.logica.Alumno;
import programacionestructurada.proyectofinal.logica.Carrera;
import programacionestructurada.proyectofinal.logica.Controladora;
import programacionestructurada.proyectofinal.logica.Materia;

public class ProyectoFinal {

    public static void main(String[] args){
        
        Controladora control = new Controladora();
        
        //Creamos lista de materia y agregamos
        LinkedList<Materia> listaMaterias = new LinkedList<Materia> ();
        Carrera carre = new Carrera(25, "Tecnicatura en Desarrollo de Software", listaMaterias);
        control.crearCarrera(carre);
        
        //Creamos materias
        Materia mat1 = new Materia(58, "Programacion I", "Cuatrimestral", carre);
        Materia mat2 = new Materia(59, "Programacion II", "Cuatrimestral", carre);
        Materia mat3 = new Materia(60, "Programacion Avanzada", "Anual", carre);
        
        //Guardamos en DB
        control.crearMateria(mat1);
        control.crearMateria(mat2);
        control.crearMateria(mat3);
        
        listaMaterias.add(mat1);
        listaMaterias.add(mat2);
        listaMaterias.add(mat3);
        
        carre.setListaMaterias(listaMaterias); //Agregamos a nivel lógico
        control.editarCarrera(carre); //Agregamos en DB
        
        
        Alumno al = new Alumno(30, "Felipe", "Lemir", new Date(), carre);
        control.crearAlumno(al);
        Alumno alu = control.traerAlumno(30);
        System.out.println("Alumno: " + alu.getNombre() + " " + alu.getApellido());
        System.out.println("Cursa la carrera de: " + alu.getCarre().getNombre());
        
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
