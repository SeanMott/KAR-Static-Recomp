//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DF684.hpp"



void fn_800DFAD8(PPC::Runtime::GCContext* context)
{
/*800DFAD8 000DC8D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DFADC 000DC8DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DFAE0 000DC8E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DFAE4 000DC8E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800DFAE8 000DC8E8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800DFAEC 000DC8EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800DFAF0 000DC8F0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_941 @ Get_MemoryOffset_HighBit);
/*800DFAF4 000DC8F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800DFAF8 000DC8F8*/ PPC::Runtime::ASM::addi(context->r29, context->r5, MemoryOffset_941 @ Get_MemoryOffset_LowBit);
/*800DFAFC 000DC8FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*800DFB00 000DC900*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800DFB04 000DC904*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800DFB08 000DC908*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*800DFB0C 000DC90C*/ PPC::Runtime::ASM::beq(.L_800DFBAC);
/*800DFB10 000DC910*/ PPC::Runtime::ASM::bl(fn_800DF684);
/*800DFB14 000DC914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*800DFB18 000DC918*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DFB1C 000DC91C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x64);
/*800DFB20 000DC920*/ PPC::Runtime::ASM::blt(.L_800DFB34);
/*800DFB24 000DC924*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x18);
/*800DFB28 000DC928*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1bc);
/*800DFB2C 000DC92C*/ PPC::Runtime::ASM::li(context->r4, 0x20b);
/*800DFB30 000DC930*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DFB34, 0x800DFB34) //this is a jump label
/*800DFB34 000DC934*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800DFB38 000DC938*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800DFB3C 000DC93C*/ PPC::Runtime::ASM::b(.L_800DFB6C);
RUNTIME_PPC_JUMP_LABEL(.L_800DFB40, 0x800DFB40) //this is a jump label
/*800DFB40 000DC940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800DFB44 000DC944*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r30);
/*800DFB48 000DC948*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800DFB4C 000DC94C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800DFB50 000DC950*/ PPC::Runtime::ASM::beq(.L_800DFB64);
/*800DFB54 000DC954*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x18);
/*800DFB58 000DC958*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1ec);
/*800DFB5C 000DC95C*/ PPC::Runtime::ASM::li(context->r4, 0x20f);
/*800DFB60 000DC960*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DFB64, 0x800DFB64) //this is a jump label
/*800DFB64 000DC964*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*800DFB68 000DC968*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DFB6C, 0x800DFB6C) //this is a jump label
/*800DFB6C 000DC96C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800DFB70 000DC970*/ PPC::Runtime::ASM::cmpw(context->r27, context->r3);
/*800DFB74 000DC974*/ PPC::Runtime::ASM::blt(.L_800DFB40);
/*800DFB78 000DC978*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800DFB7C 000DC97C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*800DFB80 000DC980*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800DFB84 000DC984*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800DFB88 000DC988*/ PPC::Runtime::ASM::b(.L_800DFBA0);
RUNTIME_PPC_JUMP_LABEL(.L_800DFB8C, 0x800DFB8C) //this is a jump label
/*800DFB8C 000DC98C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*800DFB90 000DC990*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*800DFB94 000DC994*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*800DFB98 000DC998*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*800DFB9C 000DC99C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DFBA0, 0x800DFBA0) //this is a jump label
/*800DFBA0 000DC9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800DFBA4 000DC9A4*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*800DFBA8 000DC9A8*/ PPC::Runtime::ASM::blt(.L_800DFB8C);
RUNTIME_PPC_JUMP_LABEL(.L_800DFBAC, 0x800DFBAC) //this is a jump label
/*800DFBAC 000DC9AC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800DFBB0 000DC9B0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800DFBB4 000DC9B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DFBB8 000DC9B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DFBBC 000DC9BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DFBC0 000DC9C0*/ PPC::Runtime::ASM::blr();
}