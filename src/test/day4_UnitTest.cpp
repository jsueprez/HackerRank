#include "gtest/gtest.h"
#include "day_4.h"

class TestingDay4 : public ::testing::Test
{
public:
    void SetUp()
    {
    }

    void TearDown()
    {
    }

    day4 d4;

};

TEST_F(TestingDay4, gridChallenge_case1)
{
    std::vector<std::string> v1{"ebacd", "fghij", "olmkn", "trpqs", "xywuv"};

    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case2)
{
    std::vector<std::string> v1{"abc", "ade", "efg"};
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case3)
{
    std::vector<std::string> v1{"mpxz", "abcd", "wlmf"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case8)
{
    std::vector<std::string> v1{"eibjbwsp", "ptfxehaq", "jxipvfga",
                                "rkefiyub", "kalwfhfj", "lktajiaq",
                                "srdgoros", "nflvjznh"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case99_1)
{
    std::vector<std::string> v1{"zzwj",
                                "zjzw",
                                "zwzj",
                                "jzwz"};
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case9)
{
    std::vector<std::string> v1{"yxxxx",
                                "xyxxx",
                                "yyyyy",
                                "yyyyy",
                                "yyyyy"};
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case14)
{
    std::vector<std::string> v1{"rwbjpnbgdholzg",
                                "uuyeshywidtmvb",
                                "jzwanhgjrxpauc",
                                "mllxukhyludrzy",
                                "vdhblnswipegvq",
                                "hywyxytapvteso",
                                "oxkedyqdcydyja",
                                "vcqhxyqegvgkbe",
                                "elhccejlgvkzxk",
                                "ftqskqufoghjii",
                                "xnijodkrdefqhs",
                                "thaotslfajwvce",
                                "majcyczjbosuwv",
                                "euuhrdlbapcsqg"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case18_3)
{
    std::vector<std::string> v1{"wik","kgy","mqk"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case89)
{
    std::vector<std::string> v1{"wsyeisuskreuwnbrverqmicsmcoyagqbhbgunhanhxofruarzafjkazreankxcrqcvsslkwtuvfqslfcwaxrxovtq",
                                "iiovmvubszlmbksrqpmidrhxzwohhqjnsdwkaaupknftnnzgxvywnzzovxlxoljkweyyenjtiewwvbnpzvihjwabi",
                                "tigldvxlpaxlnjoqccdkuzfrgvizkxieeeduddtgutdaqhoffquprjihyomybdblwjgpcqajdfxicnkpjicvxkidh",
                                "zdprunsebtvmzroykqgmsctfhnxywazdmtkjzhmxfnryeousseaarnioboidzddljhqruyitryubfpygmlbnzrnyd",
                                "skzsldlcxqbazjcctaocdrxqxasapxfvndriwvaolfqcahdjvsmcpqmsqxhydqbkvsotpzdkopepuublhqrqygqih",
                                "hmgacrziyvybgugroupylhmfenqpwrhonyogvqowawwgqooxbwipwemgfuwqvlifqxqqyvalzwmaonrkxlzwoybqi",
                                "asuelruckhwocmiocibxkfuirtmmjatvhokvlgwtaretdohcwwfzmhcbmpsunqbjiyrlykcjeylffmlnpkevvzkji",
                                "fdsruuumedqjkvtdhcflepoovdzkvftiatdrkgjgevqlepcgbaoqoslubqvimkxpnwkxyjonfunxfpmhlinuxjhjm",
                                "kiuknxcwvxpjldvqundfpurggrvfteylfxirbcmfgwmrrsjrzkbrcadmnvfpkqmyulfbllyuaivtllsxvfakbkkse",
                                "yvvalpowsfyqihygooilgqdxhqxffsalklqtuximsslrngwsaajfrwtfzvmccqfysakojbwxolovymdrgqggqrzqw",
                                "splsedrhovukgkoyuavbmnfwtppkvqypjhjdgevtmcfwbwewwrvcmczufnviaujaqizpbctfofqcfflyvfhurjjyq",
                                "qrvhrhotjppwhqpvglxdkcywywxmloexnlkktgehlslimbhjiwaupbuxpmondorutofosjvzrqshgtdxnscwpljiv",
                                "qxqymdztyaymfluhcyyfymwgekpmwgwtqswdppxxbtuvnweovdsmvhzrnhwoeliawakaheyikqznqrclqirjhadaj",
                                "lgfcydwsftiovkulxnozyrnybnqehebfixkkntlxpovzuifkeklohumaaywqblbahqyuqqpukfecbeaeqghpcitpk",
                                "ynqytcghmyvkwqjetneenvxkftxrdnjdqjqxxtkggfuvcpslaitbaaoopfahidevhpitzhpuqvodonuxwxdiiupzg",
                                "jzsfslibvmehprqyddgdfepxauqikrsrrztgpfbdmofbbooepyspiafphfgxavfqmcjyvdwtlflfrbzawjjrcyhey",
                                "ysyvgfxuhplsqblxhpepforrlqrxhrvtaahszkfczcupsfisiayscbjshxkipsdfaoacrewccoabtmgddtbhoszye",
                                "slosaneeolnuhbunlxbhashxluproyzrpxzgejevihgxmkhvtazeyxwrqygzodsglwjkknjbyqrcrangkzclvbnkn",
                                "ybdvstfglzcelmxyqjwpxoajdyjkqcdkrniryxbdubcsczdsjkslgdlwsozjbnwimvpnuqeidubzghiphwnydlglh",
                                "ovgchdwcupbsqkhkrwlmxwbwjppsdwghcnnzknaosrjkehupmgvzgkzueexcozgugotfyyxgvqjjdjlpfsihtoflj",
                                "zpykfxxnnbzoeiboovszmkdhifugihphvglexozltxvuijeujzuwoyrjdxddrurnpwbwvbafnlftxiqfjfhpyxlwr",
                                "yjutnkjwxijaeljmhcuehxywrqpjatkgtvzxqosczhxqnexyfmqdrwmtdqvagmnlutnnjhfhloeadelruqprgidnf",
                                "wenvdninscxofytckfljfoddxnspojplljhadsdnyghhbiyqghflknypuuuzlyajdshxxyrhuznwqsfnlwephhssx",
                                "vlguelshufhkoynbssihwhfwgzetuomntnevuqxlqodavvotmbcolwbyhhxzrqwnnwhrnouagvzycsciznnljlsdh",
                                "dpfhqfhydgmkdbjlqtfouxbwjdnqpzhzrwxixygbcxqanflgblqaolgjbeqdvcsmhoqhnwogslpldbuzbshlekcsl",
                                "lpnnrlndzuuwqfpeowfcmzgyilhnampgrsdozrvqlohlvrhocsowmztxtgdfdbqggzdkcawdzeuxzowqiovydqubp",
                                "hojbfvyltdatvclcjbdrsrgeomagbwhozcgpuuyxdaspgtbgrwiayriqmmuvhdkvwjvoiljsydifxulgznoqwkdui",
                                "bjiojwzobfzfcpgyysgjpvxhxgmyqclhwcszjmwgexvtwechmbhihusjztluwotntsunzbfvdcxgpkbkcpxrdxlfv",
                                "dppqsetrunvjnynijwcgpzdkdnfpevkitspmcfgjrrcwshhhohvzijvpyrapumatitalczqjhnyqznzspzysqkztq",
                                "qipbkoyxxyzyxibaqywovwclcfpzihyrwwhnldclzeoompyhbuhroazkzdbjoaocprrxihuddiaskxjnxisyfzcko",
                                "wydbcpmysjwgxybllmixifoywrhvtgtomdfonbeojqvrvipgrhjvntskgtugzqmiqnvgzlivxpoortgvnkegrqcdn",
                                "epqdmtlewnzucwxswdkhjwzqjntpvknzcjkowgpzdijknhjeefeviwlgwhjcqocnimajsnrdmhzzulyenbfcaculp",
                                "ofdcuejjcjjhmxwdjirehuqfivvfhxyklhdntnajyysuytfigaqltqscjpiapcpchrlbwphkppjuwyllequmdqbeo",
                                "ofrydsbmzpfalnxvsslvkhxkfatgyfllgthblygpxhryffvrepllrgrktaravaoueykcfnajkdqautbuwsovnkuij",
                                "zsfjdujaeqgqwsgmiqbjteakjtwaqcxedcwcsalpqfntoxvqudrldnbpddmzdnkkqpoxdxhzwabyijrrobzweqcul",
                                "taqulzrfkhhsbdokhgzcnspszzhixyepcxpoyxsadcxihdpocbpusgqeskcflzgnebibfxrmxqirzneaqvnjfxxyk",
                                "novgflisqxpmonroqmmyhmhacgotqtjftqysuohskbvcbxmnujnuuqizqdavokazozuhpxapcpzyaxlyzfezkbfpn",
                                "tqjecsjcrdxvlwcxqaqypvookyepqpskjtqpgatouxgghkavypvfjnacsfndhtbsgujvzllzytbnjqerdvdfcfclx",
                                "srxzbtvprtamdxflxawpdnfcxnjbvbqugmxpbspncksdnwmtmazpwaehvkqrqjdlpyrfkqfxfvxpcqsjflgmjvxnr",
                                "nkjfditklftbnihkjgartqmvdgfspzktmjcajakuybjecwojnsriyizpvcjvgtxauhwzjidvyvwzozekzlxntjpon",
                                "exprgkaornelpgwgckidcolhewshbnmsaozrbknqpwzstrdrlpokhrhdlqjwxonpzrtzsgyjtkpbozxkxszbyjspl",
                                "idqbviqqbczsvnxkocofxjfqxnivodznfzyxtysftajvmnuzobvnfcrhbcgfskewgwublvkefhlywdvenyvtppljk",
                                "zpnnxeieqvmufcyxtnclwdnejrxeteikgymbyarsbafivbcecoancihqvztughlhqllrgjyeprzxrcyiiydsdpodv",
                                "mbcirmagmtmapanlakmtpnqhmrjumbnbfckxescajvxkgyqwipnwqalbpqmxduzamercyitbfwpdrgabalhzgeyrz",
                                "fercjftycecdcjdutumarqwhtgftqaqjxtyuifnvqmlaornwqzirabqjmnyleqrlhdxvnlfqxzqedqbwttfvinbjz",
                                "nvopipuomheqwxknceheuwecrqxiirocwrchbubodqyyomnzvsplipejmtawostchrwuvizpsdfcgyhgpjjnmznef",
                                "gmzsaqhtksbymnxqtaacvvbdpinvscwluzpvsusenoccebyeofjymfcleqeqofiwoxnqrnpvlvfqzelyxxrxklgus",
                                "wzvatehlnweydwflqixvzcsrejvwgcikqammtlrbbxtmtqgkdyuagmqugfwncfxzriddjtkiqwrkluhhlcvlvtasy",
                                "livfonydirottvfrwnwrwzfwsapmepteturipcftjktfopdculodovjxymjjgavmetkuozkkobqtfiixppeozdobg",
                                "bctcupaqcbxrwzxlwhlqnhignvqmzaoohqdrhoxzheaeycuctqwiadzyztztcpxncymboxsfkathtsxnwvshlurok",
                                "ijlxfmtxstwgevexdwvzenjhkuiqrjlragxfcctfmzvjxppwcnjtdyfuhcvxfkophqzasioailbwczffjredkvmnf",
                                "zhiseirilfimdaqdsvrcyxbdrdiohexssqghinzajshltwrfxfnjtrkvzeiqstfmcrhmuicpyhlbjmvagbuhsgcdu",
                                "iwyrmvehdmmytlhrmdaiszvyfpovkgbjkkmsfgyllgrlxblkslsdeirlhjpniowechfwyrebqngejrzlxkylsosxq",
                                "rmoeivtlnyypawjduekblybhqimnggcydturyujjgdtplvdbkpqpkkdlbmmyyjaiwfighlvubvbyijzaqlkwjmtia",
                                "vhmlxxlhwthtqaoobrlvtqjnkbzeatwoamsrzwxbacchwudjiarffqxweoeicigfezzolysqicmqzgbrnwfspkbcq",
                                "rgppoompuqwitfclzefmfizjylckiplqtmqnzwigxfxkyfiyjmqjmchbcchptunfutivvwgrjlofgqnxuvgkhbjok",
                                "qjuqsclvqhypkavvevyatoihzdlaorgsfxwgbkynuoqmdijnrglmmiamynijrajrdaezqgynxxrdqwcmcxulqwwbl",
                                "xeauirblylblqdfvlxrlaqohpbonjnxfkcmxnoxbzvafupiuiskwgfolznyoxvlpsoujkiwctfdztolbkecghbvti",
                                "utfgmywkfhdtyjhmmtpcsakrolmbfnzvgphgwogjghnsumfovbmppqnssmsahonnehtfwhftcjvlavbakvgcasoto",
                                "qwborshhczvuzizaemtvwzdcimslwvmcjmfmtckbdxjiynclmbzejubskwzdkqhmtjguphgnxaztxroivkbrzroje",
                                "axbjdoiogfzrrqdxivnsbbsafpohvtasfzesifbndhhiijrdfsxpypewezepqbesbmoxydvxvkkskcihuhojckpfu",
                                "sfnbwnwotppvzvpewanvyqxseyjelrdfeislqkgqzjmiatuucpellgfairyofimpviezytbbfdircykhgpgjcnhbz",
                                "mobilqeuknzlhrinytdxregkidbrkujjrypinojrkklndxwbovsamqilmakykodpikyocmlcofblreudtowalanwr",
                                "jgrtbiofbyqsjjdsxmpdtedstdxkjfdiskfsrmqysyyrgkpigotngaacedwusnwdfydktqwsedknenyrxwvjespje",
                                "sxlqsggvhzcorktdwjfwhajnujakovyzouhwixzjadiyulusoiuavbolgyklausfuhycetjirocrgsnqoseauunbd",
                                "drrvheurbjclhddxwnetuonvpdinqkwkqypjerjfrrvkomlethdrupxessvoskewycfrbdkzluznwuahtjjjdzwfq",
                                "khaijcswsssduqlzfjsgppkrtporpntexwjdduotadlugosmdjladcbgzqjydtnjcdisqnamgyiprfxoacjxswslh",
                                "vvifpvjmpelvqdzdxosqslifhvloymqhiwizepextgsmepeqdpyzjsjfmejlnizbxhtlkppbdfyqpksusoxmwimdo",
                                "yeeglgnzwreacceiddxtspliubmikpcdtewzsxmbgkgagculnaezjvceifcdhdrxneqmlvidzxbkywybdpoacecsf",
                                "fjdvelbelxybqodhbcfwnaiowvshjqmgtgrkyzjxzogdqsujryfpgbnkzwmdjvxyuzweqlothicynwacbzbkmblrv",
                                "qfeygiuwkhtxehwquuehtbzpwafxqmkcdtebhywvvuzzauzgqhxawtprsgblmogxrmdksfquzgiipprzuzfjkftzy",
                                "teoggckuxfiwckphkykhssjejmqkywzzimwoscaopzzhgcpeamjlcnmrdtkagpezdwevokmczondxtygfcmygsyvb",
                                "ptedqrvsbwanirpjdyxneseohaugxlaajgdiigzqufocjgdixyrjfxgunmwrrcmnqmucrmjdlmxgqvamyjetsqouf",
                                "ffvrwqyjcqjicnzxwalakpphkarcelrefhgtewxhuleadfbxdgwmkrqjmyarvadwxwhefekplqzylwvdjhtekfbrm",
                                "cuhlzmuxvkgdhacfmrnfetzdtkbcoktewgjjkfhphjzacahtyxlimxjgvfqjcqfxydvvpfpfjeviscginljuirfvb",
                                "bosmfdfaafjttwocvqqimsnwffyjwvtpoyoilfarzhmvgzjboshvbwgdzgwvjoncyqlddejzakfolwmwiztatbktl",
                                "nkxynsbaefoiuligkmibkkqljdzlxpznsloetipxeybgrabwsaurhvefuzgzjxhbcmegzzhdegbbixrhhunkwkonr",
                                "enjogpqdwcfjxsrhvcikzmahmxhhuruvyyfcmcnctovxcsjixfnxkukowunffjwccgrlfpqzzgzuwfikgxvahwjbt",
                                "pryeagqccgusxsotnpxmqwudnowhmdqqsvvgjfbufyajoimehcumvyxscrpowstrtcfpznpiatdvhgqlbvkfwuzho",
                                "gyteniehsvsxbuezsgdvcjewrzejchaaycvqjolvyhkbjnvyzdmgpwlupzzfwyyacfzbwtfbffwhltbdnmhxlfmaf",
                                "ixxwtqjzfrltowluvfzvatwskbnczyysypioxeckbabtlegcibfealjfpffrljzwsmythhikzldzalbytvnpigmbx",
                                "lvvkclpxfkveyrnerxczzwlnrhykrhddshzperatfozjbyfuzorurcyosngvcjztbpyerqpkuyayjmumrurbzaugg",
                                "xyhbzhplutgkszgfnjnuihwzkkpirmkumkkqppfqmiugcjqwgyqgjnfffcrtafghginkuhvgmipcfyyecwbxltzjq",
                                "qkhgaplmjldrqrhlspwuprcpvcnbvfbciicikuakhnzlrzlnypdtbgnvojaulkthoyfmxrmomgxrrkuvkchpfxsqw",
                                "chsbvvlzxrpaakkgjuikeisnumgtcwnftgbkkohcqktarutlmllnrzjyqhzjxikhwcfiulbdnalayddjalvbzhctv",
                                "bdomilskutskgpjeyknwkkrcfcsbrgqytibvqiwfudanvkskzrzuistlhjzbebkhhwpnkaqdpivgrdcfgutlpghcr",
                                "xqgtnywfjecgcktnfemikvndkbcmctzazvldrwhnmaoblqkornrngymyrlgwbiwzffvahfuunxztsytmpolbuichl",
                                "efmfooowvamhitujafkfhjzullimrhjrdlkprdhijurzxiiokxrhzmagpjovjqgperrcpauxqsnrpcktvrwxvtiuc",
                                "tyozpuehislzofpqqdoulzlqtjvctkjlajxgmorxapzntybrjtyhlnaaukhttcrfcwerarmmhpidgcytsdzbhqkbq"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case48)
{
    std::vector<std::string> v1{"fxaiiapeexfykzmwkhzfezguwlsfwdgdbgvfrwudbxopqrvq",
                                "zoubrcpjiiumrmnyzygrrvxwyootzvkktnodxtgiavysnhyc",
                                "payxqkuusdqzilemhmbyiashuqsuftctjphplpvjlvhcetsr",
                                "etxyjpzdnuqmeucqwlxziorzvsbfdfarspsipnvcymzbmrzd",
                                "ulyejkxprqqullpweuessprhtqiavfvdmgxmlfemdtxwetjr",
                                "xqxxyhgjxwsgrgpdosmqcagyrqyauxjxamouftxfrnpumpsf",
                                "jvebibzicqdrydiimxohfjruconalxyclhfplwbzthdeyege",
                                "xbjiddimvgywcuhetgeilkralnvibfwbdpkebkeuipvlabxc",
                                "cofbxukuxousfuognsujnqxyswycxyotpzdreoelnnkmlrzz",
                                "wictdbdgddyspblvxwkcwiwocwazwifdsmeawqvscvpnhyyk",
                                "gdfcagizdjqrlpnprpubdsziknwdrzbdshkzizzgdnqhkhsm",
                                "bugfqttcyaesppoagpalfkzsbplsxmvjqbqiuboztjotbrim",
                                "mzwzfqgprjcdsvwpmdokrcejrbciqgyzzbouwpwmruobbfyy",
                                "mdcrsnwdxubgzvmedqoziwhafmzrogbxpzdbcfgvdwyzowoj",
                                "jourxvdpumbanuikywklqdqbserttbzgdddysdudcrmyfuoa",
                                "azpdnkraczmwvxrgsptftvhyvwsvtpyatqzxeuzcsafifvdv",
                                "stspifzwxmrwgexiillhgpqwvnqhflkybbpwnpthnytglwrn",
                                "zwukrszjcrygfdmfgnfzbtkgvrqfcimkscswudzndgbevkmy",
                                "phmpmtgbtkmdyrnzocroqbifgkbwawctqzjqsllqxhjrxnzb",
                                "uxqptljwkpwpucvdvubyqeooxdrlhjdnirrjegmrzxdokxgi",
                                "jxtsovczgznnrekgoijruepckddbgmlfqhmcbcjdidenokvx",
                                "diihdbnyuokymosfkgaoycxdyxayhrkqxvazgcbwwbptnplg",
                                "nbgihonlviucdrqeuymwmufnohagqzvomydnrmljvzuawfbs",
                                "xwvxhjopjxcbppehvhpmrdtsxagxuuqalfqueaefqpdrrshz",
                                "yjtlwygqmbusjfsxjpgwvnqixbtcempyegaenpgmsiutcvfk",
                                "zsweioyvijtleokqqiytlstxdeftptiiyuyedcluoctvmlfs",
                                "ejosditxwihdfwlpbgsxzjvhqqkxuwlegeueylcsmvlyzneg",
                                "zhwupmflvifkpoimthfkvnidfbtgumnvcxcjwqmevvlfhauw",
                                "kpsynsrccextzfyhtqxstrcbizxhciziycdmyooyjdufhpzo",
                                "drvbalodlnxxkqanhzchjsysihijfwtrutypykwxfhwyodit",
                                "mrzmttxlouhvmbxufqkzaksilmfickcmgjghhvibqbxatqpu",
                                "agchidondwxdpqooslrkffjpydihlvrlaeeqoesbpkgvcmia",
                                "ychtdwjuohipfhedicdlqbmybzddzbxedtcrurudngmyhdzc",
                                "hrvbfehdommkkfmfdicfikwuunqtnxcpumljclituvjtuccu",
                                "bcngfgwucpmwkivmazobryzhasrlbwicbuldabdwosxevjld",
                                "zfcvgauzmslnqmujludtinfcpedudvwypfiwwjssrjsqsxwl",
                                "qvykoqmqexqftekkstzpiadayggeuohtywzhnntcjdnugdzv",
                                "pzpfgmjesbpxaukezzyzbtgdkihcnlnotvgwewefuroopciq",
                                "eozirppdgjxmqyrdxxjejltbetrhcmljnvukvcyphvdabgat",
                                "kvgpdgbtozemvymrwhkkrafigdbqqrnhipzpatutgzhcynhw",
                                "mokcfkkeautaqvgbpgqkuggwitvtagmxhgyoopqpzqlxqrev",
                                "ammrmkafjbejyklfnsqkimzktstpzqfbgrggekenybtxdxqs",
                                "dlknatvsmaxfqkphsbhxsrlifeokasicbeqfwpogstveydpr",
                                "odsifnjreepwlxlpszgjnbwvricyoflzskxdvbvkjppckfov",
                                "hpbpwqzmbetdjkrfbrhasjceebntlzuitigbwnivghalvsvi",
                                "kgtvleesyfjcnnpochdulppmrnkidhhlqxhaogokfinrvfgb",
                                "wozegqhukxubthgxlscpxqpnuposurgzmwgvrlehmhjpqpdz",
                                "dqfqagxzljslpteheprboaddbflywaferhpwxpalzmekaksp"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case59)
{
    std::vector<std::string> v1{"zzzzzvzzzozzvzzzzzzzzzozozzzzzzzzzzzzczzzzzzzzzzzzzzzzzzzzz",
                                "zztzzzvzzzzzzzzzzzzzzzztzzzzzzzzzzzvzzztzzzztzzzzzzzzzzzzzz",
                                "zzzzzzztzzzzzzzzzzvzzzzzzzzzzzzzztzzzzzzzzzzzzvtzzzzzzzzzzt",
                                "zztzzzzzztzzuzzzzzzzzzzwzvzzzzzzzzzzzzzzzzzzztzzzzzzzzzzzzz",
                                "zzzzzzzzzztzzzzzzzzyzzzzzzzzzztzzuzzzzzzzzzzzzzzvtzzzzzzzzz",
                                "zzzzzzzzzzzzzzzyzzzzzvzzvvzvzzzzzzzzzzzzzzzzzzzzzzzvzzzzzzz",
                                "zzzzzzzzzzzvzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzvvzzzvzvzzzzz",
                                "zzvvzvzzzzzzzzzzzzzzzvzzzzzzzzzvzzzzzzzyzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzwzzzzzzzzzzzzzzzzzzzzwvzvzzzzzzzzzzz",
                                "zwzzzzzzzvzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzvzzzzzzzzzzzzwzz",
                                "zzzzzzzzzzzzzzzzzzzzzwzzzzzzzzzzzzzzzvzzzzzwzzzzzzzzzzzzvzz",
                                "zzzvzvzzzzzzwzzzzzwzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzyzzzzzzzzzzzzzzzzzvzzzzyzzzzzzzzzzzzzzzzzzyzzzzzzz",
                                "zyzzzzzzzyzyzzzzzzzzzzzzzzzzzzzzzzzzzzvzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzyzzzzzzzzzyzzzzzzzzzzzzzzzzzzzvzyzzzzzzzz",
                                "zzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzvzzyzzzzzz",
                                "yzzzzzzyzzzzzzzzzzzzzzzzyzzzzzzzzvzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzyzvzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzyzzvzzzzzzzzzzzyz",
                                "zzzzzzzzzzzzzzzzzzzzzzzvzzzyyzzzzzzzzzzzzzzzzzzyzzzzzzzzzzz",
                                "yzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzyzzzzzvzzzzz",
                                "zzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzyyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzyzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzyzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzyzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzz",
                                "yzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzyzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzyzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzyzzz",
                                "zzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzz",
                                "zzzzzzzyzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzyzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case16)
{
    std::vector<std::string> v1{"aquyepccwzzsleti",
                                "telemzpsrzwidbsz",
                                "gudjgbijfdwqtecw",
                                "omfxmnavivpkbgzb",
                                "xxxrenwmiayommqv",
                                "hmlwywlyfxtatwra",
                                "yejztjdcbhwkrzfo",
                                "fpzlifzzhkszlplm",
                                "kutawwsbbppalqma",
                                "ayhygiyqtncpvlut",
                                "lhtixtjpbaaslziq",
                                "fnikwtqkwzscqcmh",
                                "dotyyjnotxhvptfs",
                                "rrqactufzsskpxcz",
                                "tiqmdusiwovdbsqy",
                                "donmfcoctjjcxihm",};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case15)
{
    std::vector<std::string> v1{"iobhposylbmxuxq",
                                "bpdbysamgxlzwxl",
                                "mszdikmnriqowcr",
                                "pzayixomdqfhnpj",
                                "oipskkcbasumvls",
                                "eawmuhmkhxohkxl",
                                "bmjuiqvykhjcgkb",
                                "uqhmhwsxfyliwdg",
                                "lwtstpmsxhmbapl",
                                "tpsevgaeyzpialk",
                                "ldrlqvcrzceyxod",
                                "acxghpfzfvlukad",
                                "kpmtbdqztfvqlzc",
                                "ftaffeffmexgksp",
                                "tgkbtstopxzrwpx"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_case56)
{
    std::vector<std::string> v1{"zzzzzzzzzzzzzzzvzzzzzzzzzzzzzvzzzzvvvzzzzzzzvzzzzzzzvzvz",
                                "zzwzzwzzzzzwzzzzzzzzzzzzwzzzzwzwzzzzzzzzzzzzzzzzzzwzzwzz",
                                "yzzzzzzzzzzzzyzzzzzzzyzzzzzzzzyzzzzzyzzzwzwzzzzzzzzzyzzz",
                                "zzzzzzzzzyzzzzzzzzzzzzzzzyzyyzzwzzzzzzzyzzzzzzzzyzzzzzzw",
                                "zzzzzzzzzzzzzzzzzzyyzyzwzzzzyzyzzzzzwzzzzzzzzzzzzzzzzzzz",
                                "zzzzyzzzzzzzwzzzzzzzzzzzzyyzzzzzzzzzzzzzzzzzyzzzyzwzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, gridChallenge_case46)
{
    std::vector<std::string> v1{"lnpxeemwlqlzpxrmrmwbseqfnpkzaafdnukixaopcfvhqw",
                                "dhfhhoyhhzleldljmirjbqagcleivzomlpanqzsmqnrzij",
                                "zcsrvgqlmrgknqhwtcqzyldjanlczysnspvusziqtazjlu",
                                "idiknfqdygrwhvdzperlvgueqhuezsrwzztlodqgipnqzb",
                                "zjfyxbghvdecpzhvoxzojcpciaspyoeaetimmoccjqxtmv",
                                "mxwnhdyjutecwbrxdjmrbdjvbzprgnekvnvhxnuvekoflo",
                                "jjbjxzuaafatzdwlnzcorkiagrwzvrmjqqbdlmgyewzsea",
                                "bmvyqojhnbfrypiiwvtgifmqqdcuilohbfvkqjhlcwsfyo",
                                "zrbjhsrxnllmsdfqurkjfomwsvgfepwttohojxmrhexpmy",
                                "hcdxtucpeptgqhckpdxdcgpvhkiuucvwbuhtmbskqdlasw",
                                "rtocxkyrsrbluwvpfkekqkdwncvozfgmcrswpksiqmfnnl",
                                "xawlpinqjstxvrqvsugbvszhibbcmbdwktgwjlezakyqrr",
                                "cfghwolkahdafrcuufklziipmtkhuxdrxqlavcrxavxuas",
                                "plcsutiemkgfunhpyeiuvxwjppzsopglcyhgidsyhjnutp",
                                "vyyrbmfyfwpcowlpytmkvsyrzgiausrulsxtwysjgpgtqi",
                                "bsoknggdytplubxzjczatotnpovriwibeamjfnyxibvama",
                                "imkshtavbjpnkafuxwbzpiqlnnotrxmjepzeuwtuewtqab",
                                "ttjzqrcdcofkljaevmauexsxlkrxuanxgrsmsrxckixpoz",
                                "aocndkatjggduuyiksgmovthyoomrfsaxlnjouszxxoqtc",
                                "ahmkgizkvsbrqyricbtnpvpnibvgvnnrnqphkstvcjsbli",
                                "biasqbcofwdgabnipodjkriiyqlhaddpegkmydutcyoksk",
                                "avyaodwtgbdsnhheoearlinfcadeteiiudobbvqdqizcry",
                                "mhdekyvubghealrenyshjcjuhxxzimsgvukcdfdbjramzq",
                                "ayrzjanrebdgowsngullkgyvlgqzjexebleigxvgwjnbyf",
                                "vcpnclkhoawabjlhfnrncxfswjjmpxqcwoeqpyaitwdrjf",
                                "ghngenuvshwuaubahlzazwmgnsmtzyqfvvoxnhiufhxpac",
                                "ljrwslmgjilvdommuvpebcznjalxuazyujtzpewdbxjnwj",
                                "jqirnjnheowbioheyleyhkrcyfxuweyipumfojetmvomuz",
                                "vnnlsozyplofqkxfwcmlyntfrhspvbscocodlejqrymdeu",
                                "lgjcimksyragrhhagkmlnaysfxzswxfkhqzrhjlgkemmhp",
                                "weoxhopddcyiiikwblqvvcxcuxkebhywdacpmjrlkosxmw",
                                "bwcxxsytqdpybjxyqgmggitkgpkiytnwprsnxrygryxigo",
                                "qtwyleqxqflmaudekmdmgscfvjfwkchacxmokxrcfgwnhl",
                                "dgcmvhgnzigmrxougsbhwdhugyvloaqlliybbzkttmolln",
                                "jqmrfoyhwxbiyvzntvxozfswwjbeybahggfjrrzzhbapyi",
                                "oxbjadgrttqnfbevqolflhdpmgwgudhwfeebauqhhygvnt",
                                "kwmqirrljycddqcvjanibiarpcjjqiuvkdbdyzogbcixah",
                                "yyykebcfsnixcjdbkxtqvqynafmtuvoepeayiaqinvmjen",
                                "lsyxwgpfxlfkxckzsjzonxkhullkatmnwwfuicgjzbnvzf",
                                "vihglfapunknuitwtcxzdwjyfwqurvsydacylgcyohrbou",
                                "olmojrovoqseuqausssdupqzhbmyblomlbbqzwgbtgyiwq",
                                "tcshhbdgxsrtxywgqahqfimbnckwdhtbzlpwevuqjyqrbd",
                                "vjmcknagopzpwrmrianbgyhyginqduwdfjgmdqttcqroof",
                                "srmfsjigydlqlgsmvgqddpqmqkjzptzwdfpjmpnvgaezlx",
                                "yphbhtrmqcnrfklqmkblvginnhxxtlnnwcfuwujdqwkvaq",
                                "jahvrihhicrqvttmdzwbemjjqnstvtudvifdvrbjxalirj"};
    EXPECT_EQ(d4.gridChallenge(v1), false);
}

TEST_F(TestingDay4, gridChallenge_longVector)
{
    std::vector<std::string> v1{"wzxzwxzyzzwzyyzwzzxzyxzyzzwwyzzyzjxyxzzzyyzyyyzzzxzzzzyjzyyyzzzxyzzzyzyzwyzyyzzzzzzxyzyyyyxzxxzyxwz",
                                "zzzzzzzzuxxzzzzzzzzzzzxwzzzzzzxxzzzzyyzxxzzzxzzxzzzzzzzzzxzzzzzzzzzwxwzzzzzzxwzzzyxzzzzzzzyzzzzxzxu",
                                "zzzzzzyzzzzzyyzzzzzzzzzyzzzzzyyzzzzzyyzzzzzzyzyzzyzyzzzzzyyzzzyyyyyzyzyzzzzzzzzyzzzzzzzyzzzzzzzyyzz",
                                "zyyyyyzzzzzyzzyyyzyyzzzyzzzzyzzzzzzyzzzzzzyyzzyzyzyzzzzzyzzzzzzyzzzzzzzzzzzzyzzzzzzzzzzzzyzzzzzzzyy",
                                "yzzzzyzyzyzyyzzzzzyzzyzzzzzzzzzzzyzzyzzzzzyzzyzzzzzzyzzyzyzzzzzzzyzzzzyzzzzzzzzzzzzzzzzzzzzyzzyzzzz",
                                "zzzzzzzzzyzzyzzyzzzzyzzyzzzzzzzyyzzzyzyzzzzzzzzyyzzyzzzzzyyzzzzzzzzzzyzzzzyzzzzzyzzzzzzyzzzzzzyzzzz",
                                "zzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzz",
                                "zzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzyzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzyzzzzzzzzzzzzz",
                                "zzzzzzzzyzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
                                "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
                               };
    EXPECT_EQ(d4.gridChallenge(v1), true);
}

TEST_F(TestingDay4, superDigit_case0)
{
    auto s1{"148"};
    auto k{3};
    EXPECT_EQ(d4.superDigit(s1,k), 3);
}

TEST_F(TestingDay4, superDigit_case1)
{
    auto s1{"9875"};
    auto k{4};
    EXPECT_EQ(d4.superDigit(s1,k), 8);
}

TEST_F(TestingDay4, superDigit_case2)
{
    auto s1{"123"};
    auto k{3};
    EXPECT_EQ(d4.superDigit(s1,k), 9);
}
