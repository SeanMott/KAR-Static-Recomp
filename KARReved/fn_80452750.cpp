//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800596B4.hpp"



void fn_80452750(PPC::Runtime::GCContext* context)
{
/*80452750 0044F550*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80452754 0044F554*/ PPC::Runtime::ASM::mflr(context->r0);
/*80452758 0044F558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045275C 0044F55C*/ PPC::Runtime::ASM::bl(fn_800596B4);
/*80452760 0044F560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80452764 0044F564*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80452768 0044F568*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045276C 0044F56C*/ PPC::Runtime::ASM::blr();
}