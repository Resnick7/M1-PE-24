package programacionestructurada.proyectofinal.logica;

import java.io.Serializable;
import java.util.Date;
import java.util.LinkedList;
import javax.persistence.Basic;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

@Entity
public class Inscripcion implements Serializable {
    
    @Id
    @GeneratedValue(strategy=GenerationType.SEQUENCE)
    private int id;
    @Basic
    private String nombre;
    
    @Temporal(TemporalType.DATE)
    private Date fecha;
    
    @OneToMany(mappedBy="ins")
    private LinkedList<Alumno> listaAlumnos;
    
    @ManyToOne
    private Carrera carre;

    public Inscripcion() {
    }

    public Inscripcion(int id, String nombre, Date fecha, LinkedList<Alumno> listaAlumnos, Carrera carre) {
        this.id = id;
        this.nombre = nombre;
        this.fecha = fecha;
        this.listaAlumnos = listaAlumnos;
        this.carre = carre;
    }

    public LinkedList<Alumno> getListaAlumnos() {
        return listaAlumnos;
    }

    public void setListaAlumnos(LinkedList<Alumno> listaAlumnos) {
        this.listaAlumnos = listaAlumnos;
    }

    public Carrera getCarre() {
        return carre;
    }

    public void setCarre(Carrera carre) {
        this.carre = carre;
    }

    public int getId() {
        return id;
    }

    public void setId(int Id) {
        this.id = id;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public Date getFecha() {
        return fecha;
    }

    public void setFecha(Date fecha) {
        this.fecha = fecha;
    }
    
}
