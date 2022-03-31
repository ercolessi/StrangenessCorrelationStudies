// include the header of your analysis task here! for classes already compiled by aliBuild,
// precompiled header files (with extension pcm) are available, so that you do not need to
// specify includes for those. for your own task however, you (probably) have not generated a
// pcm file, so we need to include it explicitly
#include <iostream>
#include <chrono>
#include <ctime>
#include "AliAnalysisTaskPIDResponse.h"
#include "AliAnalysisTaskPhiCount.h"

//------------
//  RUN 1 pp LHC10bcde
//------------

// MC Correspondant: LHC14j4b
std::vector<int>    LHC10b          = { 117220, 117116, 117112, 117099, 117092, 117063, 117060, 117059, 117053, 117052,
                                        117050, 117048, 116645, 116643, 116574, 116571, 116562, 116403, 116402, 116288,
                                        116102, 116081, 116079, 115414, 115401, 115399, 115393, 115345, 115335, 115328,
                                        115322, 115318, 115310, 115193, 115186, 114931, 114930, 114924, 114918, 114798,
                                        114786, 117222 };

//  MC Correspondant: LHC14j4c
std::vector<int>    LHC10c          = { 121040, 121039, 120829, 120825, 120824, 120823, 120822, 120821, 120758, 120750,
                                        120741, 120671, 120617, 120616, 120505, 120503, 120244, 120079, 120076, 120073,
                                        120072, 120069, 120067, 119862, 119859, 119856, 119853, 119849, 119846, 119845,
                                        119844, 119842, 119841, 118561, 118560, 118558, 118556, 118518, 118506 };

//  MC Correspondant: LHC14j4d
std::vector<int>    LHC10d          = { 126158, 126097, 126090, 126088, 126082, 126081, 126078, 126073, 126008, 126007,
                                        126004, 125855, 125851, 125850, 125849, 125848, 125847, 125844, 125843, 125842,
                                        125633, 125632, 125630, 125628, 125296, 125134, 125101, 125100, 125097, 125085,
                                        125083, 125023, 122375, 122374 };

//  MC Correspondant: LHC14j4e
std::vector<int>    LHC10e          = { 130850, 130848, 130847, 130844, 130842, 130840, 130834, 130799, 130798, 130795,
                                        130793, 130704, 130696, 130628, 130623, 130621, 130620, 130609, 130608, 130524,
                                        130520, 130519, 130517, 130481, 130480, 130479, 130375, 130178, 130172, 130168,
                                        130158, 130157, 130149, 129983, 129966, 129962, 129961, 129960, 129744, 129742,
                                        129738, 129736, 129735, 129734, 129729, 129726, 129725, 129723, 129666, 129659,
                                        129653, 129652, 129651, 129650, 129647, 129641, 129639, 129599, 129587, 129586,
                                        129540, 129536, 129528, 129527, 129525, 129524, 129523, 129521, 129520, 129514,
                                        129513, 129512, 129042, 128913, 128855, 128853, 128850, 128843, 128836, 128835,
                                        128834, 128833, 128824, 128823, 128820, 128819, 128778, 128777, 128678, 128677,
                                        128621, 128615, 128611, 128609, 128605, 128582, 128506, 128505, 128504, 128503,
                                        128498, 128495, 128494, 128486 };
//  ! Unused
//  MC Correspondant: LHC14j4f
std::vector<int>    LHC10f          = { 134297, 133982, 133969, 133920, 133800, 133762, 133670, 133563, 133414, 133330,
                                        133329, 133327, 133010, 133007, 133006 };

//  MC Correspondant: -
std::vector<int>    LHC15n          = { 244628, 244627, 244626};/*, 244619, 244618, 244617, 244542, 244540, 244531, 244484,
                                        244483, 244482, 244481, 244480, 244456, 244453, 244421, 244416, 244377, 244364,
                                        244359, 244355, 244351, 244343, 244340 };*/

