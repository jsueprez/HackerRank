#include "day_4.h"

#include <algorithm>
#include <numeric>
#include <iostream>

using std::vector;
using std::string;

bool day4::gridChallenge(vector<string> grid) {


    for(auto &ch : grid)
        std::sort(ch.begin(), ch.end());

    // 4th try  --> BM_GridChallenge_case2      16307 ns        16293 ns        42569   --> TEST WRONG
    //    auto size_grid{grid.size()};
    //    for(auto row{0}; row < size_grid - 1 ; row++){
    //        if(grid[row].compare(grid[row + 1]) > 0)
    //            return false;
    //    }
    //    return true;

    // 3rd try,  BM_GridChallenge_case2      16226 ns        16225 ns        41309
    //return std::is_sorted(grid.begin(), grid.end());

    //  2nd Try, Using for loop --> BM_GridChallenge_case2      16289 ns        16282 ns        42777   --> TEST wrong
    //        auto size_grid{grid.size()};
    //        for(auto row{0}; row < size_grid - 1 ; row++){
    //            if(grid[row] > grid[row + 1])
    //                return false;

    //        }


    // 1st Try(Brute force) , Using for loop --> BM_GridChallenge_case2      16289 ns        16287 ns        40088   --> TEST OK
    auto rows{grid.size()};
    auto columns{grid[0].size()};

    for(auto row{0}; row < rows - 1; row++){
        for(auto column{0}; column < columns ; column++){
            if(grid[row][column] > grid[row+1][column])
                return false;
        }
    }
    return true;

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

int day4::superDigit(std::string n, int k){

    std::for_each(n.begin(), n.end(), [](char &ch){ ch-= 48;});

    auto result {std::accumulate(n.begin(), n.end(), 0) * k};
    auto x{result};
    auto s{0};
    while(x >=10){
        s = s + x % 10;
        x/=10;
    }

    return s;
}
