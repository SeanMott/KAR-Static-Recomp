//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8007B640.hpp"
#include "fn_8007B954.hpp"
#include "fn_8007B990.hpp"



void fn_80020188(PPC::Runtime::GCContext* context)
{
/*80020188 0001CF88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8002018C 0001CF8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80020190 0001CF90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80020194 0001CF94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80020198 0001CF98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002019C 0001CF9C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800201A0 0001CFA0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xbb8);
/*800201A4 0001CFA4*/ PPC::Runtime::ASM::bl(fn_8007B640);
/*800201A8 0001CFA8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800201AC 0001CFAC*/ PPC::Runtime::ASM::bl(fn_8007B954);
/*800201B0 0001CFB0*/ PPC::Runtime::ASM::bl(fn_8007B990);
/*800201B4 0001CFB4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*800201B8 0001CFB8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*800201BC 0001CFBC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800201C0 0001CFC0*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800201C4 0001CFC4*/ PPC::Runtime::ASM::beq(.L_800201CC);
/*800201C8 0001CFC8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800201CC, 0x800201CC) //this is a jump label
/*800201CC 0001CFCC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800201D0 0001CFD0*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800201D4 0001CFD4*/ PPC::Runtime::ASM::beq(.L_800201DC);
/*800201D8 0001CFD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800201DC, 0x800201DC) //this is a jump label
/*800201DC 0001CFDC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*800201E0 0001CFE0*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800201E4 0001CFE4*/ PPC::Runtime::ASM::beq(.L_800201EC);
/*800201E8 0001CFE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800201EC, 0x800201EC) //this is a jump label
/*800201EC 0001CFEC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*800201F0 0001CFF0*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800201F4 0001CFF4*/ PPC::Runtime::ASM::beq(.L_800201FC);
/*800201F8 0001CFF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800201FC, 0x800201FC) //this is a jump label
/*800201FC 0001CFFC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*80020200 0001D000*/ PPC::Runtime::ASM::beq(.L_80020218);
/*80020204 0001D004*/ PPC::Runtime::ASM::bge(.L_8002020C);
/*80020208 0001D008*/ PPC::Runtime::ASM::b(.L_800203F4);
RUNTIME_PPC_JUMP_LABEL(.L_8002020C, 0x8002020C) //this is a jump label
/*8002020C 0001D00C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*80020210 0001D010*/ PPC::Runtime::ASM::bge(.L_800203F4);
/*80020214 0001D014*/ PPC::Runtime::ASM::b(.L_800202B4);
RUNTIME_PPC_JUMP_LABEL(.L_80020218, 0x80020218) //this is a jump label
/*80020218 0001D018*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002021C 0001D01C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80020220 0001D020*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80020224 0001D024*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*80020228 0001D028*/ PPC::Runtime::ASM::beq(.L_80020234);
/*8002022C 0001D02C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80020230 0001D030*/ PPC::Runtime::ASM::b(.L_80020244);
RUNTIME_PPC_JUMP_LABEL(.L_80020234, 0x80020234) //this is a jump label
/*80020234 0001D034*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80020238 0001D038*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*8002023C 0001D03C*/ PPC::Runtime::ASM::bne(.L_80020244);
/*80020240 0001D040*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80020244, 0x80020244) //this is a jump label
/*80020244 0001D044*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80020248 0001D048*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8002024C 0001D04C*/ PPC::Runtime::ASM::beq(.L_80020258);
/*80020250 0001D050*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80020254 0001D054*/ PPC::Runtime::ASM::b(.L_80020268);
RUNTIME_PPC_JUMP_LABEL(.L_80020258, 0x80020258) //this is a jump label
/*80020258 0001D058*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8002025C 0001D05C*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*80020260 0001D060*/ PPC::Runtime::ASM::bne(.L_80020268);
/*80020264 0001D064*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80020268, 0x80020268) //this is a jump label
/*80020268 0001D068*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8002026C 0001D06C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80020270 0001D070*/ PPC::Runtime::ASM::beq(.L_8002027C);
/*80020274 0001D074*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*80020278 0001D078*/ PPC::Runtime::ASM::b(.L_8002028C);
RUNTIME_PPC_JUMP_LABEL(.L_8002027C, 0x8002027C) //this is a jump label
/*8002027C 0001D07C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*80020280 0001D080*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*80020284 0001D084*/ PPC::Runtime::ASM::bne(.L_8002028C);
/*80020288 0001D088*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8002028C, 0x8002028C) //this is a jump label
/*8002028C 0001D08C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80020290 0001D090*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80020294 0001D094*/ PPC::Runtime::ASM::beq(.L_800202A0);
/*80020298 0001D098*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*8002029C 0001D09C*/ PPC::Runtime::ASM::b(.L_800203F4);
RUNTIME_PPC_JUMP_LABEL(.L_800202A0, 0x800202A0) //this is a jump label
/*800202A0 0001D0A0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*800202A4 0001D0A4*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800202A8 0001D0A8*/ PPC::Runtime::ASM::bne(.L_800203F4);
/*800202AC 0001D0AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*800202B0 0001D0B0*/ PPC::Runtime::ASM::b(.L_800203F4);
RUNTIME_PPC_JUMP_LABEL(.L_800202B4, 0x800202B4) //this is a jump label
/*800202B4 0001D0B4*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*800202B8 0001D0B8*/ PPC::Runtime::ASM::mr(context->r10, context->r31);
/*800202BC 0001D0BC*/ PPC::Runtime::ASM::mr(context->r9, context->r11);
/*800202C0 0001D0C0*/ PPC::Runtime::ASM::mr(context->r6, context->r11);
RUNTIME_PPC_JUMP_LABEL(.L_800202C4, 0x800202C4) //this is a jump label
/*800202C4 0001D0C4*/ PPC::Runtime::ASM::cmpw(context->r11, context->r0);
/*800202C8 0001D0C8*/ PPC::Runtime::ASM::beq(.L_80020338);
/*800202CC 0001D0CC*/ PPC::Runtime::ASM::addi(context->r4, context->r11, 0x1);
/*800202D0 0001D0D0*/ PPC::Runtime::ASM::add(context->r8, context->r31, context->r6);
/*800202D4 0001D0D4*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 1);
/*800202D8 0001D0D8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800202DC 0001D0DC*/ PPC::Runtime::ASM::cmpw(context->r9, context->r4);
/*800202E0 0001D0E0*/ PPC::Runtime::ASM::subf(context->r5, context->r9, context->r4);
/*800202E4 0001D0E4*/ PPC::Runtime::ASM::bge(.L_800203DC);
/* 800202E8 0001D0E8  54 A4 E8 FF */ srwi. context->r4 , context->r5 , 3
/*800202EC 0001D0EC*/ PPC::Runtime::ASM::mtctr(context->r4);
/*800202F0 0001D0F0*/ PPC::Runtime::ASM::beq(.L_80020324);
RUNTIME_PPC_JUMP_LABEL(.L_800202F4, 0x800202F4) //this is a jump label
/*800202F4 0001D0F4*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*800202F8 0001D0F8*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*800202FC 0001D0FC*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r8));
/*80020300 0001D100*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r8));
/*80020304 0001D104*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r8));
/*80020308 0001D108*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*8002030C 0001D10C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r8));
/*80020310 0001D110*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r8));
/*80020314 0001D114*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x18);
/*80020318 0001D118*/ PPC::Runtime::ASM::bdnz(.L_800202F4);
/*8002031C 0001D11C*/ PPC::Runtime::ASM::andi.(context->r5, context->r5, 0x7);
/*80020320 0001D120*/ PPC::Runtime::ASM::beq(.L_800203DC);
RUNTIME_PPC_JUMP_LABEL(.L_80020324, 0x80020324) //this is a jump label
/*80020324 0001D124*/ PPC::Runtime::ASM::mtctr(context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80020328, 0x80020328) //this is a jump label
/*80020328 0001D128*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8002032C 0001D12C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x3);
/*80020330 0001D130*/ PPC::Runtime::ASM::bdnz(.L_80020328);
/*80020334 0001D134*/ PPC::Runtime::ASM::b(.L_800203DC);
RUNTIME_PPC_JUMP_LABEL(.L_80020338, 0x80020338) //this is a jump label
/*80020338 0001D138*/ PPC::Runtime::ASM::addi(context->r4, context->r11, 0x1);
/*8002033C 0001D13C*/ PPC::Runtime::ASM::add(context->r7, context->r31, context->r6);
/*80020340 0001D140*/ PPC::Runtime::ASM::slwi(context->r8, context->r4, 1);
/*80020344 0001D144*/ PPC::Runtime::ASM::mr(context->r12, context->r9);
/*80020348 0001D148*/ PPC::Runtime::ASM::subf(context->r4, context->r9, context->r8);
/*8002034C 0001D14C*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
/*80020350 0001D150*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80020354 0001D154*/ PPC::Runtime::ASM::mtctr(context->r4);
/*80020358 0001D158*/ PPC::Runtime::ASM::cmpw(context->r9, context->r8);
/*8002035C 0001D15C*/ PPC::Runtime::ASM::bge(.L_8002037C);
RUNTIME_PPC_JUMP_LABEL(.L_80020360, 0x80020360) //this is a jump label
/*80020360 0001D160*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*80020364 0001D164*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*80020368 0001D168*/ PPC::Runtime::ASM::bne(.L_80020370);
/*8002036C 0001D16C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80020370, 0x80020370) //this is a jump label
/*80020370 0001D170*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x3);
/*80020374 0001D174*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*80020378 0001D178*/ PPC::Runtime::ASM::bdnz(.L_80020360);
RUNTIME_PPC_JUMP_LABEL(.L_8002037C, 0x8002037C) //this is a jump label
/*8002037C 0001D17C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*80020380 0001D180*/ PPC::Runtime::ASM::beq(.L_800203A0);
/*80020384 0001D184*/ PPC::Runtime::ASM::bge(.L_800203DC);
/*80020388 0001D188*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8002038C 0001D18C*/ PPC::Runtime::ASM::bge(.L_80020394);
/*80020390 0001D190*/ PPC::Runtime::ASM::b(.L_800203DC);
RUNTIME_PPC_JUMP_LABEL(.L_80020394, 0x80020394) //this is a jump label
/*80020394 0001D194*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80020398 0001D198*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r10));
/*8002039C 0001D19C*/ PPC::Runtime::ASM::b(.L_800203DC);
RUNTIME_PPC_JUMP_LABEL(.L_800203A0, 0x800203A0) //this is a jump label
/*800203A0 0001D1A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800203A4 0001D1A4*/ PPC::Runtime::ASM::bne(.L_800203DC);
/*800203A8 0001D1A8*/ PPC::Runtime::ASM::subf(context->r4, context->r9, context->r8);
/*800203AC 0001D1AC*/ PPC::Runtime::ASM::mr(context->r12, context->r9);
/*800203B0 0001D1B0*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800203B4 0001D1B4*/ PPC::Runtime::ASM::mtctr(context->r4);
/*800203B8 0001D1B8*/ PPC::Runtime::ASM::cmpw(context->r9, context->r8);
/*800203BC 0001D1BC*/ PPC::Runtime::ASM::bge(.L_800203DC);
RUNTIME_PPC_JUMP_LABEL(.L_800203C0, 0x800203C0) //this is a jump label
/*800203C0 0001D1C0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*800203C4 0001D1C4*/ PPC::Runtime::ASM::extsb.(context->r4, context->r4);
/*800203C8 0001D1C8*/ PPC::Runtime::ASM::bne(.L_800203D0);
/*800203CC 0001D1CC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_800203D0, 0x800203D0) //this is a jump label
/*800203D0 0001D1D0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x3);
/*800203D4 0001D1D4*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*800203D8 0001D1D8*/ PPC::Runtime::ASM::bdnz(.L_800203C0);
RUNTIME_PPC_JUMP_LABEL(.L_800203DC, 0x800203DC) //this is a jump label
/*800203DC 0001D1DC*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
/*800203E0 0001D1E0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x6);
/*800203E4 0001D1E4*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x2);
/*800203E8 0001D1E8*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x6);
/*800203EC 0001D1EC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x2);
/*800203F0 0001D1F0*/ PPC::Runtime::ASM::blt(.L_800202C4);
RUNTIME_PPC_JUMP_LABEL(.L_800203F4, 0x800203F4) //this is a jump label
/*800203F4 0001D1F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800203F8 0001D1F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800203FC 0001D1FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80020400 0001D200*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80020404 0001D204*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80020408 0001D208*/ PPC::Runtime::ASM::blr();
}