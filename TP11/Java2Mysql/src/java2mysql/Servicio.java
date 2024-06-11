/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package java2mysql;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Cristian
 */
public class Servicio extends SQLQuery{
    public void verTodos(){
        try {
            this.conectar("127.0.0.1", "teatro", "root", ""); //Extiende de sqlQuery, que es la clase que hay adentro
            this.consulta = this.conn.prepareStatement("SELECT nombre, rating FROM orquesta");
            this.datos = this.consulta.executeQuery();
            while (this.datos.next()) {     // Recorremos todas las filas que vuelven de la consulta a base de datos           
                System.out.println("Nombre de la orquesta: "+this.datos.getString("nombre")+" y rating: "+this.datos.getString("rating"));
            }
        } catch (ClassNotFoundException | SQLException ex) {
            Logger.getLogger(Servicio.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void ingresarCliente() throws SQLException {
        String nombre = "Orquesta Anónima";
        int rating = 9;
        String ciudad_origen = "Neuquen";
        String pais_origen = "Argentina";
        int anio = 2017;
        String sql = "INSERT INTO orquesta(id_orquesta, nombre, rating, ciudad_origen, pais_origen, anio) VALUES('" + nombre + "', " + rating + ", '" + ciudad_origen + "', '" + pais_origen + "', " + anio + ")";
        insertarModificarEliminar(sql);
    }
    
    public void modificarCliente() throws SQLException {
        String sql = "UPDATE orquesta SET nombre = 'Orquesta Nueva' WHERE nombre = 'Orquesta Anónima'";
        insertarModificarEliminar(sql);
    }
    
    public void eliminarCliente() throws SQLException {
        String sql = "DELETE FROM orquesta nombre = 'Orquesta Anónima'";
        insertarModificarEliminar(sql);
    }
    
    protected void insertarModificarEliminar(String sql) throws SQLException {
        try {
          this.conectar("127.0.0.1", "teatro", "root", "");
          PreparedStatement consultaLocal = conn.prepareStatement(sql,Statement.RETURN_GENERATED_KEYS);
          consultaLocal.executeUpdate();
          ResultSet resultSet = consultaLocal.getGeneratedKeys();
          while (resultSet.next()) {
                System.out.println("Nombre de la orquesta: "+resultSet.getString("nombre")+" y rating: "+resultSet.getString("rating"));
          }
        } catch (ClassNotFoundException | SQLException ex) {
            Logger.getLogger(Servicio.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
          desconectar();
    }
  }
}
