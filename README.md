# Ndeshje Basketbolli🏀

## Përshkrimi
Ky projekt është një simulim i një ndeshjeje basketbolli i shkruar në **C++**. Ai mund të përdoret për të regjistruar informacionet mbi ekipet, numrin e lojtarëve, kohëzgjatjen e ndeshjes dhe rezultatet. 
Programi gjithashtu përcakton fituesin bazuar në rezultatet e futura dhe mund të shfaqë një mesazh për barazim në rastin kur nuk ka fitues.


## Funksionalitetet
- Regjistrimi i emrave të ekipeve dhe numrit të lojtareve;
- Vendosja e kohës së ndeshjes;
- Regjistrimi i rezultateve për secilin ekip;
- Afishimi i fituesit ose rezultatit të barazimit;
- Mundësia për të ekzekutuar funksione të ndryshme si: inicializimi i ndeshjes, regjistrimi i rezultateve dhe shfaqja e informacionit.

## Përdorimi
1. **Inicializoni ndeshjen**: Jepni informacionet bazë për ndeshjen (emrat e ekipeve, numri i lojtarëve, koha e ndeshjes).
2. **Regjistro rezultatin**: Futni rezultatet për secilin ekip.
3. **Shfaq informacionin e ndeshjes**: Programi do të afishojë detajet e ndeshjes dhe do të përcaktojë fituesin (ose barazimin).
4. **Dil**: Mbyllni programin.

## Struktura e Projektit 
- **ndeshja_basketbolli.cpp**: Kodi kryesor i programit, ku janë implementuar funksionet për regjistrimin dhe shfaqjen e ndeshjes.
- **README.md**: Përshkrimi i projektit, si ta ekzekutoni dhe funksionalitetet që ofron.

## Si ta ekzekutoni projektin 
1. Shkarkoni dhe instaloni një kompilues për C++ (p.sh., `g++`).
2. Ekzekutoni komandat më poshtë në terminal për të kompiluar dhe për të ekzekutuar projektin:

   ```bash
   g++ ndeshja_basketbolli.cpp -o ndeshja_basketbolli
   ./ndeshja_basketbolli

   ![Informacionet e ndeshjes së basketbollit](screenshot(4).png)
