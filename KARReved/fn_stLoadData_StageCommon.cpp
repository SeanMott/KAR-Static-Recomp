//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_stLoadData_StageCommon(PPC::Runtime::GCContext* context)
{
/*80261D68 0025EB68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80261D6C 0025EB6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80261D70 0025EB70*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B78AC @ Get_MemoryOffset_HighBit);
/*80261D74 0025EB74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80261D78 0025EB78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80261D7C 0025EB7C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804B78AC @ Get_MemoryOffset_LowBit);
/*80261D80 0025EB80*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1stDataP @ Get_MemoryOffset_SDA21);
/*80261D84 0025EB84*/ PPC::Runtime::ASM::li(context->r6, lbl_805D73E0 @ Get_MemoryOffset_SDA21);
/*80261D88 0025EB88*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80261D8C 0025EB8C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80261D90 0025EB90*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*80261D94 0025EB94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80261D98 0025EB98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80261D9C 0025EB9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80261DA0 0025EBA0*/ PPC::Runtime::ASM::blr();
}