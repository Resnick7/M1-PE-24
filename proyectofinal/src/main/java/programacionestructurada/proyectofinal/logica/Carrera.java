package programacionestructurada.proyectofinal.logica;

import java.io.Serializable;
import java.util.LinkedList;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToMany;


@Entity
public class Carrera implements Serializable {
    
    @Id
    @GeneratedValue(strategy=GenerationType.SEQUENCE)
    private int id;
    private String nombre;
    
    @OneToMany(mappedBy="carre")
    private LinkedList<Inscripcion> listaInscripciones;
    
    public Carrera() {
    }

    public Carrera(int id, String nombre, LinkedList<Inscripcion> listaInscripciones) {
        this.id = id;
        this.nombre = nombre;
        this.listaInscripciones = listaInscripciones;
    }

    public LinkedList<Inscripcion> getListaInscripciones() {
        return listaInscripciones;
    }

    public void setListaInscripciones(LinkedList<Inscripcion> listaInscripciones) {
        this.listaInscripciones = listaInscripciones;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
 
}
