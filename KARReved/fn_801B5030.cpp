//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB370.hpp"



void fn_801B5030(PPC::Runtime::GCContext* context)
{
/*801B5030 001B1E30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B5034 001B1E34*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B5038 001B1E38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B503C 001B1E3C*/ PPC::Runtime::ASM::bl(fn_801AB370);
/*801B5040 001B1E40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5044 001B1E44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B5048 001B1E48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B504C 001B1E4C*/ PPC::Runtime::ASM::blr();
}