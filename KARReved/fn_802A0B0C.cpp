//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_glxSwapWaitDrawDone_TakeNoParam2.hpp"
#include "fn_803799B8.hpp"
#include "fn_80290D68.hpp"
#include "fn_8028BE6C.hpp"
#include "fn_8028BE6C.hpp"



void fn_802A0B0C(PPC::Runtime::GCContext* context)
{
/*802A0B0C 0029D90C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A0B10 0029D910*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A0B14 0029D914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A0B18 0029D918*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A0B1C 0029D91C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A0B20 0029D920*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A0B24 0029D924  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A0B28 0029D928*/ PPC::Runtime::ASM::beq(.L_802A0CAC);
/*802A0B2C 0029D92C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BFAD0 @ Get_MemoryOffset_HighBit);
/*802A0B30 0029D930*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x644);
/*802A0B34 0029D934*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BFAD0 @ Get_MemoryOffset_LowBit);
/*802A0B38 0029D938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A0B3C 0029D93C*/ PPC::Runtime::ASM::bl(fn_glxSwapWaitDrawDone_TakeNoParam2);
/*802A0B40 0029D940*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9dc);
/*802A0B44 0029D944*/ PPC::Runtime::ASM::bl(fn_803799B8);
/*802A0B48 0029D948*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb20, context->r30));
/*802A0B4C 0029D94C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A0B50 0029D950*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0B54 0029D954*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0B58 0029D958*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0B5C 0029D95C*/ PPC::Runtime::ASM::bctrl();
/*802A0B60 0029D960*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x78);
/*802A0B64 0029D964*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A0B68 0029D968*/ PPC::Runtime::ASM::bl(fn_80290D68);
/*802A0B6C 0029D96C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*802A0B70 0029D970*/ PPC::Runtime::ASM::beq(.L_802A0C88);
/*802A0B74 0029D974*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE4E0 @ Get_MemoryOffset_HighBit);
/*802A0B78 0029D978*/ PPC::Runtime::ASM::lis(context->r4, fn_8028BE6C @ Get_MemoryOffset_HighBit);
/*802A0B7C 0029D97C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE4E0 @ Get_MemoryOffset_LowBit);
/*802A0B80 0029D980*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*802A0B84 0029D984*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802A0B88 0029D988*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x24);
/*802A0B8C 0029D98C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028BE6C @ Get_MemoryOffset_LowBit);
/*802A0B90 0029D990*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802A0B94 0029D994*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802A0B98 0029D998*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x20);
/*802A0B9C 0029D99C*/ PPC::Runtime::ASM::beq(.L_802A0BC0);
/*802A0BA0 0029D9A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*802A0BA4 0029D9A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0BA8 0029D9A8*/ PPC::Runtime::ASM::beq(.L_802A0BC0);
/*802A0BAC 0029D9AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0BB0 0029D9B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0BB4 0029D9B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0BB8 0029D9B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0BBC 0029D9BC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0BC0, 0x802A0BC0) //this is a jump label
/*802A0BC0 0029D9C0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c);
/*802A0BC4 0029D9C4*/ PPC::Runtime::ASM::beq(.L_802A0BE8);
/*802A0BC8 0029D9C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*802A0BCC 0029D9CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0BD0 0029D9D0*/ PPC::Runtime::ASM::beq(.L_802A0BE8);
/*802A0BD4 0029D9D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0BD8 0029D9D8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0BDC 0029D9DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0BE0 0029D9E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0BE4 0029D9E4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0BE8, 0x802A0BE8) //this is a jump label
/*802A0BE8 0029D9E8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x18);
/*802A0BEC 0029D9EC*/ PPC::Runtime::ASM::beq(.L_802A0C10);
/*802A0BF0 0029D9F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*802A0BF4 0029D9F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0BF8 0029D9F8*/ PPC::Runtime::ASM::beq(.L_802A0C10);
/*802A0BFC 0029D9FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0C00 0029DA00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0C04 0029DA04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0C08 0029DA08*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0C0C 0029DA0C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0C10, 0x802A0C10) //this is a jump label
/*802A0C10 0029DA10*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*802A0C14 0029DA14*/ PPC::Runtime::ASM::beq(.L_802A0C38);
/*802A0C18 0029DA18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802A0C1C 0029DA1C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0C20 0029DA20*/ PPC::Runtime::ASM::beq(.L_802A0C38);
/*802A0C24 0029DA24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0C28 0029DA28*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0C2C 0029DA2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0C30 0029DA30*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0C34 0029DA34*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0C38, 0x802A0C38) //this is a jump label
/*802A0C38 0029DA38*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10);
/*802A0C3C 0029DA3C*/ PPC::Runtime::ASM::beq(.L_802A0C60);
/*802A0C40 0029DA40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802A0C44 0029DA44*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0C48 0029DA48*/ PPC::Runtime::ASM::beq(.L_802A0C60);
/*802A0C4C 0029DA4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0C50 0029DA50*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0C54 0029DA54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0C58 0029DA58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0C5C 0029DA5C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0C60, 0x802A0C60) //this is a jump label
/*802A0C60 0029DA60*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc);
/*802A0C64 0029DA64*/ PPC::Runtime::ASM::beq(.L_802A0C88);
/*802A0C68 0029DA68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802A0C6C 0029DA6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A0C70 0029DA70*/ PPC::Runtime::ASM::beq(.L_802A0C88);
/*802A0C74 0029DA74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0C78 0029DA78*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A0C7C 0029DA7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A0C80 0029DA80*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A0C84 0029DA84*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A0C88, 0x802A0C88) //this is a jump label
/*802A0C88 0029DA88*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A0C8C 0029DA8C*/ PPC::Runtime::ASM::beq(.L_802A0C9C);
/*802A0C90 0029DA90*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BFB00 @ Get_MemoryOffset_HighBit);
/*802A0C94 0029DA94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BFB00 @ Get_MemoryOffset_LowBit);
/*802A0C98 0029DA98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A0C9C, 0x802A0C9C) //this is a jump label
/*802A0C9C 0029DA9C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A0CA0 0029DAA0*/ PPC::Runtime::ASM::ble(.L_802A0CAC);
/*802A0CA4 0029DAA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A0CA8 0029DAA8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A0CAC, 0x802A0CAC) //this is a jump label
/*802A0CAC 0029DAAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A0CB0 0029DAB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A0CB4 0029DAB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A0CB8 0029DAB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A0CBC 0029DABC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A0CC0 0029DAC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A0CC4 0029DAC4*/ PPC::Runtime::ASM::blr();
}