//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80241228.hpp"
#include "fn_80247E2C.hpp"
#include "fn_80247E84.hpp"
#include "fn_80247EB0.hpp"
#include "fn_80247EDC.hpp"
#include "fn_80247F08.hpp"
#include "fn_80247E58.hpp"



void fn_80245B4C(PPC::Runtime::GCContext* context)
{
/*80245B4C 0024294C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80245B50 00242950*/ PPC::Runtime::ASM::mflr(context->r0);
/*80245B54 00242954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80245B58 00242958*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80245B5C 0024295C*/ PPC::Runtime::ASM::bl(fn_80241228);
/*80245B60 00242960*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80245B64 00242964*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80245B68 00242968*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055DBF4 @ Get_MemoryOffset_HighBit);
/*80245B6C 0024296C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*80245B70 00242970*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_8055DBF4 @ Get_MemoryOffset_LowBit);
/*80245B74 00242974*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*80245B78 00242978*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*80245B7C 0024297C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*80245B80 00242980*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80245B84 00242984*/ PPC::Runtime::ASM::beq(.L_80245BA0);
/*80245B88 00242988*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B57D8 @ Get_MemoryOffset_HighBit);
/*80245B8C 0024298C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B57E4 @ Get_MemoryOffset_HighBit);
/*80245B90 00242990*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B57D8 @ Get_MemoryOffset_LowBit);
/*80245B94 00242994*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*80245B98 00242998*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B57E4 @ Get_MemoryOffset_LowBit);
/*80245B9C 0024299C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80245BA0, 0x80245BA0) //this is a jump label
/*80245BA0 002429A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*80245BA4 002429A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80245BA8 002429A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BAC 002429AC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80245BB0 002429B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r5));
/*80245BB4 002429B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r5));
/*80245BB8 002429B8*/ PPC::Runtime::ASM::bl(fn_80247E2C);
/*80245BBC 002429BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BC0 002429C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80245BC4 002429C4*/ PPC::Runtime::ASM::bl(fn_80247E84);
/*80245BC8 002429C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BCC 002429CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80245BD0 002429D0*/ PPC::Runtime::ASM::bl(fn_80247EB0);
/*80245BD4 002429D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BD8 002429D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80245BDC 002429DC*/ PPC::Runtime::ASM::bl(fn_80247EDC);
/*80245BE0 002429E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BE4 002429E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80245BE8 002429E8*/ PPC::Runtime::ASM::bl(fn_80247F08);
/*80245BEC 002429EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245BF0 002429F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80245BF4 002429F4*/ PPC::Runtime::ASM::bl(fn_80247E58);
/*80245BF8 002429F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80245BFC 002429FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80245C00 00242A00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80245C04 00242A04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80245C08 00242A08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80245C0C 00242A0C*/ PPC::Runtime::ASM::blr();
}