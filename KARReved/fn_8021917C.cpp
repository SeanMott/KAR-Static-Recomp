//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_8021A2D4.hpp"



void fn_8021917C(PPC::Runtime::GCContext* context)
{
/*8021917C 00215F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80219180 00215F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80219184 00215F84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80219188 00215F88*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8021918C 00215F8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219190 00215F90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80219194 00215F94*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80219198 00215F98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E268C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021919C 00215F9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802191A0 00215FA0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802191A4 00215FA4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802191A8 00215FA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802191AC 00215FAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802191B0 00215FB0*/ PPC::Runtime::ASM::beq(.L_802191BC);
/*802191B4 00215FB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802191B8 00215FB8*/ PPC::Runtime::ASM::bl(fn_8021A2D4);
RUNTIME_PPC_JUMP_LABEL(.L_802191BC, 0x802191BC) //this is a jump label
/*802191BC 00215FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802191C0 00215FC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802191C4 00215FC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802191C8 00215FC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802191CC 00215FCC*/ PPC::Runtime::ASM::blr();
}