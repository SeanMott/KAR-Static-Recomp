//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80073F94.hpp"



void fn_80072748(PPC::Runtime::GCContext* context)
{
/*80072748 0006F548*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007274C 0006F54C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80072750 0006F550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072754 0006F554*/ PPC::Runtime::ASM::bl(fn_80073F94);
/*80072758 0006F558*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8007275C 0006F55C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80072760 0006F560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072764 0006F564*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80072768 0006F568*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007276C 0006F56C*/ PPC::Runtime::ASM::blr();
}