//  MC Correspondant: -
std::vector<int>    LHC16l          = { 259888, 259868, 259867 };/*, 259866, 259860, 259842, 259841, 259822, 259789, 259788,
                                        259781, 259756, 259752, 259751, 259750, 259748, 259747, 259477, 259473, 259396,
                                        259395, 259394, 259389, 259388, 259382, 259378, 259342, 259341, 259340, 259339,
                                        259336, 259334, 259307, 259305, 259303, 259302, 259274, 259273, 259272, 259271,
                                        259270, 259269, 259264, 259263, 259261, 259257, 259204, 259164, 259162, 259118,
                                        259117, 259099, 259096, 259091, 259090, 259088, 258964, 258962 };*/
//------------
//  RUN 1 pPb LHC13bcdef
//------------

// MC Correspondant: LHC----
std::vector<int>    LHC13b          = { 195483, 195482, 195481, 195480, 195479, 195478, 195391, 195389, 195351, 195346,
                                        195344 };
// MC Correspondant: LHC----
std::vector<int>    LHC13c          = { 195677, 195675, 195673, 195644, 195635, 195633, 195596, 195593, 195592, 195568,
                                        195567, 195566, 195531, 195529 };

//------------
//  RUN 2 p-Pb LHC16qt
//------------

// MC Correspondant: LHC----
std::vector<int>    LHC16q          = { 265309, 265332, 265334, 265335, 265336 };//, 265338, 265339, 265342, 265343, 265344,
                                        //265377, 265378, 265381, 265383, 265384, 265385, 265387, 265388, 265419, 265420,
                                        //265421, 265422, 265424, 265425, 265426, 265427, 265435, 265499, 265500, 265501,
                                        //265521, 265525 };
// MC Correspondant: LHC----
std::vector<int>    LHC16t          = { 267163, 267164, 267165, 267166 };

//------------
//  Hadronic Interaction Run 2
//------------
//
//                  LHC18a4a2_fast, LHC18a4a_fast
std::vector<int>    LHC18a4a_fast   = { 282008, 282016, 282021, 282025, 282031, 282050, 282051, 282078, 282098, 282099, 282118, 282119, 282120, 282122, 282123, 282125, 282126, 282127, 282146, 282147, 282189, 282206, 282224, 282227, 282229, 282230, 282247, 282302, 282303, 282304, 282305, 282306, 282307, 282309, 282312, 282313, 282314, 282340, 282341, 282342, 282343, 282365, 282366, 282367 };
//------------
//  Material Budget Run 2
//------------
//
//                  LHC21c12b,  LHC21c12c
std::vector<int>    LHC19h12        = { 265309, 265332, 265334, 265335, 265336, 265338, 265339, 265342, 265343, 265344, 265377, 265378, 265381, 265383, 265384, 265385, 265387, 265388, 265419, 265420, 265421, 265422, 265424, 265425, 265426, 265427, 265435, 265499, 265500, 265501, 265521, 265525, 267163, 267164, 267165, 267166 };
//------------
//  TEST
//------------
//
//
std::vector<int>    LHC17h5         = { 244918, 244975, 244980, 244982, 244983, 245061, 245064, 245066, 245068, 245145, 245146, 245148, 245151, 245152, 245231, 245232, 245259, 245343, 245345, 245346, 245347, 245349, 245353, 245396, 245397, 245401, 245407, 245409, 245410, 245411, 245439, 245441, 245446, 245450, 245452, 245454, 245496, 245497, 245501, 245504, 245505, 245507, 245535, 245540, 245542, 245543, 245544, 245545, 245554, 245683, 245692, 245700, 245702, 245705, 245729, 245731, 245738, 245752, 245759, 245766, 245775, 245785, 245793, 245829, 245831, 245833, 245923, 245949, 245952, 245954, 246001, 246003, 246012, 246036, 246037, 246042, 246048, 246049, 246052, 246053, 246087, 246089, 246113, 246115, 246151, 246152, 246153, 246178, 246180, 246181, 246182, 246185, 246217, 246222, 246225, 246271, 246272, 246275, 246276, 246390, 246391, 246392, 246424, 246428, 246431, 246434, 246487, 246488, 246493, 246495, 246553, 246575, 246583, 246648, 246675, 246676, 246750, 246751, 246757, 246758, 246759, 246760, 246763, 246765, 246766, 246804, 246805, 246807, 246808, 246809, 246810, 246844, 246845, 246846, 246847, 246851, 246865, 246867, 246870, 246871, 246928, 246945, 246948, 246980, 246982, 246984, 246989, 246991, 246994 };

