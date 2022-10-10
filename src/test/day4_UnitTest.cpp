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

TEST_F(TestingDay4, superDigit_case7)
{
    auto s1{"2365978831649490136475575038877779575813226775851820912370812124502641538947920808397703549713678494683928497712437176140282589350277653479225520602813456433277417366680426198633681891184348757007292907409160353745221125354212095528784124728447770959861439390350308313917365021363541712618686942946773324003146008424205688630371656757561012224744901800726911246423272186301595490993253791386102270201965996662707215300748516732223935858816466886068592299708740453558018878677753623653080545592459765998008028026982510689469213738241205802446029154833458048894002646934119082621498341445221491190955459548371083839625590505228681017724678315572531551988758568150699821635779156685637531274097856486075649357610713833072735231599919848220063026429718137766286716343385059699133211699189933339174843625266398503099203416124466032711453854413933737536836406105991857744766344461162222670876732729171585512468615558499979720269427922798431312270483732004392503905160233457811525428432787732543799783309593536386190295516419339222642886780012683583264436427241020490358960438948951090123073035203797984302163150042110707217274102457735317367100133807782064391421012191958312396649052833396257876824943425814834615313474161638240747120342368147351931074481983318414461554116111216672594256301273113776892080967125790153125125885441941114178586071406149630777323200516190208241341822285244325578953416388462284725673478766919050744786263188733438572307443267700831425575113213359873223948072988922668251652320316884761627830570057061821492039968369341602081382603302965910382997241199808824091331180464950187035576778206683245316006405529597170652549163351875206280564448346510252775085876212617353369513619186390565654064068546863018765466029315754619416429621887091818939474391383675337791979997519954871635692656223852981330368145996344325688247632566665645262588764650823901065646663460851602833982853795901687202035893967893724362979886948663369428689585509715442019662325024294581705265808022570365351645495802686891955348084550615538750809287498241260408673517746608582833123696027380353038348218786331710334697053069152326732702246704177127367642287975998486114018970510842276024855162228267767755948030029723573646908844109049374244456580474922058250964260437721278380069311972455077102266167098465788845261016395772392904280411167763443571285141388567074805986331207454652671618663858701085276806486000014124900483188940484497173286284987124699515039831183902383877120136788492339903316093693938833730548247174799553092402671083313285813003903363625219370039413610850308966558948057932583576771492037811460439359542902624599661588624295232252616245186844975995180218889230403968087888108494214819234992007182241562844376961711438491105585390645332161544542326095869642445733823661806228697208277656426326128938546125761166960351482948539114133280810916317873360419836067625116114001377672929333638768292095236809153349426894896869446197395671771932928211109385884940274160388152027885130001908095515987519207099973668415699818805100890690896126345099249836616348702742776559368591004254298734292430313132506862931339852599450961120591169865484036943294045257801193102728400887526383477970523720630900867795111210451854194391002244150921934506879640791680297603712618076174694948300699937409787596860516266369711284028834238022724596540529491965656156574337073988564171171562036245389632730259264953520190321920347601255396137920500496074443380910841069973360586715775083998842187392360751892748665579312212647821816086677544702037289983388842777905728540745718314922321086695691823249801139552886748181144717500999021690749662561227798159566905725946118195067702032931332172088385727012140744362147720922176656204772910422189621466379287662792372374145383317294646977085291873933547226857758530880168793511465268400187943977613894365634645591604177130794105552582447385631392788652188052953414781129655671439788151513996304231024358843023105354157338564270003904673736178109502550650713167258319522545824056524791781105181639237127875356417268878249642171688744070159985867211941494396566216365392991627962886902198712613982017603237174682825814797983967054038269833008728407345912699623004623467287738296110774212005294050799218227654983820235796069236099706911525806244933683548619651925300435846989868138976944006822652462513903624200398184640627878400159480147462063679751851193719499676402496701528971830054482832320057097082360875809145428036636600549270698504540758319126452884313155162288201445118708935758033035083555929081756050975974040793712887964439001525986626643925845343840647344753344394209812309532147589135665638895095150172324875219965305745649692175878476631167339609984047545458299489650202318886162798841051758853022389219423402386031324398337411422060786064174337895040820526914615325075313448800789763344707190242881920892579588963376086146960633381215378914452523108903834607764477580583821712879080194987840450703336371649758616364805184545636558639909806705757141231728890945705281578891764357530862478284617890886615612608017861029342475376559517893073874528735689724989147963227442563141916115837740823088920018306622898786665697436694114134566032298418513134640110497915781256013658157626876007303865007938799121914067544773285391447059337068967640221461662745594510968605338966108977317081902507941847885331172633986644666002196037962414608353479436996966565895587993028389782659415971152403029518493019029205611785920255633270560095438637318885230551138363908343081523545591224134467205438637992783829259919217744713264231649621461535887435410548366408012977973203459983761967831442350892580662433295719596302715165438994052920660204857279403439598616231631708579334309451829396365207336409446940374623441420435439989058506571776629533788131454314121504595268258657172190365178279637763408587826711292793610001999656837923788319438384372260168303662843086203813103771712423574817520332644704407707584630263836497460974781867543909787940278207946350316762434685271126547340568379697114143432270663747926423410939366867323227307888313764100323948708488249291932762190879422500980573314510481474989813161818046596342997489244092851481456635241462079248335760582513488928151459281907438730238065382341691833250917737617330046824951709287812847967496061820848573006896422220098029186444659696393722864425443174804115295661452095886127784785656396807536597522937517010395385281668735072368362229248386090765688300603292905737705424037244946746445640174635429078019229973366378415273692915764515173009646632256826278792193749314522687455317800604524740119271772480341422364037622841158408693597798800732407214231715176216414119458470398433698630492023148912788371335047944731850924533486580463894436416946298869397354691924065211837844914014837056117850937923852135361875895012428779496342389871713463333419295329258828037504468306416370691252321110783303933730724981220411655523128107813025668960480700236419568269112404054054013255954297124592253625509027169128346186086879842249233969016492009074059375814396213470661585889025858173286307393463166771278528359358679107663618852904436981159408575155381452852538538161326799566605463071606829507721627760695695298663348037499346965080571845983286426728562771057921340809114888275207834276278723670038713251819678117637307797126524335451875674322135660001938501046206646725087020563845482789165114015140237476770960542212541262365674096922377749965211055083880951870947588439313087505990968967904452943561444336754539161497904651842954423690339860136920316455021978105823558793189756025331264642326253916951167641064028719315782248353333706214902160610987866723541787809188383034860801960339654982067421224921066723519523759569071993168783868197116308035921525346492767986090665094574147296651701824963729081365854249511700896706324052098265362182297874817162325372836249682033460453106454759294279011517085352648052686287835826956331856000530656816094258663224239727567999798475939204052755892731997428948369450364798425229576414764799300949556003266863462364785971588403993047829919672884685002127952124093077144535644623315342420032186819555104280110883937594970132297831017511120535205810256141119655336117669459771376005411248881994640753601606805393583940281645304757423903447751752383876356426048210439751541893763188890403792485964646286690953432929961087972625329578244854544295899075470411907779181886987220577672224785177419791954783277253421243333498197370278143247403594312138218592254174197047846302000164735966226394070001204323764164912690541799927573761616438820835021411743898829210130296149250887986491553547221899402096605456148489590866922112294624680546281250567297009605663936998939340731539740128008013832941045470722922727419033890751091173021386847464099733717633316304536930447077599861319788266450790785072377536483225439587367122393671167950836029510856465462738804587713268436992128892171509071641161165880608224322539890931445909082786991260734902410993863449929626354001121991398640542747424891140797115509495342486678389565402504229791244504867508301342798992744796454984189142033193018659744179186808244403688375727771580862592404226696538971232713170205127941869698531179001250635892043048835137445218382957976989721755706861701366347894376710532041643279157597459032202591566808167568419301491754821992741943996185368155017334681412500723160011387595363158410560488203993638466615700276165502049790282263414502568166837301414930688269694553727263733690839349714652132206285243796184219815308355634318194592022805870387606542297381666905458451054204419608774066516116961329031388338821535694456637910702328420582124442440139995352494707284230907975581024232726130673375360163257154562557607055131368534412734263401317160921075802949888891100336188281116884460133424076740001934250575466042922149519629860344218277351996828116545149383178424384811799946144322536711027462093434842033767504492071349955677051700618860129870409856113128392373584622061075886499407885141951318807519645386474"};
    auto k{100000};
    EXPECT_EQ(d4.superDigit(s1,k), 7);
}

