//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8004498C(PPC::Runtime::GCContext* context)
{
/*8004498C 0004178C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80044990 00041790*/ PPC::Runtime::ASM::mflr(context->r0);
/*80044994 00041794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80044998 00041798*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004499C 0004179C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800449A0 000417A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x331, context->r3));
/*800449A4 000417A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800449A8 000417A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800449AC 000417AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800449B0 000417B0*/ PPC::Runtime::ASM::blr();
}