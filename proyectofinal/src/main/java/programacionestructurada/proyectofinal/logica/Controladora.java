package programacionestructurada.proyectofinal.logica;

import java.util.ArrayList;
import java.util.LinkedList;
import programacionestructurada.proyectofinal.persistencia.ControladoraPersistencia;

public class Controladora {
    
    ControladoraPersistencia controlPersis = new ControladoraPersistencia();
    
    public void crearAlumno (Alumno alu){
        controlPersis.crearAlumno (alu);
    }
    
    public void eliminarAlumno(int id){
        controlPersis.eliminarAlumno(id);
    }
    
    public void editarAlumono(Alumno alu){
        controlPersis.editarAlumno(alu);
    }
    
    public Alumno traerAlumno(int id) {
        return controlPersis.traerAlumno(id);
    } 
    
    public ArrayList<Alumno> traerListaAlumnos (){
        return controlPersis.traerListaAlumnos();
    }
    
    //Carrera

    public void crearCarrera (Carrera carre){    
        controlPersis.crearCarrera (carre);
    }
    
    public void eliminarCarrera(int id){
        controlPersis.eliminarCarrera(id);
    }
    
    public void editarCarrera(Carrera carre){
        controlPersis.editarCarrera(carre);
    }
    
    public Carrera traerCarrera(int id) {
        return controlPersis.traerCarrera(id);
    } 
    
    public ArrayList<Carrera> traerListaCarreras (){
        return controlPersis.traerListaCarreras();
    }
    
    // Materias
    public void crearMateria (Materia mat){
        controlPersis.crearMateria (mat);
    }
    
    public void eliminarMateria(int id){
        controlPersis.eliminarMateria(id);
    }
    
    public void editarMateria(Materia mat){
        controlPersis.editarMateria(mat);
    }
    
    public Materia traerMateria(int id) {
        return controlPersis.traerMateria(id);
    } 
    
    public LinkedList<Materia> traerListaMaterias (){
        return controlPersis.traerListaMaterias();
    }
    
    //Incripcion
    public void crearInscripcion (Inscripcion ins){
        controlPersis.crearInscripcion (ins);
    }
    
    public void eliminarInscripcion(int id){
        controlPersis.eliminarInscripcion(id);
    }
    
    public void editarInscripcion(Inscripcion ins){
        controlPersis.editarInscripcion(ins);
    }
    
    public Inscripcion traerInscripcion(int id) {
        return controlPersis.traerInscripcion(id);
        }
    
    public LinkedList<Inscripcion> traerListaInscripcion (){
        return controlPersis.traerListaInscripcion();
    }
}
