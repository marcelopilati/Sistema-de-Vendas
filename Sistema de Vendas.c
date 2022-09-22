#include <stdio.h>
#include <stdlib.h>
void main(){

    int opcao, modelo, voltagem, compra, peca, tipo_chave, quantidade;

        printf("Sistema de Vendas Travatec!!\n\n");
        printf("Voce entrou no sistema de vendas, selecione uma opcao: \n\n");

         while(opcao != 2){

        printf("1 - Comprar\n\n");
        printf("2 - Sair\n\n");
        scanf("%d", &opcao);


        if(opcao == 2){
            printf("Sistema Encerrado\n\n");
            break;
        }

        if(opcao == 1){
            printf("Selecione uma opcao: \n");
            printf("1 - Travas Eletricas\n");
            printf("2 - Pecas de Reposicao\n");
            printf("3 - Suportes\n");
            printf("4 - Temporizadores\n");
            scanf("%d", &compra);

            if(compra == 1){
                printf("Selecione um Modelo: \n");
                printf("1 - TE200\n");
                printf("2 - TE300\n");
                printf("3 - TE400\n");
                printf("4 - TE500\n");
                printf("5 - TE600\n");
                printf("6 - Injetmax\n");
                scanf("%d", &modelo);

                    if(modelo == 1){
                        printf("Voce escolheu a trava TE200!!\n\n");
                        printf("Selecione a voltagem: \n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE200 12 volts\n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE200 24 volts\n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!!\n\n");
                            }

                    else if(modelo == 2){
                        printf("Voce escolheu a trava TE300!!\n\n");
                        printf("Selecione a voltagem\n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE300 12 volts\n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE300 24 volts\n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE300 110 volts\n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE300 220 volts\n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!!\n\n");
                    }

                    else if(modelo == 3){
                        printf("Voce escolheu a Trava TE400!!\n\n");
                        printf("Selecione a voltagem: \n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE4OO 12 volts\n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE400 24 volts \n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE400 110 volts \n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE400 220 volts \n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!!\n\n");
                    }

                    else if(modelo == 4){
                        printf("Voce escolheu a Trava TE500!\n");
                        printf("Selecione a voltagem: \n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE500 12 volts \n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE500 24 volts \n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE500 110 volts \n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE500 220 volts \n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!! \n\n");
                    }

                    else if(modelo == 5){
                        printf("Voce escolheu a Trava Eletrica TE600! \n");
                        printf("Selecione a voltagem: \n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE600 12 volts \n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE600 24 volts \n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE600 110 volts \n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas TE600 220 volts \n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!! \n\n");
                    }

                    else if(modelo == 6){
                        printf("Voce escolheu a Trava Eletrica Injetmax!! \n");
                        printf("Selecione a voltagem: \n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas Injetmax 12 volts \n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas Injetmax 24 volts \n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas Injetmax 110 volts \n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d travas eletricas Injetmax 220 volts \n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!! \n\n");
                    }
                    else
                        printf("Opcao Invalida!! \n\n");
            }
            else if(compra == 2){
                printf("Selecione uma peca de reposicao: \n");
                printf("1 - Bobina \n");
                printf("2 - Chicote \n");
                printf("3 - Tubo de Aluminio \n");
                printf("4 - Pino Interno\n");
                printf("5 - Chave \n");
                printf("6 - Mola \n");
                printf("7 - Pino Externo \n");
                printf("8 - Chapa de Aco \n");
                printf("9 - Ponteira de Aco \n");
                scanf("%d", &peca);

                    if(peca == 1){
                        printf("Selecione a voltagem\n");
                        printf("1 - 12 volts\n");
                        printf("2 - 24 volts\n");
                        printf("3 - 110 volts\n");
                        printf("4 - 220 volts\n");
                        scanf("%d", &voltagem);

                            if(voltagem == 1){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d bobinas 12 volts \n\n", quantidade);
                            }
                            else if(voltagem == 2){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d bobinas 24 volts \n\n", quantidade);
                            }
                            else if(voltagem == 3){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d bobinas 110 volts \n\n", quantidade);
                            }
                            else if(voltagem == 4){
                                printf("Insira a quantidade: \n");
                                scanf("%d", &quantidade);
                                printf("Voce comprou %d bobinas 220 volts \n\n", quantidade);
                            }
                            else
                                printf("Opcao Invalida!! \n\n");
                    }
                    else if(peca == 2){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d chicotes \n\n", quantidade);
                    }
                    else if(peca == 3){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d tubos de aluminio \n\n", quantidade);
                    }
                    else  if(peca == 4){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d Pinos internos \n\n", quantidade);
                    }
                    else if(peca == 5){
                            printf("Selecione o tipo de chave: \n");
                            printf("1 - Segredo Diferente \n");
                            printf("2 - Segredo Igual \n");
                            scanf("%d", &tipo_chave);

                                if(tipo_chave == 1){
                                    printf("Insira a quantidade: \n");
                                    scanf("%d", &quantidade);
                                    printf("Voce comprou %d chaves segredo diferente \n\n", quantidade);
                                }
                                else if(tipo_chave == 2){
                                    printf("Insira a quantidade: \n");
                                    scanf("%d", &quantidade);
                                    printf("Voce comprou %d chaves segredo igual \n\n", quantidade);
                                }
                                else
                                    printf("Opcao Invalida!!\n\n");

                    }
                    else if(peca == 6){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d Molas \n\n", quantidade);
                    }
                    else if(peca == 7){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d Pinos Externos \n\n", quantidade);
                    }
                    else if(peca == 8){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d Chapas de Aco \n\n", quantidade);
                    }
                    else if(peca == 9){
                        printf("Insira a quantidade: \n");
                        scanf("%d", &quantidade);
                        printf("Voce comprou %d Ponteiras de Aco \n\n", quantidade);
                    }
                    else
                        printf("Opcao Invalida!! \n\n");
            }
            else if(compra == 3){
                printf("Insira a quantidade: \n");
                scanf("%d", &quantidade);
                printf("Voce comprou %d Suportes \n\n", quantidade);
            }
            else if(compra == 4){
                printf("Insira a quantidade: \n");
                scanf("%d", &quantidade);
                printf("Voce comprou %d Temporizadores \n\n", quantidade);
            }
            else
                printf("Opcao Invalida!!\n\n");
            }
         }
}
