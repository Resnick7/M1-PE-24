package programacionestructurada.proyectofinal.logica;

import java.io.Serializable;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.ManyToOne;

@Entity
public class Materia implements Serializable {
    
    @Id
    @GeneratedValue(strategy=GenerationType.SEQUENCE)
    private int id;
    private String nombre;
    private String tipo;
    
    @ManyToOne
    private Alumno alu;

    public Materia() {
    }

    public Materia(int id, String nombre, String tipo, Alumno alu) {
        this.id = id;
        this.nombre = nombre;
        this.tipo = tipo;
        this.alu = alu;
    }

    public void setAlu(Alumno alu) {
        this.alu = alu;
    }
    
    public Alumno getAlu() {
        return alu;
    }

    public void setCarre(Alumno alu) {
        this.alu = alu;
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

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    
    
}
