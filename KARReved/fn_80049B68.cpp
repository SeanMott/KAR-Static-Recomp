//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027EF64.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"



void fn_80049B68(PPC::Runtime::GCContext* context)
{
/*80049B68 00046968*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80049B6C 0004696C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049B70 00046970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049B74 00046974*/ PPC::Runtime::ASM::bl(fn_8027EF64);
/*80049B78 00046978*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80049B7C 0004697C*/ PPC::Runtime::ASM::beq(.L_80049B8C);
/*80049B80 00046980*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80049B84 00046984*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80049B88 00046988*/ PPC::Runtime::ASM::bl(fn_800064F0);
RUNTIME_PPC_JUMP_LABEL(.L_80049B8C, 0x80049B8C) //this is a jump label
/*80049B8C 0004698C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049B90 00046990*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80049B94 00046994*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80049B98 00046998*/ PPC::Runtime::ASM::blr();
}