//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_801400AC(PPC::Runtime::GCContext* context)
{
/*801400AC 0013CEAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801400B0 0013CEB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801400B4 0013CEB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801400B8 0013CEB8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801400BC 0013CEBC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801400C0 0013CEC0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801400C4 0013CEC4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*801400C8 0013CEC8*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*801400CC 0013CECC*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*801400D0 0013CED0*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*801400D4 0013CED4*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*801400D8 0013CED8*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*801400DC 0013CEDC*/ PPC::Runtime::ASM::mr(context->r30, context->r8);
/*801400E0 0013CEE0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801400E4 0013CEE4*/ PPC::Runtime::ASM::addi(context->r0, context->r25, 0x4);
/*801400E8 0013CEE8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805E6324 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801400EC 0013CEEC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801400F0 0013CEF0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*801400F4 0013CEF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801400F8 0013CEF8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801400FC 0013CEFC*/ PPC::Runtime::ASM::add(context->r25, context->r31, context->r0);
/*80140100 0013CF00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
/*80140104 0013CF04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80140108 0013CF08*/ PPC::Runtime::ASM::beq(.L_80140118);
/*8014010C 0013CF0C*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80140110 0013CF10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80140114 0013CF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_80140118, 0x80140118) //this is a jump label
/*80140118 0013CF18*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8014011C 0013CF1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80140120 0013CF20*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*80140124 0013CF24*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80140128 0013CF28*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014012C 0013CF2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
/*80140130 0013CF30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80140134 0013CF34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140138 0013CF38*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8014013C 0013CF3C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140140 0013CF40*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80140144 0013CF44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80140148 0013CF48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8014014C 0013CF4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80140150 0013CF50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80140154 0013CF54*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*80140158 0013CF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8014015C 0013CF5C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80140160 0013CF60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80140164 0013CF64*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80140168 0013CF68*/ PPC::Runtime::ASM::beq(.L_80140180);
/*8014016C 0013CF6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80140170 0013CF70*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80140174 0013CF74*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80140178 0013CF78*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8014017C 0013CF7C*/ PPC::Runtime::ASM::bl(fn_800644AC);
RUNTIME_PPC_JUMP_LABEL(.L_80140180, 0x80140180) //this is a jump label
/*80140180 0013CF80*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80140184 0013CF84*/ PPC::Runtime::ASM::extsb.(context->r0, context->r30);
/*80140188 0013CF88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E03C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014018C 0013CF8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140190 0013CF90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140194 0013CF94*/ PPC::Runtime::ASM::fadds(context->f31, context->f3, context->f2);
/*80140198 0013CF98*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*8014019C 0013CF9C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801401A0 0013CFA0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801401A4 0013CFA4*/ PPC::Runtime::ASM::beq(.L_80140368);
/*801401A8 0013CFA8*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*801401AC 0013CFAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x63);
/*801401B0 0013CFB0*/ PPC::Runtime::ASM::ble(.L_801401C0);
/*801401B4 0013CFB4*/ PPC::Runtime::ASM::li(context->r27, 0x63);
/*801401B8 0013CFB8*/ PPC::Runtime::ASM::li(context->r28, 0x3b);
/*801401BC 0013CFBC*/ PPC::Runtime::ASM::li(context->r29, 0x63);
RUNTIME_PPC_JUMP_LABEL(.L_801401C0, 0x801401C0) //this is a jump label
/*801401C0 0013CFC0*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*801401C4 0013CFC4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801401C8 0013CFC8*/ PPC::Runtime::ASM::extsb(context->r25, context->r27);
/*801401CC 0013CFCC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801401D0 0013CFD0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*801401D4 0013CFD4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801401D8 0013CFD8  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*801401DC 0013CFDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801401E0 0013CFE0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*801401E4 0013CFE4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*801401E8 0013CFE8*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801401EC 0013CFEC*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 801401F0 0013CFF0  4C C6 32 42 */ crset context->cr1eq
/*801401F4 0013CFF4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801401F8 0013CFF8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*801401FC 0013CFFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140200 0013D000*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80140204 0013D004*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80140208 0013D008  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*8014020C 0013D00C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*80140210 0013D010*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140214 0013D014*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80140218 0013D018*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014021C 0013D01C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80140220 0013D020*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80140224 0013D024*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80140228 0013D028*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r25);
/* 8014022C 0013D02C  4C C6 32 42 */ crset context->cr1eq
/*80140230 0013D030*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140234 0013D034*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140238 0013D038*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014023C 0013D03C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140240 0013D040*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/*80140244 0013D044*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80140248 0013D048  4C C6 32 42 */ crset context->cr1eq
/*8014024C 0013D04C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140250 0013D050*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80140254 0013D054*/ PPC::Runtime::ASM::extsb(context->r25, context->r28);
/*80140258 0013D058*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8014025C 0013D05C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 80140260 0013D060  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*80140264 0013D064*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80140268 0013D068*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014026C 0013D06C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140270 0013D070*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*80140274 0013D074*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80140278 0013D078*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014027C 0013D07C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80140280 0013D080*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80140284 0013D084*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80140288 0013D088  4C C6 32 42 */ crset context->cr1eq
/*8014028C 0013D08C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140290 0013D090*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80140294 0013D094*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140298 0013D098*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8014029C 0013D09C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 801402A0 0013D0A0  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*801402A4 0013D0A4*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*801402A8 0013D0A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801402AC 0013D0AC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*801402B0 0013D0B0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*801402B4 0013D0B4*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801402B8 0013D0B8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*801402BC 0013D0BC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801402C0 0013D0C0*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r25);
/* 801402C4 0013D0C4  4C C6 32 42 */ crset context->cr1eq
/*801402C8 0013D0C8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801402CC 0013D0CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801402D0 0013D0D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801402D4 0013D0D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801402D8 0013D0D8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/*801402DC 0013D0DC*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 801402E0 0013D0E0  4C C6 32 42 */ crset context->cr1eq
/*801402E4 0013D0E4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801402E8 0013D0E8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*801402EC 0013D0EC*/ PPC::Runtime::ASM::extsb(context->r25, context->r29);
/*801402F0 0013D0F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*801402F4 0013D0F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 801402F8 0013D0F8  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*801402FC 0013D0FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80140300 0013D100*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140304 0013D104*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140308 0013D108*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*8014030C 0013D10C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80140310 0013D110*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*80140314 0013D114*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80140318 0013D118*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8014031C 0013D11C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80140320 0013D120  4C C6 32 42 */ crset context->cr1eq
/*80140324 0013D124*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140328 0013D128*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8014032C 0013D12C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140330 0013D130*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80140334 0013D134*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80140338 0013D138  7C 00 C8 96 */ mulhw context->r0 , context->r0 , context->r25
/*8014033C 0013D13C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*80140340 0013D140*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140344 0013D144*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80140348 0013D148*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014034C 0013D14C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80140350 0013D150*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80140354 0013D154*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80140358 0013D158*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r25);
/* 8014035C 0013D15C  4C C6 32 42 */ crset context->cr1eq
/*80140360 0013D160*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140364 0013D164*/ PPC::Runtime::ASM::b(.L_80140450);
RUNTIME_PPC_JUMP_LABEL(.L_80140368, 0x80140368) //this is a jump label
/*80140368 0013D168*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8014036C 0013D16C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140370 0013D170*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 80140374 0013D174  4C C6 32 42 */ crset context->cr1eq
/*80140378 0013D178*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8014037C 0013D17C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140380 0013D180*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140384 0013D184*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140388 0013D188*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*8014038C 0013D18C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80140390 0013D190  4C C6 32 42 */ crset context->cr1eq
/*80140394 0013D194*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140398 0013D198*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014039C 0013D19C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801403A0 0013D1A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801403A4 0013D1A4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/*801403A8 0013D1A8*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 801403AC 0013D1AC  4C C6 32 42 */ crset context->cr1eq
/*801403B0 0013D1B0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801403B4 0013D1B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801403B8 0013D1B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801403BC 0013D1BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801403C0 0013D1C0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*801403C4 0013D1C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801403C8 0013D1C8*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*801403CC 0013D1CC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801403D0 0013D1D0  4C C6 32 42 */ crset context->cr1eq
/*801403D4 0013D1D4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801403D8 0013D1D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801403DC 0013D1DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801403E0 0013D1E0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801403E4 0013D1E4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*801403E8 0013D1E8*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 801403EC 0013D1EC  4C C6 32 42 */ crset context->cr1eq
/*801403F0 0013D1F0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801403F4 0013D1F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801403F8 0013D1F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801403FC 0013D1FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140400 0013D200*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/*80140404 0013D204*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80140408 0013D208  4C C6 32 42 */ crset context->cr1eq
/*8014040C 0013D20C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140410 0013D210*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140414 0013D214*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140418 0013D218*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014041C 0013D21C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*80140420 0013D220*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140424 0013D224*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*80140428 0013D228*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 8014042C 0013D22C  4C C6 32 42 */ crset context->cr1eq
/*80140430 0013D230*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80140434 0013D234*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140438 0013D238*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014043C 0013D23C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80140440 0013D240*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*80140444 0013D244*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80140448 0013D248  4C C6 32 42 */ crset context->cr1eq
/*8014044C 0013D24C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80140450, 0x80140450) //this is a jump label
/*80140450 0013D250*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140454 0013D254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140458 0013D258*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014045C 0013D25C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80140460 0013D260*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80140464 0013D264*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140468 0013D268*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014046C 0013D26C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140470 0013D270*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80140474 0013D274*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80140478 0013D278*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014047C 0013D27C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140480 0013D280*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140484 0013D284*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80140488 0013D288*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8014048C 0013D28C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140490 0013D290*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80140494 0013D294*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80140498 0013D298*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8014049C 0013D29C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801404A0 0013D2A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404A4 0013D2A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801404A8 0013D2A8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404AC 0013D2AC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801404B0 0013D2B0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801404B4 0013D2B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404B8 0013D2B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801404BC 0013D2BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404C0 0013D2C0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801404C4 0013D2C4*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801404C8 0013D2C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404CC 0013D2CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801404D0 0013D2D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404D4 0013D2D4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*801404D8 0013D2D8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801404DC 0013D2DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404E0 0013D2E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801404E4 0013D2E4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801404E8 0013D2E8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*801404EC 0013D2EC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801404F0 0013D2F0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801404F4 0013D2F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801404F8 0013D2F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801404FC 0013D2FC*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80140500 0013D300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80140504 0013D304*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80140508 0013D308*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8014050C 0013D30C*/ PPC::Runtime::ASM::blr();
}