/*


// Hadronic Interaction
std::vector<int>    LHC17c4d_hits   =   { 117222 };
std::vector<int>    LHC17c4c_hits   =   LHC17c4d_hits;


std::vector<int>    LHCTEST   =   { 195478, 195479, 195480, 195481, 195482, 195529, 195531, 195566, 195567, 195568, 195592, 195593, 195596, 196433, 196648, 196701, 196702, 196703, 196720, 196772, 196869, 196870, 196874, 196876, 196965, 196967, 196972, 196973, 196974, 197011, 197027, 197031, 197089, 197090, 197091, 197092, 197094, 197098, 197099, 197138, 197139, 197142, 197143, 197144, 197145, 197189, 197247, 197248, 197296, 197297, 197298, 197341, 197342, 197348, 197349, 197351
};

// Material Budget
std::vector<int>    LHC10h10        =   { 137366 };

//------------
//  RUN 2 p-Pb
//------------

//  MC Correspondant: LHC1--
//  RunList: Central Barrel Tracking
std::vector<int>    LHC16q = {  265309, 265332, 265334, 265335, 265336, 265338, 265339, 265342, 265343, 265344,
                                265377, 265378, 265381, 265383, 265384, 265385, 265387, 265388, 265419, 265420,
                                265421, 265422, 265424, 265425, 265426, 265427, 265435, 265499, 265500, 265501,
                                265521, 265525 };

//  MC Correspondant: LHC1--
//  RunList: Central Barrel Tracking
std::vector<int>    LHC16t = {  267163, 267164, 267165, 267166 };

//------------
//  RUN 2 Pb-Pb
//------------

//  MC Correspondant: LHC1--
std::vector<int>    LHC15o = { 244917, 244918, 244975, 244980, 244982, 244983, 245061, 245064, 245066, 245068, 246390, 246391, 246392 };

//  MC Correspondant: LHC1--
std::vector<int>    LHC18q = {  };

//------------
//  Miscellaneous
//------------

// MC Correspondant: --
std::vector<int>    LHC15n = { 244628, 244627, 244626, 244619, 244618, 244617, 244542, 244540, 244531, 244484, 244483, 244482, 244481, 244480, 244456, 244453, 244421, 244416, 244377, 244364, 244359, 244355, 244351, 244343, 244340 };

// MC Correspondant: LHC16d3
std::vector<int>    LHC15f = { 226500, 226495, 226483, 226476, 226472, 226468, 226466, 226452, 226445, 226444, 226225, 226220, 226170, 226062, 225768, 225766, 225763, 225762, 225757, 225753, 225719, 225717, 225716, 225710, 225709, 225708, 225707, 225705, 225587, 225586, 225579, 225578, 225576, 225322, 225315, 225314, 225313, 225310 };

// MC Correspondant: LHC20a5b4_cent, LHC20a5b5_cent
std::vector<int>    LHC17p = { 282343, 282342, 282341, 282340, 282314, 282313, 282312, 282309, 282307, 282306, 282305, 282304, 282303, 282302, 282247, 282230, 282229, 282227, 282224, 282206, 282189, 282147, 282146, 282127, 282126, 282125, 282123, 282122, 282120, 282119, 282118, 282099, 282098, 282078, 282051, 282050, 282031, 282030, 282025, 282021, 282016, 282008 };

*/




const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y_%m_%d", &tstruct);
    return buf;
}

