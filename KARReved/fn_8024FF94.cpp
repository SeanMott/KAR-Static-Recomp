//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_38item?.hpp"
#include "fn_80072C90.hpp"



void fn_8024FF94(PPC::Runtime::GCContext* context)
{
/*8024FF94 0024CD94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024FF98 0024CD98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024FF9C 0024CD9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FFA0 0024CDA0*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_38item?);
/*8024FFA4 0024CDA4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024FFA8 0024CDA8*/ PPC::Runtime::ASM::beq(.L_8024FFDC);
/*8024FFAC 0024CDAC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8024FFB0 0024CDB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B61BC @ Get_MemoryOffset_HighBit);
/*8024FFB4 0024CDB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024FFB8 0024CDB8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804B61BC @ Get_MemoryOffset_LowBit);
/*8024FFBC 0024CDBC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8024FFC0 0024CDC0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024FFC4 0024CDC4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8024FFC8 0024CDC8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8024FFCC 0024CDCC*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8024FFD0 0024CDD0*/ PPC::Runtime::ASM::li(context->r9, 0x5);
/*8024FFD4 0024CDD4*/ PPC::Runtime::ASM::li(context->r10, 0x20);
/*8024FFD8 0024CDD8*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_8024FFDC, 0x8024FFDC) //this is a jump label
/*8024FFDC 0024CDDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FFE0 0024CDE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024FFE4 0024CDE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024FFE8 0024CDE8*/ PPC::Runtime::ASM::blr();
}