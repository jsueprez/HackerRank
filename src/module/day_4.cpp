#include "day_4.h"

#include <algorithm>
#include <iostream>

using std::vector;
using std::string;

bool day4::gridChallenge(vector<string> grid) {


    for(auto &ch : grid)
        std::sort(ch.begin(), ch.end());

    // 3rd try,  BM_GridChallenge_case2      16226 ns        16225 ns        41309
    return std::is_sorted(grid.begin(), grid.end());

    //  2nd Try, Using for loop --> BM_GridChallenge_case2      16289 ns        16282 ns        42777
    //    auto size_grid{grid.size()};
    //    for(auto row{0}; row < size_grid - 1 ; row++){
    //        if(grid[row] > grid[row + 1])
    //            return false;

    //    }


    // 1st Try(Brute force) , Using for loop --> BM_GridChallenge_case2      16289 ns        16287 ns        40088
    //    auto size_grid{grid.size()};

    //    for(auto row{0}; row < size_grid - 1; row++){

    //        auto row_size{grid[row].length()};

    //        for(auto column{0}; column < row_size - 1 ; column++){

    //            if(grid[row][column] > grid[row+1][column])
    //                return false;
    //        }
    //    }
    //    return true;

}

bool day4::executeGridChallenge() {
    vector<string> v1{"lnpxeemwlqlzpxrmrmwbseqfnpkzaafdnukixaopcfvhqw",
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
                      "jahvrihhicrqvttmdzwbemjjqnstvtudvifdvrbjxalirj"
                     };
    return gridChallenge(v1);
}
