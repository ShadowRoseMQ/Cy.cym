#ifndef GEIRIADUR_HPP
#define GEIRIADUR_HPP

#include <unordered_map>
#include <string>

// Comprehensive Translation Matrix: Maps singular & plural Welsh terms to English C++ keywords
const std::unordered_map<std::string, std::string> DICTIONARY = {
    // Basic Data Types
    { "cyfanrif", "int" },
    { "cyfanrifau", "int" },
    { "llinyn", "std::string" },
    { "llinynnau", "std::string" },
    { "testun", "std::string" },
    { "nod", "char" },
    { "nodau", "char" },
    { "degolyn", "float" },
    { "degolion", "float" },
    { "gwirionedd", "bool" },
    { "gwirioneddau", "bool" },
    { "gwag", "void" },

    // Control Flow & Conditionals
    { "os", "if" },
    { "fel_arall", "else" },
    { "tra", "while" },
    { "ar_gyfer", "for" },
    { "newid", "switch" },
    { "achos", "case" },
    { "achosion", "case" },
    { "diofyn", "default" },
    { "torri", "break" },
    { "parhau", "continue" },

    // Core I/O & Functions
    { "ffenestr", "main" },
    { "argraffu", "std::cout" },
    { "argraffiadau", "std::cout" },
    { "allbwn", "std::cout" },
    { "allbynnau", "std::cout" },
    { "mewnbwn", "std::cin" },
    { "mewnbynnau", "std::cin" },
    { "llinell_newydd", "std::endl" },
    { "dychwelwch", "return" },

    // Object Oriented & Modern Syntax
    { "dosbarth", "class" },
    { "dosbarthiadau", "class" },
    { "strwythur", "struct" },
    { "strwythurau", "struct" },
    { "cyhoeddus", "public" },
    { "preifat", "private" },
    { "gwarchodedd", "protected" },
    { "newydd", "new" },
    { "dileu", "delete" },

    // Library Mappings for System Headers
    { "ffrwd_io", "iostream" },
    { "ffrydiau_io", "iostream" },
    { "ffrwd_ffeil", "fstream" },
    { "ffrydiau_ffeiliau", "fstream" },
    { "matrics", "unordered_map" },
    { "matricsau", "unordered_map" },
    { "geiriadur", "unordered_map" },
    { "mynegiad_rheolaidd", "regex" },
    { "mynegiadau_rheolaidd", "regex" }
};

// Comprehensive Error Matrix: Maps standard MSVC (cl.exe) error codes to Welsh educational explanations
const std::unordered_map<std::string, std::string> ERROR_MATRIX = {
    // Syntax & Formatting Errors
    { "C2143", "Gwall Cystrawen: Mae semi-colon (;) ar goll cyn y gromfach neu ddiwedd y llinell. Cofiwch gau pob datganiad!" },
    { "C2146", "Gwall Cystrawen: Wedi methu canfod semi-colon (;) yn union cyn yr dynodwr hwn." },
    { "C2059", "Gwall Cystrawen: Tocyn (token) annilys neu anghyfreithlon wedi'i ganfod. Gwiriwch eich atalnodau." },
    { "C2018", "Cymeriad anhysbys neu anghyfreithlon wedi'i ganfod yn y côd (e.g., nod ASCII anghywir)." },
    { "C2001", "Llinell newydd y tu mewn i destun sefydlog. A wnaethoch chi anghofio cau'r dyfynodau (\") ar gyfer y llinyn?" },
    { "C2429", "Mae arddull y nodwedd god hon angen fersiwn fwy modern o C++. Mae angen y flag '/std:c++17' ar y crynhöwr." },
    { "C2593", "Mae dryswch yn y gweithredydd arosod (assignment operator). Nid yw'r crynhöwr yn gwybod pa fath o ddata i'w roi i'w gilydd yma." },

    // Variable & Declaration Errors
    { "C2065", "Gwrthrych neu Newidyn heb ei ddatgan: Nid yw'r crynhwr yn adnabod yr enw hwn. A wnaethoch chi ei sillafu'n gywir neu anghofio ei greu?" },
    { "C2374", "Ail-ddatganiad: Rydych chi wedi ceisio creu dau newidyn gyda'r un union enw yn yr un un cwmpas." },
    { "C2086", "Ail-ddatganiad o newidyn statig neu leol o fewn yr un bloc." },
    { "C2440", "Methu Trosi Math o Ddata: Rydych chi'n ceisio gosod gwerth anghywir i mewn i newidyn (e.g., rhoi testun i mewn i gyfanrif)." },

    // Function & Flow Control Errors
    { "C2064", "Nid yw'r gwrthrych hwn yn ffwythiant (function). Rydych chi wedi ychwanegu cromfachau () at rywbeth nad yw'n gweithredu fel ffwythiant." },
    { "C2660", "Nid yw'r ffwythiant hwn yn derbyn y nifer o baramedrau (arguments) rydych chi wedi'u pasio iddo." },
    { "C2664", "Methu trosi paramedr yn y ffwythiant. Nid yw'r math o ddata rydych chi wedi'i basio yn cydweddu â gofynion y ffwythiant." },
    { "C2041", "Gwall Achos: Rydych chi wedi defnyddio gwerth anghyfreithlon neu dyblyg y tu mewn i strwythur 'newid' (switch/case)." },

    // Linker & Structure Errors
    { "C2653", "Nid yw'r enw dosbarth neu 'namespace' hwn yn bodoli cyn y gweithredydd cwmpas (::). Gwiriwch am eiriau fel 'allbwn'." },
    { "C2039", "Nid yw'r aelod neu'r elfen hon yn rhan o'r dosbarth (class) neu strwythur (struct) hwn." },
    { "C1083", "Methu agor ffeil gynnwys (include file). Nid yw'r llyfrgell y tu mewn i'r cromfachau < > yn bodoli neu wedi'i sillafu'n anghywir." }
};

#endif
