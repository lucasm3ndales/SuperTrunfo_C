typedef struct { // struct do baralho.
    char name[30];
    char type;
    int st;
    int intel;
    int alco;
    int nihil;
} cheap;

cheap card[24]; // variável carta.

void Cheap_st() { // função para guardar os valores das cartas.
    strcpy(card[0].name, "Rick Sanchez"); // carta super trunfo, representada pelo boolean "1".
    card[0].type = 'A';
    card[0].st = 1;
    card[0].intel = 10;
    card[0].alco = 10;
    card[0].nihil = 10;
//-----------------------------------------
    strcpy(card[1].name, "Evil Rick");
    card[1].type = 'A';
    card[1].st = 0; // cartas comuns, representadas pelo boolean "0".
    card[1].intel = 5;
    card[1].alco = 2;
    card[1].nihil = 8;
//-----------------------------------------    
    strcpy(card[2].name, "Doofus Rick");
    card[2].type = 'A';
    card[2].st = 0;
    card[2].intel = 1;
    card[2].alco = 6;
    card[2].nihil = 3;
//-----------------------------------------
    strcpy(card[3].name, "Tiny Rick");
    card[3].type = 'A';
    card[3].st = 0;
    card[3].intel = 3;
    card[3].alco = 8;
    card[3].nihil = 9;
//------------------------------------------
    strcpy(card[4].name, "Simple Rick");
    card[4].type = 'A';
    card[4].st = 0;
    card[4].intel = 8;
    card[4].alco = 1;
    card[4].nihil = 2;
//-------------------------------------------
    strcpy(card[5].name, "Pickle Rick");
    card[5].type = 'A';
    card[5].st = 0;
    card[5].intel = 9;
    card[5].alco = 6;
    card[5].nihil = 7;
//!-------------------------------------------
    strcpy(card[6].name, "Guard Rick");
    card[6].type = 'B';
    card[6].st = 0;
    card[6].intel = 2;
    card[6].alco = 4;
    card[6].nihil = 6;
//-------------------------------------------
    strcpy(card[7].name, "Toxic Rick");
    card[7].type = 'B';
    card[7].st = 0;
    card[7].intel = 5;
    card[7].alco = 9;
    card[7].nihil = 10;
//-------------------------------------------
    strcpy(card[8].name, "Teacher Rick");
    card[8].type = 'B';
    card[8].st = 0;
    card[8].intel = 4;
    card[8].alco = 2;
    card[8].nihil = 5;
//-------------------------------------------
    strcpy(card[9].name, "Slow Rick");
    card[9].type = 'B';
    card[9].st = 0;
    card[9].intel = 2;
    card[9].alco = 8;
    card[9].nihil = 4;
//-------------------------------------------
    strcpy(card[10].name, "Salesman Rick");
    card[10].type = 'B';
    card[10].st = 0;
    card[10].intel = 7;
    card[10].alco = 1;
    card[10].nihil = 2;
//-------------------------------------------
    strcpy(card[11].name, "Shibuya Rick");
    card[11].type = 'B';
    card[11].st = 0;
    card[11].intel = 2;
    card[11].alco = 5;
    card[11].nihil = 6;
//!-------------------------------------------
    strcpy(card[12].name, "Granpa Rick");
    card[12].type = 'C';
    card[12].st = 0;
    card[12].intel = 7;
    card[12].alco = 1;
    card[12].nihil = 4;
//---------------------------------------------
    strcpy(card[13].name, "Seal Rick");
    card[13].type = 'C';
    card[13].st = 0;
    card[13].intel = 5;
    card[13].alco = 3;
    card[13].nihil = 8;
//---------------------------------------------
    strcpy(card[14].name, "Granpa Rick");
    card[14].type = 'C';
    card[14].st = 0;
    card[14].intel = 5;
    card[14].alco = 4;
    card[14].nihil = 3;
//---------------------------------------------
    strcpy(card[15].name, "Hologram Rick");
    card[15].type = 'C';
    card[15].st = 0;
    card[15].intel = 7;
    card[15].alco = 1;
    card[15].nihil = 5;
//---------------------------------------------
    strcpy(card[16].name, "Headband Rick");
    card[16].type = 'C';
    card[16].st = 0;
    card[16].intel = 4;
    card[16].alco = 7;
    card[16].nihil = 9;
//---------------------------------------------
    strcpy(card[17].name, "Investigator Rick");
    card[17].type = 'C';
    card[17].st = 0;
    card[17].intel = 6;
    card[17].alco = 3;
    card[17].nihil = 1;
//!---------------------------------------------
    strcpy(card[18].name, "John Rick");
    card[18].type = 'D';
    card[18].st = 0;
    card[18].intel = 8;
    card[18].alco = 2;
    card[18].nihil = 10;
//---------------------------------------------
    strcpy(card[19].name, "Granpa Rick");
    card[19].type = 'D';
    card[19].st = 0;
    card[19].intel = 5;
    card[19].alco = 1;
    card[19].nihil = 4;
//---------------------------------------------
    strcpy(card[20].name, "Teddy Rick");
    card[20].type = 'D';
    card[20].st = 0;
    card[20].intel = 5;
    card[20].alco = 7;
    card[20].nihil = 6;
//---------------------------------------------
    strcpy(card[21].name, "Quantum Rick");
    card[21].type = 'D';
    card[21].st = 0;
    card[21].intel = 8;
    card[21].alco = 4;
    card[21].nihil = 3;
//---------------------------------------------
    strcpy(card[22].name, "Shrimp Rick");
    card[22].type = 'D';
    card[22].st = 0;
    card[22].intel = 3;
    card[22].alco = 5;
    card[22].nihil = 7;
//---------------------------------------------
    strcpy(card[23].name, "Weird Rick");
    card[23].type = 'D';
    card[23].st = 0;
    card[23].intel = 9;
    card[23].alco = 4;
    card[23].nihil = 3;

    shuffle(card);
}





