import React from "react";
import "./home_u0.css"
import {HiCurrencyDollar, HiUserCircle} from 'react-icons/hi'
import axios from "axios";

import Container from 'react-bootstrap/Container';
import Navbar from 'react-bootstrap/Navbar';

// Funcionalidades: 
//      - Ver saldo
//      - Ver cardápio

function HomeU0() {
    // Get Saldo
    var saldo = "0,00"
    axios.post("/user0/getbalance").then(
        (response) => saldo = response.saldo    // CONFIRMAR
    ).catch(
        (error) => console.log(error)
    )

    // Cardápio estático
    const cardapio = [
        'Almoço',
        'Bife de Panela (Prato protéico 1)',
        'Torta colorida (Prato protéico 3)',
        'Virado de Cenoura (Guarnição)',
        'Arroz Branco (Acompanhamento 1)',
        'Feijão Carioca (Acompanhamento 2)',
        'Salada de Alface Crespa (Entrada 1)',
        'Salada Tabule (Entrada 2)',
        'Doce de Paçoca [Sobremesa (uma porção)]',
        'Refresco [Refresco (um copo)]',
        'Molho de Tomate com Orégano'
    ]

    return(
        <div className="app">
            <div className="box">
            <Navbar className="w-100" bg="light">
                <Container>
                    <Navbar.Brand><HiUserCircle className="icon align-top"/> Usuário Usuário Usuário</Navbar.Brand>
                    <Navbar.Brand><HiCurrencyDollar className="icon align-top "/> Saldo: R$ {saldo}</Navbar.Brand>
                </Container>
            </Navbar>
                <ul aria-label="Cardápio:">
                    { cardapio.map ((item) => <li> {item} </li>)}
                </ul>
                <text>Cardápio sujeito a alterações.</text>
            </div>
        </div>
    )
}

export default HomeU0