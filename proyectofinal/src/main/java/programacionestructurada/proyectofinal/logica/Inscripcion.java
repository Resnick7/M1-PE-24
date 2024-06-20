
package programacionestructurada.proyectofinal.logica;

import java.util.Date;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.ManyToOne;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

@Entity
public class Inscripcion {
   
    @Id
    @GeneratedValue(strategy=GenerationType.SEQUENCE)
    private int id;
    private String nombre;
    
    @Temporal(TemporalType.DATE)
    private Date fechaIns;
    
    @ManyToOne
    private Carrera carre;

    public Inscripcion() {
    }

    public Inscripcion(int id, String nombre, Date fechaIns, Carrera carre) {
        this.id = id;
        this.nombre = nombre;
        this.fechaIns = fechaIns;
        this.carre = carre;
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

    public Date getFechaIns() {
        return fechaIns;
    }

    public void setFechaIns(Date fechaIns) {
        this.fechaIns = fechaIns;
    }

    public Carrera getCarre() {
        return carre;
    }

    public void setCarre(Carrera carre) {
        this.carre = carre;
    }
    
    
    
    
}
