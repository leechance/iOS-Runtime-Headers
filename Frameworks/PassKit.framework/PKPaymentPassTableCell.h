/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl *_actionButton;
    UIView *_cardSnapshotView;
    <PKPaymentPassTableCellDelegate> *_delegate;
    UILabel *_mainLabel;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    int _settingsContext;
    BOOL _showAddButton;
    BOOL _showFPAN;
    BOOL _showState;
    UIActivityIndicatorView *_spinner;
    UILabel *_subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic) BOOL showAddButton;
@property (nonatomic) BOOL showFPAN;
@property (nonatomic, readonly) UILabel *subTextLabel;

- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned int)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; out void*x32; out short x33; unsigned short x34; void*x35; void*x36; const int x37; in void*x38; void*x39; const void*x40; in short x41; int x42; void*x43; int x44; out in void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; out void*x72; out short x73; unsigned short x74; void*x75; void*x76; const int x77; in void*x78; void*x79; const void*x80; in short x81; int x82; void*x83; int x84; out in void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; out void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; unsigned short x122; void*x123; short x124; void*x125; void*x126; void*x127; void*x128; unsigned long x129; int x130; unsigned int x131/* : ? */; const void*x132; const void*x133; void*x134; void*x135; const int x136; void x137; void*x138; void*x139; void*x140; void*x141; const void*x142; void*x143; void*x144; void*x145; out const void*x146; short x147; void*x148; int x149; const void*x150; const void*x151; float x152; float x153; int x154; BOOL x155; long doublex156; void*x157; void x158; int x159; BOOL x160; void*x161; void*x162; float x163; const void*x164; void*x165; void*x166; void*x167; out const void*x168; void*x169; int x170; const void*x171; const void*x172; float x173; float x174; int x175; BOOL x176; long doublex177; void*x178; void x179; int x180; BOOL x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; oneway void*x202; void*x203; unsigned int x204; unsigned short x205; int x206; void*x207; void*x208; out int x209; double x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; id x226; void*x227; void*x228; void*x229; void*x230; unsigned int x231; void*x232; bool x233; void*x234; void*x235; in double x236; void*x237; const unsigned char x238; out in float x239; int x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; id x252; void*x253; void*x254; void*x255; void*x256; void*x257; BOOL x258; void*x259; int x260; out in void*x261; void*x262; in void*x263; void*x264; void*x265; short x266; void*x267; void*x268; const void*x269; oneway void*x270; long x271; out BOOL x272; int x273; void*x274; void*x275; unsigned short x276; void*x277; void*x278; void*x279; long x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; id x291; void*x292; void*x293; void*x294; void*x295; inout unsigned short x296; void*x297; void*x298; void*x299; void*x300; int x301; in void*x302; void*x303; out double x304; void*x305; long x306; bool x307; void*x308; int x309; long x310; double x311; void*x312; const void*x313; void*x314; void*x315; void*x316; id x317; void*x318; void*x319; void*x320; void*x321; void*x322; unsigned int x323; long doublex324; void*x325; in void*x326; void*x327; int x328; BOOL x329; void*x330; int x331; void*x332; void*x333; void*x334; int x335; out in BOOL x336; void*x337; int x338; void x339; void*x340; oneway void*x341; long x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; id x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; const int x365; unsigned int x366/* : ? */; void*x367; void*x368; void*x369; double x370; unsigned short x371; void*x372; const int x373; in void*x374; void*x375; void*x376; const short x377; void*x378; const unsigned char x379; out in void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; id x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; in void*x402; const int x403; BOOL x404; unsigned int x405; in void*x406; void*x407; in void*x408; void*x409; void*x410; short x411; void*x412; out in short x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; id x434; unsigned char x435; void*x436; void*x437; void*x438; void*x439; void*x440; long doublex441; void*x442; short x443; short x444; void*x445; void*x446; short x447; void*x448; out long doublex449; out void*x450; in long x451; out void*x452; double x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; id x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; inout void*x467; void*x468; void*x469; out const void*x470; unsigned char x471; out in void*x472; const out long x473; long x474; void*x475; const void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; id x483; void*x484; void*x485; void*x486; void*x487; void*x488; oneway int x489; void*x490; void*x491; unsigned char x492; out in void*x493; const out long x494; long x495; void*x496; const unsigned short x497; void*x498; void*x499; BOOL x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; id x507; id x508; unsigned long long x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; BOOL x516; void*x517; void*x518; void*x519; in void*x520; unsigned int x521; void*x522; void*x523; void*x524; void*x525; void*x526; in void*x527; void*x528; void*x529; const void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; id x549; void*x550; void*x551; void*x552; void*x553; void*x554; unsigned char x555; unsigned char x556; long x557; out void*x558; double x559; unsigned char x560; out in void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; id x577; void*x578; long long x579; void*x580; void*x581; void*x582; unsigned short x583; unsigned char x584; void*x585; void*x586; long doublex587; oneway void*x588; long x589; void*x590; void*x591; void*x592; in void*x593; void*x594; void*x595; const void*x596; void*x597; out const void*x598; void*x599; void*x600; void*x601; void*x602; id x603; void*x604; void*x605; void*x606; void*x607; void*x608; unsigned int x609; unsigned short x610; void*x611; void*x612; const BOOL x613; void*x614; long doublex615; int x616; short x617; void*x618; long x619; void*x620; void*x621; unsigned char x622; out in void*x623; const out long x624; long x625; void*x626; const void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; id x644; void*x645; out void*x646; void*x647; unsigned long x648; void*x649; void*x650; in void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; id x671; void*x672; long x673; void*x674; void*x675; void*x676; void*x677; void*x678; void x679; void*x680; in void*x681; long doublex682; void*x683; void*x684; void*x685; int x686; long x687; long x688; void*x689; const void*x690; unsigned char x691; void*x692; long x693; long x694; void*x695; void*x696; void*x697; void*x698; id x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; double x709; void*x710; const void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; id x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; unsigned int x736; void*x737; void*x738; void*x739; void*x740; double x741; unsigned long x742; void*x743; unsigned int x744/* : ? */; void*x745; long x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; id x759; void*x760; short x761; void*x762; void*x763; void*x764; unsigned short x765; void*x766; out const void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; unsigned short x778; void*x779; short x780; void*x781; void*x782; void*x783; void*x784; unsigned long x785; int x786; unsigned int x787/* : ? */; const void*x788; const void*x789; void*x790; void*x791; const int x792; void x793; void*x794; void*x795; void*x796; void*x797; const void*x798; void*x799; void*x800; void*x801; out const void*x802; short x803; void*x804; void*x805; void*x806; unsigned char x807; out const void*x808; void*x809; float x810; const void*x811; void*x812; void*x813; void*x814; out const void*x815; void*x816; void*x817; void*x818; unsigned char x819; out const void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; SEL x845; void*x846; void*x847; void*x848; SEL x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; unsigned short x876; void*x877; unsigned int x878; unsigned short x879; void*x880; out void*x881; void*x882; void*x883; long x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; unsigned short x907; void*x908; short x909; void*x910; void*x911; void*x912; void*x913; unsigned long x914; int x915; unsigned int x916/* : ? */; const void*x917; const void*x918; void*x919; void*x920; const int x921; void x922; void*x923; void*x924; void*x925; void*x926; const void*x927; void*x928; void*x929; void*x930; out const void*x931; short x932; void*x933; unsigned short x934; void*x935; unsigned int x936/* : ? */; void*x937; void*x938; BOOL x939; void*x940; short x941; void*x942; float x943; const void*x944; void*x945; void*x946; void*x947; out const void*x948; void*x949; unsigned short x950; void*x951; unsigned int x952/* : ? */; void*x953; void*x954; BOOL x955; void*x956; short x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; unsigned int x971; void*x972; unsigned long long x973; void*x974; void*x975; bycopy void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; long long x984; void*x985; unsigned int x986; void*x987; unsigned long long x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void x1014; void*x1015; void*x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; unsigned char x1022; void*x1023; oneway int x1024; void*x1025; void*x1026; float x1027; int x1028; in double x1029; void*x1030; const oneway int x1031; void*x1032; void*x1033; unsigned char x1034; out in void*x1035; const out long x1036; long x1037; void*x1038; const void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; long long x1054; void*x1055; unsigned int x1056; void*x1057; unsigned long long x1058; void*x1059; void*x1060; void*x1061; bycopy void*x1062; const void*x1063; in short x1064; int x1065; void*x1066; void*x1067; out void*x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; BOOL x1074; void*x1075; void*x1076; const void*x1077; void*x1078; void*x1079; void*x1080; long long x1081; void*x1082; unsigned int x1083; void*x1084; unsigned long long x1085; void*x1086; void*x1087; long doublex1088; void*x1089; void*x1090; in double x1091; int x1092; void*x1093; int x1094; out in unsigned short x1095; void*x1096; unsigned int x1097/* : ? */; void*x1098; void*x1099; void*x1100; void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; void*x1106; void*x1107; void*x1108; void*x1109; long long x1110; void*x1111; unsigned int x1112; void*x1113; unsigned long long x1114; void*x1115; void*x1116; unsigned char x1117; void*x1118; bycopy unsigned int x1119; bycopy void*x1120; unsigned int x1121; long doublex1122; void*x1123; long x1124; void*x1125; void*x1126; void*x1127; in void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; long long x1139; void*x1140; unsigned int x1141; void*x1142; unsigned long long x1143; void*x1144; void*x1145; long doublex1146; void*x1147; BOOL x1148; out const void*x1149; void*x1150; void*x1151; double x1152; unsigned short x1153; void*x1154; const int x1155; in void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; long long x1166; void*x1167; unsigned int x1168; void*x1169; unsigned long long x1170; char *x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; inout unsigned char x1204; unsigned short x1205; in int x1206; void*x1207; void*x1208; void*x1209; void*x1210; long doublex1211; void*x1212; void*x1213; void*x1214; unsigned short x1215; out void*x1216; const BOOL x1217; void*x1218; void*x1219; void*x1220; in void*x1221; void*x1222; void*x1223; const void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; void*x1232; void*x1233; void*x1234; void*x1235; void*x1236; void*x1237; void*x1238; void*x1239; id x1240; unsigned int x1241; void*x1242; unsigned long long x1243; void*x1244; void*x1245; void*x1246; void*x1247; int x1248; void*x1249; void*x1250; long x1251; void*x1252; void*x1253; short x1254; void*x1255; unsigned short x1256; void*x1257; void*x1258; unsigned int x1259/* : ? */; int x1260; long x1261; int x1262; void*x1263; void*x1264; void*x1265; int x1266; out in unsigned char x1267; out void*x1268; void*x1269; void*x1270; in double x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; id x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; unsigned int x1289; unsigned short x1290; void*x1291; void*x1292; const BOOL x1293; void*x1294; bool x1295; void*x1296; const inout void*x1297; void x1298; int x1299; void*x1300; void*x1301; void*x1302; int x1303; out in unsigned int x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; id x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; unsigned short x1330; BOOL x1331; const int x1332; void*x1333; void*x1334; void*x1335; void*x1336; BOOL x1337; void*x1338; unsigned int x1339/* : ? */; out out void*x1340; void*x1341; void*x1342; short x1343; void*x1344; out in short x1345; void*x1346; void*x1347; void*x1348; void*x1349; void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; id x1365; void*x1366; long long x1367; void*x1368; void*x1369; unsigned int x1370; void*x1371; unsigned short x1372; void*x1373; unsigned short x1374; BOOL x1375; void*x1376; long x1377; void*x1378; double x1379; void*x1380; const out void*x1381; const void*x1382; short x1383; short x1384; unsigned short x1385; void*x1386; out const void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; void*x1393; void*x1394; void*x1395; void*x1396; void*x1397; void*x1398; void*x1399; void*x1400; void*x1401; void*x1402; void*x1403; void*x1404; void*x1405; id x1406; void*x1407; void*x1408; void*x1409; void*x1410; void*x1411; unsigned long x1412; void*x1413; out void x1414; int x1415; void*x1416; void*x1417; const out void*x1418; void*x1419; const void*x1420; int x1421; void*x1422; short x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; id x1433; void*x1434; long x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; const bycopy void*x1444; void*x1445; in void*x1446; void*x1447; unsigned long x1448; void*x1449; void*x1450; long x1451; void*x1452; void*x1453; const void*x1454; void*x1455; void*x1456; void*x1457; void*x1458; void*x1459; id x1460; void*x1461; void*x1462; void*x1463; void*x1464; void*x1465; bool x1466; unsigned short x1467; void*x1468; out const void*x1469; void*x1470; out bool x1471; bool x1472; int x1473; in double x1474; void*x1475; const void*x1476; void*x1477; void*x1478; void*x1479; void*x1480; void*x1481; void*x1482; void*x1483; void*x1484; id x1485; oneway void*x1486; void*x1487; void*x1488; void*x1489; unsigned int x1490; unsigned short x1491; void*x1492; void*x1493; const BOOL x1494; void*x1495; bool x1496; void*x1497; const unsigned short x1498; BOOL x1499; out void*x1500; void*x1501; bool x1502; void*x1503; const bool x1504; void*x1505; BOOL x1506; void*x1507; void*x1508; const out void*x1509; in double x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; id x1523; struct x1524; void*x1525; unsigned char x1526; void*x1527; unsigned int x1528; unsigned short x1529; void*x1530; int x1531; in in void*x1532; const void*x1533; int x1534; void*x1535; long x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; id x1548; void*x1549; out void*x1550; void*x1551; void*x1552; long doublex1553; unsigned long x1554; inout out const void*x1555; void*x1556; long x1557; void*x1558; void*x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; const void*x1566; void*x1567; void*x1568; void*x1569; void*x1570; void*x1571; void*x1572; out void*x1573; void*x1574; void*x1575; void*x1576; void*x1577; void*x1578; void*x1579; unsigned long x1580; void*x1581; void*x1582; void*x1583; long x1584; void*x1585; unsigned int x1586; void*x1587; void*x1588; void*x1589; void*x1590; void*x1591; void*x1592; void*x1593; void*x1594; void*x1595; void*x1596; void*x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; id x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; unsigned short x1611; void*x1612; short x1613; void*x1614; void*x1615; void*x1616; void*x1617; unsigned long x1618; int x1619; unsigned int x1620/* : ? */; const void*x1621; const void*x1622; void*x1623; void*x1624; const int x1625; void x1626; void*x1627; void*x1628; void*x1629; void*x1630; const void*x1631; void*x1632; void*x1633; void*x1634; out const void*x1635; short x1636; void*x1637; void*x1638; void*x1639; long x1640; void*x1641; void*x1642; int x1643; void*x1644; void*x1645; float x1646; const void*x1647; void*x1648; void*x1649; void*x1650; out const void*x1651; void*x1652; void*x1653; void*x1654; long x1655; void*x1656; void*x1657; int x1658; void*x1659; void*x1660; void*x1661; void*x1662; void*x1663; void*x1664; void*x1665; void*x1666; void*x1667; void*x1668; void*x1669; void*x1670; void*x1671; void*x1672; void x1673; void*x1674; void*x1675; void*x1676; void*x1677; void*x1678; void*x1679; unsigned char x1680; void*x1681; unsigned short x1682; void*x1683; short x1684; void*x1685; void*x1686; void*x1687; void*x1688; unsigned long x1689; int x1690; unsigned int x1691/* : ? */; const void*x1692; const void*x1693; void*x1694; void*x1695; const int x1696; void x1697; void*x1698; void*x1699; void*x1700; void*x1701; const void*x1702; void*x1703; void*x1704; void*x1705; out const void*x1706; short x1707; void*x1708; int x1709; void*x1710; out const void*x1711; unsigned int x1712; void*x1713; void*x1714; out const void*x1715; void*x1716; float x1717; const void*x1718; void*x1719; void*x1720; void*x1721; out const void*x1722; void*x1723; int x1724; void*x1725; out const void*x1726; unsigned int x1727; void*x1728; void*x1729; out const void*x1730; void*x1731; void*x1732; void*x1733; void*x1734; void*x1735; void*x1736; void*x1737; void*x1738; void*x1739; void*x1740; void*x1741; void*x1742; void*x1743; void*x1744; void*x1745; void*x1746; void*x1747; void*x1748; void*x1749; void*x1750; void*x1751; void*x1752; void*x1753; void*x1754; void*x1755; void*x1756; void*x1757; void*x1758; void*x1759; void*x1760; void*x1761; void*x1762; void*x1763; void*x1764; void*x1765; void*x1766; void*x1767; short *x1768; void*x1769; void* x1770[ /* ? */ ]; void*x1771; void*x1772; void*x1773; void*x1774; void*x1775; void*x1776; void*x1777; void*x1778; void*x1779; void*x1780; void*x1781; void*x1782; void*x1783; void*x1784; void*x1785; void*x1786; void*x1787; void*x1788; void*x1789; void*x1790; void*x1791; void*x1792; void*x1793; void*x1794; short *x1795; void*x1796; void*x1797; void*x1798; long x1799; void*x1800; void*x1801; void*x1802; void*x1803; void*x1804; void*x1805; void*x1806; void*x1807; void*x1808; void*x1809; void*x1810; void*x1811; void*x1812; void*x1813; void*x1814; void*x1815; void*x1816; void*x1817; void*x1818; void*x1819; void*x1820; void*x1821; void*x1822; void*x1823; void*x1824; void*x1825; void x1826; void*x1827; void*x1828; void*x1829; void*x1830; void*x1831; void*x1832; void*x1833; void*x1834; void*x1835; unsigned int x1836; void*x1837; void*x1838; void*x1839; void*x1840; void*x1841; void*x1842; in void*x1843; void*x1844; void*x1845; const void*x1846; void*x1847; long long x1848; void*x1849; void*x1850; short x1851; void*x1852; void*x1853; void*x1854; void*x1855; void x1856; void*x1857; void*x1858; void*x1859; void*x1860; void*x1861; void*x1862; void*x1863; void*x1864; unsigned short x1865; void*x1866; short x1867; void*x1868; void*x1869; void*x1870; void*x1871; unsigned long x1872; int x1873; unsigned int x1874/* : ? */; const void*x1875; const void*x1876; void*x1877; void*x1878; const void*x1879; void*x1880; void*x1881; void*x1882; out const void*x1883; short x1884; void*x1885; void*x1886; void*x1887; out void*x1888; out short x1889; void*x1890; float x1891; const void*x1892; void*x1893; void*x1894; void*x1895; out const void*x1896; void*x1897; void*x1898; void*x1899; out void*x1900; out short x1901; void*x1902; void*x1903; void*x1904; void*x1905; void*x1906; void*x1907; void*x1908; void*x1909; void*x1910; void*x1911; void*x1912; void*x1913; void*x1914; void*x1915; void*x1916; void*x1917; void*x1918; void*x1919; void*x1920; void*x1921; void*x1922; void*x1923; void*x1924; void*x1925; void*x1926; void*x1927; void*x1928; void*x1929; void*x1930; void*x1931; void*x1932; void*x1933; void*x1934; void*x1935; void*x1936; void*x1937; void*x1938; void*x1939; void x1940; void*x1941; void*x1942; void*x1943; void*x1944; void*x1945; void*x1946; void*x1947; void*x1948; unsigned int x1949; void*x1950; unsigned char x1951; unsigned short x1952; void*x1953; const void x1954; void*x1955; const void*x1956; void*x1957; void*x1958; void*x1959; void*x1960; void*x1961; void*x1962; void*x1963; void*x1964; void*x1965; void*x1966; void*x1967; void*x1968; void* x1969[ /* ? */ ]; void*x1970; void*x1971; void*x1972; void*x1973; void*x1974; void*x1975; void*x1976; void*x1977; void*x1978; void*x1979; void*x1980; void*x1981; void*x1982; void*x1983; void*x1984; void*x1985; void*x1986; void*x1987; void*x1988; void*x1989; void*x1990; void*x1991; void*x1992; void*x1993; void*x1994; void*x1995; void*x1996; void*x1997; void*x1998; void*x1999; void*x2000; void*x2001; void*x2002; void*x2003; void*x2004; void*x2005; void*x2006; void*x2007; void*x2008; void*x2009; void*x2010; void*x2011; id x2012; void*x2013; void*x2014; void*x2015; void*x2016; void*x2017; void*x2018; void*x2019; void*x2020; void*x2021; void*x2022; void*x2023; void x2024; void*x2025; void*x2026; void*x2027; void*x2028; void*x2029; void*x2030; void*x2031; void*x2032; void*x2033; void*x2034; void*x2035; void*x2036; void*x2037; void*x2038; void*x2039; void*x2040; void*x2041; void*x2042; void*x2043; void*x2044; void*x2045; void*x2046; void*x2047; void*x2048; void*x2049; void*x2050; void*x2051; void*x2052; void*x2053; void*x2054; void*x2055; void*x2056; void*x2057; void*x2058; void*x2059; void*x2060; void*x2061; void*x2062; void*x2063; void*x2064; void*x2065; void*x2066; void*x2067; void*x2068; void*x2069; void*x2070; void*x2071; void x2072; void*x2073; void*x2074; void*x2075; void*x2076; void*x2077; void*x2078; void*x2079; unsigned char x2080; unsigned int x2081; void*x2082; void*x2083; out void*x2084; out void*x2085; float x2086; float x2087; void*x2088; BOOL x2089; void*x2090; void*x2091; const void*x2092; in short x2093; float x2094; void*x2095; const void*x2096; void*x2097; void*x2098; void*x2099; void*x2100; void*x2101; void*x2102; void*x2103; void*x2104; void*x2105; void*x2106; void*x2107; void*x2108; void*x2109; void*x2110; void*x2111; void*x2112; void*x2113; void*x2114; void*x2115; void*x2116; void*x2117; void*x2118; void*x2119; void*x2120; void*x2121; void*x2122; void*x2123; void*x2124; void*x2125; void*x2126; void*x2127; void*x2128; void*x2129; void*x2130; short x2131; void*x2132; void*x2133; void*x2134; void*x2135; void*x2136; long long x2137; void*x2138; void*x2139; int x2140; void*x2141; out void*x2142; in void*x2143; void*x2144; void*x2145; struct x2146; void*x2147; void*x2148; void*x2149; short x2150; void*x2151; void*x2152; void*x2153; const void*x2154; void*x2155; void*x2156; BOOL x2157; void*x2158; void*x2159; void*x2160; void*x2161; void*x2162; void*x2163; void*x2164; void*x2165; void*x2166; float x2167; void*x2168; void*x2169; void*x2170; void*x2171; void*x2172; const void*x2173; void*x2174; void*x2175; void*x2176; void*x2177; void*x2178; void*x2179; unsigned int x2180/* : ? */; void*x2181; unsigned char x2182; void*x2183; out void*x2184; const void*x2185; void*x2186; void*x2187; SEL x2188; void*x2189; SEL x2190; void*x2191; inout void*x2192; out void*x2193; double x2194; void*x2195; void*x2196; void*x2197; void*x2198; void*x2199; void*x2200; void*x2201; struct x2202; void*x2203; void*x2204; void*x2205; short x2206; void*x2207; void*x2208; void*x2209; const void*x2210; void*x2211; void*x2212; BOOL x2213; void*x2214; void*x2215; void*x2216; void*x2217; void*x2218; inout void*x2219; out void*x2220; double x2221; void*x2222; void*x2223; void*x2224; void*x2225; void*x2226; struct x2227; void*x2228; }*)arg1;
- (id)pk_childrenForAppearance;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(BOOL)arg1;
- (void)setShowFPAN:(BOOL)arg1;
- (void)showActivitySpinner:(BOOL)arg1;
- (BOOL)showAddButton;
- (BOOL)showFPAN;
- (id)subTextLabel;
- (void)tintColorDidChange;

@end
