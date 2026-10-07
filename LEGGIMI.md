# Tutorial C: editor e visualizzatore

## File da usare

- `editor.html`: modifica descrizioni, associa uno o più video a ciascun sorgente, aggiunge link YouTube e registra la revisione.
- `index.html`: elenco ricercabile dei sorgenti, codice selezionabile e copiabile, download del `.c` e riquadro video.
- `associazioni.json`: catalogo condiviso letto da entrambe le pagine. Contiene descrizioni, codice, video e associazioni.

I due HTML includono JavaScript e CSS: non richiedono librerie esterne, compilazione, token GitHub o server applicativo. Sono disponibili anche dati iniziali incorporati, per aprirli direttamente dal computer.

## Revisione e salvataggio

1. Apri `editor.html` e seleziona un sorgente dall'elenco.
2. Spunta i video da associare oppure premi **Nessun video**. Puoi aggiungere un link YouTube, anche non in elenco, e cambiare la descrizione.
3. Quando hai terminato il controllo del sorgente, spunta **Ho revisionato le associazioni**. Ogni modifica successiva ai video toglie questa conferma.
4. Premi **Esporta JSON**. Viene scaricato `associazioni.json` (il browser potrebbe aggiungere un suffisso se esiste già un download omonimo).
5. Nel visualizzatore premi **Apri JSON** e scegli il file appena scaricato per controllare il risultato subito.
6. Per rendere permanenti le modifiche sul sito, sostituisci il file `associazioni.json` pubblicato su GitHub con quello esportato, mantenendo questo nome esatto. Attendi il completamento della pubblicazione e ricarica la pagina.

Le modifiche dell'editor vengono anche conservate come bozza nello stesso browser, quando lo spazio locale è disponibile. **Riprendi bozza** ripristina questa copia. **Anteprima** apre il visualizzatore con la bozza locale, sullo stesso sito e browser. La normale pagina `index.html` legge invece il JSON pubblicato; importare manualmente un JSON nel visualizzatore vale per quella sessione.

GitHub Pages ospita file statici: l'editor scarica il JSON, ma non modifica direttamente il repository. Il file scaricato è la copia da conservare e pubblicare. Documentazione: https://docs.github.com/en/pages/getting-started-with-github-pages/what-is-github-pages

## Pubblicazione su GitHub Pages

Carica `index.html`, `editor.html` e `associazioni.json` nella stessa cartella già pubblicata da GitHub Pages, senza cambiare i nomi. Se il sito del progetto usa la cartella `/docs`, mettili lì; se usa la radice, mettili nella radice. Puoi anche collocarli insieme in una sottocartella di un sito Pages già esistente.

Per un progetto pubblicato con il percorso predefinito `pulliver/tutorial_C`, gli indirizzi saranno:

- Visualizzatore: `https://pulliver.github.io/tutorial_C/`
- Editor: `https://pulliver.github.io/tutorial_C/editor.html`

Questi sono indirizzi previsti, non una conferma di avvenuta pubblicazione. Per un sito nuovo, configura la sorgente di pubblicazione in **Settings → Pages**, indicando branch e cartella. Se il repository rimane privato, la disponibilità di Pages dipende dal piano GitHub; verifica le impostazioni del tuo account. Il pacchetto può essere caricato anche in un altro progetto Pages.

Il JSON e i due HTML contengono il testo dei sorgenti e i link YouTube. Saranno leggibili da chi può accedere al sito; la riservatezza del repository originale non protegge le copie pubblicate. I video non in elenco sono raggiungibili tramite i link inclusi nel catalogo. L'editor non ha autenticazione, ma chi lo apre può solo modificare la propria bozza ed esportare un file: non può scrivere nel repository.

## Origine dei dati e associazioni iniziali

Importato il file `associazioni_sorgenti_youtube.xlsx` preparato nella revisione precedente: 41 righe, 34 sorgenti e 17 video. Le colonne di revisione erano vuote. Il codice è la copia già letta dal repository per quella revisione e non viene aggiornato automaticamente da GitHub. Lo SHA di ogni sorgente è conservato nel JSON.

Le 10 corrispondenze singole proposte nel foglio sono inizialmente selezionate, con etichetta **Proposta da verificare**. I candidati ambigui sono disponibili nell'editor ma non selezionati. Tutti i 17 video restano nel catalogo, compreso “somma con puntatori ispezione”, ancora senza sorgente individuato. Sono possibili più video per un sorgente e lo stesso video per più sorgenti.

Le descrizioni riassumono il codice; il codice originale non è stato corretto. Alcuni file sono vuoti, bozze o esercizi incompleti.

## Video e uso locale

Il player viene caricato solo premendo **Carica video YouTube**. Per più video associati usa il selettore. Se il proprietario ha disabilitato l'incorporamento, oppure il browser o YouTube bloccano il player, usa **Apri su YouTube**. L'incorporamento usa il formato documentato qui: https://developers.google.com/youtube/player_parameters

Aprendo gli HTML con doppio clic, il browser può impedire la lettura automatica del JSON vicino alla pagina e la condivisione della bozza locale tra file. In questo caso usa **Apri JSON** in ciascuna pagina. Su GitHub Pages il JSON viene letto automaticamente. Il pulsante Copia usa gli appunti quando disponibili; altrimenti seleziona il codice e invita a usare Ctrl+C o Cmd+C. Per riprodurre YouTube serve una connessione Internet; il player può non funzionare da un indirizzo `file://`.

## Controlli eseguiti

Verifica in Chromium del ciclo modifica → esportazione → importazione, ripristino della bozza, lettura del JSON pubblicato, copia del codice, collegamenti al player, sorgenti senza video, rifiuto di JSON non validi, contenuti trattati come testo, collegamenti diretti ai sorgenti e layout mobile. Il test del player verifica URL e interfaccia: non certifica la riproduzione effettiva dei singoli video YouTube.
