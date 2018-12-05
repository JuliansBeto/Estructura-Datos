/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto_integrador;

import java.util.LinkedList;
import java.util.Stack;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author usuario
 */
public class Proyecto_Integrador {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner entrada = new Scanner(System.in);
        int opcion;

        Queue<Integer> cola_1 = new LinkedList<>();
        Queue<Integer> cola_caja1 = new LinkedList<>();
        Queue<Integer> cola_caja2 = new LinkedList<>();
        Queue<Integer> cola_caja3 = new LinkedList<>();

        int cliente = 1;
        System.out.println("\nProyecto Integrador");
        System.out.println("\nBienvenidos al supermercado");
        System.out.println("\nEste es un simluador de un supermercado en el que se cuentan con 25 carritos");
        System.out.println(" y con 3 cajas para pagar, cada una con una capacidad max. de 3 cliente");

        do {
            System.out.println("Clientes con carrito:");
            System.out.println(cola_1);
            System.out.println("Clientes en caja 1:");
            System.out.println(cola_caja1);
            System.out.println("Clientes en caja 2:");
            System.out.println(cola_caja2);
            System.out.println("Clientes en caja 3:");
            System.out.println(cola_caja3);
            System.out.println("\nEscoja la opcion a realizar");
            System.out.println("\n1.Cliente nuevo");
            System.out.println("2.Pasar cliente a caja");
            System.out.println("3.Pagar y salir");
            opcion = entrada.nextInt();

            switch (opcion) 
            {
                case 1:
                    if ((cola_1.size() + cola_caja1.size() + cola_caja2.size() + cola_caja3.size()) < 25) 
                    {

                        int dato_cola = cliente++;
                        cola_1.add(dato_cola);
                        System.out.println("Cliente agregado ");
                    } 
                    else 
                    {
                        System.out.println("\nYa no quedan carritos disponibles");
                    }
                    break;
                case 2:
                    if ((cola_caja1.size() + cola_caja2.size() + cola_caja3.size()) < 9) 
                    {
                        if ((cola_caja3.size() < cola_caja2.size()) && (cola_caja3.size() < cola_caja1.size())) 
                        {
                            System.out.println("Encolando a caja 3");
                            cola_caja3.add(cola_1.remove());
                        } 
                        else 
                        {
                            if ((cola_caja2.size() < cola_caja1.size()) && (cola_caja2.size() < cola_caja3.size())) 
                            {
                                System.out.println("Encolando a caja 2");
                                cola_caja2.add(cola_1.remove());
                            } 
                            else 
                            {
                                if ((cola_caja1.size() < cola_caja2.size()) && (cola_caja1.size() < cola_caja3.size())) 
                                {
                                    System.out.println("Encolando a caja 1");
                                    cola_caja1.add(cola_1.remove());
                                } 
                                else 
                                {
                                    if ((cola_caja1.size() == cola_caja2.size()) && (cola_caja2.size() < cola_caja3.size())) 
                                    {
                                        System.out.println("Encolando a caja 1");
                                        cola_caja1.add(cola_1.remove());
                                    } 
                                    else 
                                    {
                                        if ((cola_caja3.size() == cola_caja2.size()) && (cola_caja3.size() < cola_caja1.size())) 
                                        {
                                            System.out.println("Encolando a caja 2");
                                            cola_caja2.add(cola_1.remove());
                                        }
                                        else 
                                        {
                                            if ((cola_caja3.size() < cola_caja2.size()) && (cola_caja3.size() == cola_caja1.size())) 
                                            {
                                                System.out.println("Encolando a caja 3");
                                                cola_caja1.add(cola_1.remove());
                                            }
                                            else
                                            {
                                                if ((cola_caja3.size() == cola_caja2.size()) && (cola_caja3.size() == cola_caja1.size())) 
                                                {
                                                    System.out.println("Encolando a caja 3");
                                                    cola_caja1.add(cola_1.remove());
                                                }
                                            }

                                        }
                                    }
                                }
                            } 
                        }
                    }
                    else 
                    {
                        System.out.println("\nCajas Llenas");
                    }
                    break;
                                
                            
                            case 3: {
                    System.out.println("\nElija la caja que desea desencolar");
                    int opcion_caja;
                    opcion_caja = entrada.nextInt();

                    switch (opcion_caja) {
                        case 1: {
                            if (cola_caja1.size() == 0) {
                                System.out.println("\nCaja sin clientes, no se puede desencolar");
                            } else {
                                System.out.println("\nCaja 1 desencolada");
                                System.out.println(cola_caja1);
                                cola_caja1.remove();
                            }
                            break;
                        }
                        case 2: {
                            if (cola_caja2.size() == 0) {
                                System.out.println("\nCaja sin clientes, no se puede desencolar");
                            } else {
                                System.out.println("\nCaja 2 desencolada");
                                cola_caja2.remove();
                            }
                            break;
                        }
                        case 3: {
                            if (cola_caja3.size() == 0) {
                                System.out.println("\nCaja sin clientes, no se puede desencolar");
                            } else {
                                System.out.println("\nCaja 3 desencolada");
                                cola_caja3.remove();
                            }
                            break;
                        }
                    }
                    break;
                }
            }

        } while (opcion != 0);
                        }

                    }