void runAnalysis( string fOption = "", Int_t kPeriod = -1 )
{
    Bool_t MCFlag       =   false;
    Bool_t local        =   true;
    Bool_t gridTest     =   true;
    Bool_t KaonFlag     =   false;
    Bool_t PhiFlag      =   true;
    Bool_t kTerm        =   false;
    Bool_t kDown        =   true;
    if ( fOption.find("Full") != -1 )
    {
        local = false;
        gridTest = false;
    }
    if ( fOption.find("Test") != -1 )
    {
        local = false;
        gridTest = true;
    }
    if ( fOption.find("MC") != -1 )
    {
        MCFlag = true;
    }
    if ( fOption.find("Kaon") != -1 )
    {
        KaonFlag = true;
        PhiFlag = false;
    }
    if ( fOption.find("AllTree") != -1 )
    {
        KaonFlag = true;
        PhiFlag = true;
    }
    if ( fOption.find("Stat") != -1 )
    {
        KaonFlag = false;
        PhiFlag = false;
    }
    if ( fOption.find("Terminate") != -1 )
    {
        local = false;
        gridTest = false;
        kTerm = true;
    }
    if ( fOption.find("Download") != -1 )
    {
        local       = false;
        gridTest    = false;
        kTerm       = true;
        kDown       = false;
    }
    
    std::vector<int> RunList;
    auto RunYear = "";
    auto RunName = "";
    auto RunPass = "";
    auto RunAODn = "";
    auto RunDDir = "";
    
    switch ( kPeriod )
    {
            //--------------------
            //--------------------
            //      RUN1 2010 pp@7TeV
            //--------------------
            //--------------------
        case 1:
            if ( MCFlag )   {
                RunYear = "2014";
                RunName = "LHC14j4c";
                RunPass = "pass4";
                RunAODn = "AOD222";
            } else {
                RunYear = "2010";
                RunName = "LHC10c";
                RunPass = "pass4";
                RunAODn = "AOD221";
            }
            RunList = LHC10c;
            break;
                
        case 2:
            if ( MCFlag ) {
                RunYear = "2014";
                RunName = "LHC14j4d";
                RunPass = "pass4";
                RunAODn = "AOD222";
            } else {
                RunYear = "2010";
                RunName = "LHC10d";
                RunPass = "pass4";
                RunAODn = "AOD221";
            }
            RunList = LHC10d;
            break;
                
        case 3:
            if ( MCFlag ) {
                RunYear = "2014";
                RunName = "LHC14j4e";
                RunPass = "pass4";
                RunAODn = "AOD222";
            } else {
                RunYear = "2010";
                RunName = "LHC10e";
                RunPass = "pass4";
                RunAODn = "AOD221";
            }
            RunList = LHC10e;
            break;
                
        case 4:
            if ( MCFlag ) {
                RunYear = "2014";
                RunName = "LHC14j4f";
                RunPass = "pass4";
                RunAODn = "AOD222";
            } else {
                RunYear = "2010";
                RunName = "LHC10f";
                RunPass = "pass4";
                RunAODn = "AOD221";
            }
            RunList = LHC10f;
            break;
            //--------------------
            //--------------------
            //      RUN1 2013 pPb@5TeV
            //--------------------
            //--------------------
        case 100:
            if ( MCFlag ) {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            } else {
                RunYear = "2013";
                RunName = "LHC13b";
                RunPass = "pass5";
                RunAODn = "AOD";
            }
            RunList = LHC13b;
            break;
        case 101:
            if ( MCFlag ) {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            } else {
                RunYear = "2013";
                RunName = "LHC13c";
                RunPass = "pass5";
                RunAODn = "AOD";
            }
            RunList = LHC13c;
            break;
            //--------------------
            //--------------------
            //      RUN2 2015-17 pp@5TeV
            //--------------------
            //--------------------
        case 5:
            if ( MCFlag ) {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            } else {
                RunYear = "2015";
                RunName = "LHC15n";
                RunPass = "pass4";
                RunAODn = "AOD208";
            }
            RunList = LHC15n;
            break;
            
        case 6:
            if ( MCFlag ) {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            } else {
                RunYear = "2016";
                RunName = "LHC16l";
                RunPass = "pass2";
                RunAODn = "AOD234";
            }
            RunList = LHC16l;
            break;
            
        case 7:
            if ( MCFlag ) {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            } else {
                RunYear = "-";
                RunName = "-";
                RunPass = "-";
                RunAODn = "-";
            }
            RunList = LHC10f;
            break;
            //--------------------
            //--------------------
            //      RUN1 2016 pPb@5TeV
            //--------------------
            //--------------------
        case 102:
            if ( MCFlag ) {
                RunYear = "2020";
                RunName = "LHC20f11c_fast";
                RunPass = "-";
                RunAODn = "AOD";
            } else {
                RunYear = "2016";
                RunName = "LHC16q";
                RunPass = "pass2_FAST";
                RunAODn = "AOD244";
            }
            RunList = LHC16q;
            break;
        case 103:
            if ( MCFlag ) {
                RunYear = "2020";
                RunName = "LHC20f11c_cent_woSDD";
                RunPass = "";
                RunAODn = "AOD";
            } else {
                RunYear = "2016";
                RunName = "LHC16q";
                RunPass = "pass2_CENT_woSDD";
                RunAODn = "AOD244";
            }
            RunList = LHC16q;
            break;
        case 104:
            if ( MCFlag ) {
                RunYear = "2020";
                RunName = "LHC20f11c_fast";
                RunPass = "-";
                RunAODn = "AOD";
            } else {
                RunYear = "2016";
                RunName = "LHC16t";
                RunPass = "pass2_FAST";
                RunAODn = "AOD244";
            }
            RunList = LHC16t;
            break;
        case 105:
            if ( MCFlag ) {
                RunYear = "2020";
                RunName = "LHC20f11c_cent_woSDD";
                RunPass = "-";
                RunAODn = "AOD";
            } else {
                RunYear = "2016";
                RunName = "LHC16t";
                RunPass = "pass2_CENT_woSDD";
                RunAODn = "AOD244";
            }
            RunList = LHC16t;
            break;
            //--------------------
            //--------------------
            //      RUN2 Systematics
            //--------------------
            //--------------------
        //
        //  Hadronic Interaction
        case 300:
            MCFlag  =   true;
            RunYear =   "2018";
            RunName =   "LHC18a4a_fast";
            RunPass =   "";
            RunAODn =   "AOD235";
            RunList =   LHC18a4a_fast;
            break;
        case 301:
            MCFlag  =   true;
            RunYear =   "2018";
            RunName =   "LHC18a4a2_fast";
            RunPass =   "";
            RunAODn =   "AOD235";
            RunList =   LHC18a4a_fast;
            break;
        //
        //  Material Budget
            // !TODO: Not Working
        case 302:
            MCFlag  =   true;
            RunYear =   "2019";
            RunName =   "LHC19h12b_cent_woSDD";
            RunPass =   "";
            RunAODn =   "AOD228";
            RunList =   LHC19h12;
            break;
        case 303:
            MCFlag  =   true;
            RunYear =   "2019";
            RunName =   "LHC19h12b_fast";
            RunPass =   "";
            RunAODn =   "AOD228";
            RunList =   LHC19h12;
            break;
        case 304:
            MCFlag  =   true;
            RunYear =   "2019";
            RunName =   "LHC19h12c_cent_woSDD";
            RunPass =   "";
            RunAODn =   "AOD228";
            RunList =   LHC19h12;
            break;
        case 305:
            MCFlag  =   true;
            RunYear =   "2019";
            RunName =   "LHC19h12c_fast";
            RunPass =   "";
            RunAODn =   "AOD228";
            RunList =   LHC19h12;
            break;
            //--------------------
            //--------------------
            //      Test
            //--------------------
            //--------------------
        case 900:
            MCFlag  =   true;
            RunYear =   "2017";
            RunName =   "LHC17h5a";
            RunPass =   "";
            RunAODn =   "AOD";
            RunList =   LHC17h5;
        break;
        case 901:
            MCFlag  =   true;
            RunYear =   "2017";
            RunName =   "LHC17h5b";
            RunPass =   "";
            RunAODn =   "AOD";
            RunList =   LHC17h5;
        break;
        case 902:
            MCFlag  =   true;
            RunYear =   "2017";
            RunName =   "LHC17h5c";
            RunPass =   "";
            RunAODn =   "AOD";
            RunList =   LHC17h5;
        break;
    default:
        cout << "[info]: Default Period ENABLED" << endl;
        if ( MCFlag )
        {
            RunYear = "2014";
            RunName = "LHC14j4b";
            RunPass = "pass4";
            RunAODn = "AOD222";
        }
        else
        {
            RunYear = "2010";
            RunName = "LHC10b";
            RunPass = "pass4";
            RunAODn = "AOD221";
        }
        RunList = LHC10b;
        break;
    }
    
    if ( MCFlag )   RunDDir = "sim";
    else            RunDDir = "data";
    
    if ( MCFlag )   cout << "[info]: MC Run ENABLED" << endl;
    else            cout << "[info]: MC Run DISABLED" << endl;
    
    if ( local )    cout << "[info]: Local analysis ENABLED" << endl;
    else
    {
        if ( gridTest ) cout << "[info]: GridTest ENABLED" << endl;
        else            cout << "[info]: GridTest DISABLED" << endl;
        cout << "[info]: " << RunName << " Period chose" << endl;
        cout << "[info]: " << RunPass << " Pass chose" << endl;
        for ( int iRun = 0; iRun < RunList.size(); iRun++ )
        {
            cout << "[info]: Run: " << RunList[iRun] << " ADDED" << endl;
        }
    }
    
#if !defined (__CINT__) || defined (__CLING__)
    gInterpreter                ->ProcessLine(".include $ROOTSYS/include");
    gInterpreter                ->ProcessLine(".include $ALICE_ROOT/include");
    gInterpreter                ->ProcessLine(".include $ALICE_PHYSICS/include");
#else
    gROOT                       ->ProcessLine(".include $ROOTSYS/include");
    gROOT                       ->ProcessLine(".include $ALICE_ROOT/include");
    gROOT                       ->ProcessLine(".include $ALICE_PHYSICS/include");
#endif
     
    // create the analysis manager
    AliAnalysisManager *mgr     = new AliAnalysisManager("AnalysisTaskExample");
    AliAODInputHandler *aodH    = new AliAODInputHandler();
    mgr->SetInputEventHandler(aodH);


    // AnalysisTaskMyTask
    // PID Response
#if !defined (__CINT__) || defined (__CLING__)
    gInterpreter                ->LoadMacro("AliAnalysisTaskPhiCount.cxx++g");
    
    // PID Task
    TMacro PIDadd(gSystem->ExpandPathName("$ALICE_ROOT/ANALYSIS/macros/AddTaskPIDResponse.C"));
    AliAnalysisTaskPIDResponse *PIDk;
    if ( MCFlag )   PIDk = reinterpret_cast<AliAnalysisTaskPIDResponse*>(PIDadd.Exec("kTRUE,kTRUE,kTRUE,4,kFALSE,\"\",kTRUE,kTRUE"));
    else            PIDk = reinterpret_cast<AliAnalysisTaskPIDResponse*>(PIDadd.Exec("kFALSE,kTRUE,kTRUE,4,kFALSE,\"\",kTRUE,kTRUE"));
    // Multiplicty Task
    TMacro MLTadd(gSystem->ExpandPathName("$ALICE_PHYSICS/OADB/COMMON/MULTIPLICITY/macros/AddTaskMultSelection.C"));
    AliMultSelectionTask *MLTk;
    MLTk = reinterpret_cast<AliMultSelectionTask*>(MLTadd.Exec());
    // Custom analysis task
    AliAnalysisTaskPhiCount *task;
    task = reinterpret_cast<AliAnalysisTaskPhiCount*>(gInterpreter->ExecuteMacro(Form("AddAnalysisTaskPhiCount.C(%d,%d,%d,\"name\",-1)",MCFlag,PhiFlag,KaonFlag)));
#else
    gROOT                       ->LoadMacro("AliAnalysisTaskPhiCount.cxx++g");
    gROOT                       ->LoadMacro("$ALICE_ROOT/ANALYSIS/macros/AddTaskPIDResponse.C");
    gROOT                       ->LoadMacro("$ALICE_PHYSICS/OADB/COMMON/MULTIPLICITY/macros/AddTaskMultSelection.C");
    gROOT                       ->LoadMacro("AddAnalysisTaskPhiCount.C");
    AddTaskPIDResponse(MCFlag,kTRUE,kTRUE,4,kFALSE,"",kTRUE,kTRUE);
    AddTaskMultSelection();
    AliAnalysisTaskPhiCount *task = AddAnalysisTaskPhiCount(MCFlag,PhiFlag,KaonFlag,"name",-1);
#endif

    if(!mgr->InitAnalysis()) return;
    mgr->SetDebugLevel(2);
    mgr->PrintStatus();
    mgr->SetUseProgressBar(1, 25);

    if(local)
    {
        // if you want to run locally, we need to define some input
        TChain* chain = new TChain("aodTree");
        // add a few files to the chain (change this so that your local files are added)
        if ( MCFlag )   chain->Add("AliAOD_MC.root");
        else            chain->Add("AliAOD.root");
        // start the analysis locally, reading the events from the tchain
        mgr->StartAnalysis("local", chain);
    }
    else
    {
        AliMCEventHandler* mcH = new AliMCEventHandler();
            mgr->SetMCtruthEventHandler(mcH);
        
        
        // if we want to run on grid, we create and configure the plugin
        AliAnalysisAlien *alienHandler = new AliAnalysisAlien();
        // also specify the include (header) paths on grid
        alienHandler->AddIncludePath("-I. -I$ROOTSYS/include -I$ALICE_ROOT -I$ALICE_ROOT/include -I$ALICE_PHYSICS/include");
        // make sure your source files get copied to grid
        alienHandler->SetAdditionalLibs("AliAnalysisTaskPhiCount.cxx AliAnalysisTaskPhiCount.h");
        alienHandler->SetAnalysisSource("AliAnalysisTaskPhiCount.cxx");
        // select the aliphysics version. all other packages
        // are LOADED AUTOMATICALLY!
        alienHandler->SetAliPhysicsVersion("vAN-20220110_ROOT6-1");
        // set the Alien API version
        alienHandler->SetAPIVersion("V1.1x");
        // select the input data
        alienHandler->SetGridDataDir(Form("/alice/%s/%s/%s",RunDDir,RunYear,RunName));
        if ( MCFlag )       alienHandler->SetDataPattern(Form("*%s/*AOD.root",RunAODn));
        else                alienHandler->SetDataPattern(Form("*%s/%s/*AOD.root",RunPass,RunAODn));
        // MC has no prefix, data has prefix 000
        if ( !MCFlag ) alienHandler->SetRunPrefix("000");
        // runnumber
        for ( int iRun = 0; iRun < RunList.size(); iRun++ ) alienHandler->AddRunNumber(RunList[iRun]);
        
        // number of files per subjob
        alienHandler->SetSplitMaxInputFileNumber(40);
        alienHandler->SetExecutable("myTask.sh");
        // specify how many seconds your job may take
        alienHandler->SetTTL(100000);
        alienHandler->SetJDLName("myTask.jdl");

        alienHandler->SetOutputToRunNo(kTRUE);
        alienHandler->SetKeepLogs(kTRUE);
        // merging: run with kTRUE to merge on grid
        // after re-running the jobs in SetRunMode("terminate")
        // (see below) mode, set SetMergeViaJDL(kFALSE)
        // to collect final results
        alienHandler->SetMaxMergeStages(1);
        alienHandler->SetMergeViaJDL(kDown);

        // define the output folders
        alienHandler->SetGridWorkingDir(Form("%s_%s",RunName,"2022_01_01"));//currentDateTime().c_str()));
        alienHandler->SetGridOutputDir(Form("%s_%s",RunPass,"2022_01_01"));//currentDateTime().c_str()));
        
        // Submit policy
        //alienHandler->SetUseSubmitPolicy();

        // connect the alien plugin to the manager
        mgr->SetGridHandler(alienHandler);
        
        if(gridTest)
        {
            // speficy on how many files you want to run
            alienHandler->SetNtestFiles(2);
            // and launch the analysis
            alienHandler->SetRunMode("test");
            mgr->StartAnalysis("grid");
        }
        else
        {
            // else launch the full grid analysis
            alienHandler->SetRunMode("full");
            if ( kTerm ) alienHandler->SetRunMode("terminate");
            mgr->StartAnalysis("grid");
        }
    }
}
 