TEST_F(TestingDay4, minimumBribes_case0)
{
    std::vector<int> v1{1, 2, 3, 5, 4, 6, 7, 8 };
    EXPECT_EQ(d4.minimumBribes(v1), 1);
}

TEST_F(TestingDay4, minimumBribes_case0_1)
{
    std::vector<int> v1{2, 1, 5, 3, 4 };
    EXPECT_EQ(d4.minimumBribes(v1), 3);
}

TEST_F(TestingDay4, minimumBribes_case1)
{
    std::vector<int> v1{2, 5, 1, 3, 4 };
    EXPECT_EQ(d4.minimumBribes(v1), std::numeric_limits<int>::max());
}

TEST_F(TestingDay4, minimumBribes_case2_1)
{
    std::vector<int> v1{2 ,1, 5, 6, 3, 4, 9, 8, 11, 7, 10, 14, 13, 12, 17, 16,
                        15, 19, 18, 22, 20, 24 ,23, 21, 27, 28, 25, 26, 30, 29,
                        33, 32, 31, 35, 36, 34 ,39, 38, 37, 42, 40, 44, 41, 43,
                        47, 46, 48, 45, 50, 52 ,49, 51, 54, 56, 55, 53, 59, 58,
                        57, 61, 63, 60, 65, 64 ,67, 68, 62, 69, 66, 72, 70, 74,
                        73, 71, 77, 75, 79, 78 ,81, 82, 80, 76, 85, 84, 83, 86,
                        89, 90 , 88 , 87 , 92 , 91 , 95 , 94  ,93 , 98 , 97 , 100, 96,
                        102, 99, 104, 101, 105, 103, 108, 106, 109 ,107, 112, 111, 110,
                        113, 116, 114, 118, 119, 117, 115, 122, 121, 120, 124, 123,
                        127, 125, 126, 130, 129, 128, 131, 133, 135, 136, 132, 134,
                        139, 140, 138, 137, 143, 141, 144, 146, 145, 142, 148, 150,
                        147, 149, 153, 152, 155, 151, 157, 154, 158, 159, 156, 161,
                        160, 164, 165, 163, 167, 166, 162, 170, 171, 172, 168, 169,
                        175, 173, 174, 177, 176, 180, 181, 178, 179, 183, 182, 184,
                        187, 188, 185, 190, 189, 186, 191, 194, 192, 196, 197, 195,
                        199, 193, 198, 202, 200, 204, 205, 203, 207, 206, 201, 210,
                        209, 211, 208, 214, 215, 216, 212, 218, 217, 220, 213, 222,
                        219, 224, 221, 223, 227, 226, 225, 230, 231, 229, 228, 234,
                        235, 233, 237, 232, 239, 236, 241, 238, 240, 243, 242, 246,
                        245, 248, 249, 250, 247, 244, 253, 252, 251, 256, 255, 258,
                        254, 257, 259, 261, 262, 263, 265, 264, 260, 268, 266, 267,
                        271, 270, 273, 269, 274, 272, 275, 278, 276, 279, 277, 282,
                        283, 280, 281, 286, 284, 288, 287, 290, 289, 285, 293, 291,
                        292, 296, 294, 298, 297, 299, 295, 302, 301, 304, 303, 306,
                        300, 305, 309, 308, 307, 312, 311, 314, 315, 313, 310, 316,
                        319, 318, 321, 320, 317, 324, 325, 322, 323, 328, 327, 330,
                        326, 332, 331, 329, 335, 334, 333, 336, 338, 337, 341, 340,
                        339, 344, 343, 342, 347, 345, 349, 346, 351, 350, 348, 353,
                        355, 352, 357, 358, 354, 356, 359, 361, 360, 364, 362, 366,
                        365, 363, 368, 370, 367, 371, 372, 369, 374, 373, 376, 375,
                        378, 379, 377, 382, 381, 383, 380, 386, 387, 384, 385, 390,
                        388, 392, 391, 389, 393, 396, 397, 394, 398, 395, 401, 400,
                        403, 402, 399, 405, 407, 406, 409, 408, 411, 410, 404, 413,
                        412, 415, 417, 416, 414, 420, 419, 422, 421, 418, 424, 426,
                        423, 425, 428, 427, 431, 430, 429, 434, 435, 436, 437, 432,
                        433, 440, 438, 439, 443, 441, 445, 442, 447, 444, 448, 446,
                        449, 452, 451, 450, 455, 453, 454, 457, 456, 460, 459, 458,
                        463, 462, 464, 461, 467, 465, 466, 470, 469, 472, 468, 474,
                        471, 475, 473, 477, 476, 480, 479, 478, 483, 482, 485, 481,
                        487, 484, 489, 490, 491, 488, 492, 486, 494, 495, 496, 498,
                        493, 500, 499, 497, 502, 504, 501, 503, 507, 506, 505, 509,
                        511, 508, 513, 510, 512, 514, 516, 518, 519, 515, 521, 522,
                        520, 524, 517, 523, 525, 526, 529, 527, 531, 528, 533, 532, 534, 530, 537, 536, 539, 535 ,541 ,538 ,540 ,543, 544,
                        542, 547, 548, 545, 549, 546, 552, 550, 551, 554, 553, 557, 555, 556, 560, 559, 558, 563 ,562 ,564 ,561 ,567, 568,
                        566, 565, 569, 572, 571, 570, 575, 574, 577, 576, 579, 573, 580, 578, 583, 581, 584, 582 ,587 ,586 ,585 ,590, 589,
                        588, 593, 594, 592, 595, 591, 598, 599, 596, 597, 602, 603, 604, 605, 600, 601, 608, 609 ,607 ,611 ,612 ,606, 610,
                        615, 616, 614, 613, 619, 618, 617, 622, 620, 624, 621, 626, 625, 623, 628, 627, 631, 630 ,633 ,629 ,635 ,632, 637,
                        636, 634, 638, 640, 642, 639, 641, 645, 644, 647, 643, 646, 650, 648, 652, 653, 654, 649 ,651 ,656 ,658 ,657, 655,
                        661, 659, 660, 663, 664, 666, 662, 668, 667, 670, 665, 671, 673, 669, 672, 676, 677, 674 ,679 ,675 ,680 ,678, 681,
                        684, 682, 686, 685, 683, 689, 690, 688, 687, 693, 692, 691, 696, 695, 698, 694, 700, 701 ,702 ,697 ,704 ,699, 706,
                        703, 705, 709, 707, 711, 712, 710, 708, 713, 716, 715, 714, 718, 720, 721, 719, 723, 717 ,722 ,726 ,725 ,724, 729,
                        728, 727, 730, 733, 732, 735, 734, 736, 731, 738, 737, 741, 739, 740, 744, 743, 742, 747 ,746 ,745 ,750 ,748, 752,
                        749, 753, 751, 756, 754, 758, 755, 757, 761, 760, 759, 764, 763, 762, 767, 765, 768, 766 ,771 ,770 ,769 ,774, 773,
                        776, 772, 778, 777, 779, 775, 781, 780, 783, 784, 782, 786, 788, 789, 787, 790, 785, 793 ,791 ,792 ,796 ,795, 794,
                        798, 797, 801, 799, 803, 800, 805, 802, 804, 808, 806, 807, 811, 809, 810, 814, 812, 813 ,817 ,816 ,819 ,818, 815,
                        820, 821, 823, 822, 824, 826, 827, 825, 828, 831, 829, 830, 834, 833, 836, 832, 837, 839 ,838 ,841 ,835 ,840, 844,
                        842, 846, 845, 843, 849, 847, 851, 850, 852, 848, 855, 854, 853, 857, 856, 858, 861, 862 ,860 ,859 ,863 ,866, 865,
                        864, 867, 870, 869, 868, 872, 874, 875, 871, 873, 877, 878, 876, 880, 881, 879, 884, 883 ,885 ,882 ,888 ,886, 890,
                        891, 889, 893, 887, 895, 892, 896, 898, 894, 899, 897, 902, 901, 903, 905, 900, 904, 908 ,907 ,910 ,909 ,906, 912,
                        911, 915, 913, 916, 918, 914, 919, 921, 917, 923, 920, 924, 922, 927, 925, 929, 928, 926 ,932 ,931 ,934 ,930, 933,
                        935, 937, 939, 940, 938, 936, 943, 944, 942, 941, 947, 946, 948, 945, 951, 950, 949, 953 ,952 ,956 ,954 ,958, 957,
                        955, 961, 962, 963, 959, 964, 966, 960, 965, 969, 968, 971, 967, 970, 974, 972, 976, 973 ,975 ,979 ,977 ,981, 982,
                        978, 980, 983, 986, 984, 985, 989, 988, 987, 990, 993, 991, 995, 994, 997, 992, 999, 1000, 996, 998
                       };
                          EXPECT_EQ(d4.minimumBribes(v1), 966);
                      }
