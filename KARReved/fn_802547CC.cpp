//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254C50.hpp"
#include "fn_800D1AC4.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1838.hpp"
#include "fn_8024EEAC.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80250360.hpp"
#include "fn_802503C0.hpp"
#include "fn_80254CCC.hpp"
#include "fn_80254CE4.hpp"
#include "fn_80254CD8.hpp"



void fn_802547CC(PPC::Runtime::GCContext* context)
{
/*802547CC 002515CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*802547D0 002515D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802547D4 002515D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802547D8 002515D8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802547DC 002515DC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802547E0 002515E0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802547E4 002515E4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802547E8 002515E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802547EC 002515EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802547F0 002515F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802547F4 002515F4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802547F8 002515F8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*802547FC 002515FC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80254800 00251600*/ PPC::Runtime::ASM::bne(.L_802548A0);
/*80254804 00251604*/ PPC::Runtime::ASM::bl(fn_80254C50);
/*80254808 00251608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*8025480C 0025160C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80254810 00251610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*80254814 00251614*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E2D6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254818 00251618*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025481C 0025161C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80254820 00251620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*80254824 00251624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80254828, 0x80254828) //this is a jump label
/*80254828 00251628*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r29));
/*8025482C 0025162C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80254830 00251630*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80254834 00251634*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80254838 00251638*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025483C 0025163C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1ac);
/*80254840 00251640*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f30, context->f0);
/*80254844 00251644*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80254848 00251648*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025484C 0025164C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r29));
/*80254850 00251650*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f30, context->f1);
/*80254854 00251654*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80254858 00251658*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r29));
/*8025485C 0025165C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f30, context->f0);
/*80254860 00251660*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80254864 00251664*/ PPC::Runtime::ASM::bl(fn_800D1AC4);
/*80254868 00251668*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025486C 0025166C*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*80254870 00251670*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80254874 00251674*/ PPC::Runtime::ASM::beq(.L_8025489C);
/*80254878 00251678*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025487C 0025167C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80254880 00251680*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80254884 00251684*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xa);
/*80254888 00251688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8025488C 0025168C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80254890 00251690*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80254894 00251694*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80254898 00251698*/ PPC::Runtime::ASM::blt(.L_80254828);
RUNTIME_PPC_JUMP_LABEL(.L_8025489C, 0x8025489C) //this is a jump label
/*8025489C 0025169C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802548A0, 0x802548A0) //this is a jump label
/*802548A0 002516A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r29));
/*802548A4 002516A4*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*802548A8 002516A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802548AC 002516AC*/ PPC::Runtime::ASM::bne(.L_802549E0);
/*802548B0 002516B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r29));
/*802548B4 002516B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r29));
/*802548B8 002516B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802548BC 002516BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*802548C0 002516C0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2D64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802548C4 002516C4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*802548C8 002516C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*802548CC 002516CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r29));
/*802548D0 002516D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*802548D4 002516D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r29));
/*802548D8 002516D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r29));
/*802548DC 002516DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r29));
/*802548E0 002516E0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f2);
/*802548E4 002516E4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802548E8 002516E8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f2);
/*802548EC 002516EC*/ PPC::Runtime::ASM::beq(.L_80254900);
/*802548F0 002516F0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f31);
/*802548F4 002516F4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802548F8 002516F8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f31);
/*802548FC 002516FC*/ PPC::Runtime::ASM::b(.L_80254930);
RUNTIME_PPC_JUMP_LABEL(.L_80254900, 0x80254900) //this is a jump label
/*80254900 00251700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80254904 00251704*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80254908 00251708*/ PPC::Runtime::ASM::bne(.L_80254920);
/*8025490C 0025170C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2D70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254910 00251710*/ PPC::Runtime::ASM::fmuls(context->f3, context->f0, context->f3);
/*80254914 00251714*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*80254918 00251718*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f2);
/*8025491C 0025171C*/ PPC::Runtime::ASM::b(.L_80254930);
RUNTIME_PPC_JUMP_LABEL(.L_80254920, 0x80254920) //this is a jump label
/*80254920 00251720*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r29));
/*80254924 00251724*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f0);
/*80254928 00251728*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8025492C 0025172C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80254930, 0x80254930) //this is a jump label
/*80254930 00251730*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*80254934 00251734*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80254938 00251738*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*8025493C 0025173C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*80254940 00251740*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*80254944 00251744*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80254948 00251748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*8025494C 0025174C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*80254950 00251750*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f2);
/*80254954 00251754*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*80254958 00251758*/ PPC::Runtime::ASM::bl(fn_8024EEAC);
/*8025495C 0025175C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r29));
/*80254960 00251760*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*80254964 00251764*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80254968 00251768*/ PPC::Runtime::ASM::bne(.L_8025497C);
/*8025496C 0025176C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r29));
/*80254970 00251770*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10c);
/*80254974 00251774*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*80254978 00251778*/ PPC::Runtime::ASM::b(.L_80254990);
RUNTIME_PPC_JUMP_LABEL(.L_8025497C, 0x8025497C) //this is a jump label
/*8025497C 0025177C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254980 00251780*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2D68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254984 00251784*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r29));
/*80254988 00251788*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r29));
/*8025498C 0025178C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80254990, 0x80254990) //this is a jump label
/*80254990 00251790*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x10c);
/*80254994 00251794*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x100);
/*80254998 00251798*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8025499C 0025179C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*802549A0 002517A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802549A4 002517A4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10c);
/*802549A8 002517A8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x100);
/*802549AC 002517AC*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*802549B0 002517B0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802549B4 002517B4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x100);
/*802549B8 002517B8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x10c);
/*802549BC 002517BC*/ PPC::Runtime::ASM::bl(fn_80250360);
/*802549C0 002517C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802549C4 002517C4*/ PPC::Runtime::ASM::bl(fn_802503C0);
/*802549C8 002517C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802549CC 002517CC*/ PPC::Runtime::ASM::bl(fn_80254CCC);
/*802549D0 002517D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802549D4 002517D4*/ PPC::Runtime::ASM::bl(fn_80254CE4);
/*802549D8 002517D8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802549DC 002517DC*/ PPC::Runtime::ASM::b(.L_802549EC);
RUNTIME_PPC_JUMP_LABEL(.L_802549E0, 0x802549E0) //this is a jump label
/*802549E0 002517E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802549E4 002517E4*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*802549E8 002517E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802549EC, 0x802549EC) //this is a jump label
/*802549EC 002517EC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802549F0 002517F0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802549F4 002517F4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802549F8 002517F8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802549FC 002517FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80254A00 00251800*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80254A04 00251804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80254A08 00251808*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80254A0C 0025180C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80254A10 00251810*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80254A14 00251814*/ PPC::Runtime::ASM::blr();
}