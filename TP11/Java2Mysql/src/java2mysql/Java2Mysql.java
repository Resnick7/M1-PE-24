/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package java2mysql;

import java.sql.SQLException;

/**
 *
 * @author Cristian
 */
public class Java2Mysql {

    /**
     * @param args the command line arguments
     * @throws java.sql.SQLException
     */
    public static void main(String[] args) throws SQLException {
        // TODO code application logic here
        Servicio nuevo = new Servicio();
        nuevo.verTodos();
        nuevo.ingresarCliente();
        nuevo.modificarCliente();
        nuevo.eliminarCliente();
    }
}
