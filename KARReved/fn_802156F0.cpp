//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020354C.hpp"



void fn_802156F0(PPC::Runtime::GCContext* context)
{
/*802156F0 002124F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802156F4 002124F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802156F8 002124F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802156FC 002124FC*/ PPC::Runtime::ASM::bl(fn_8020354C);
/*80215700 00212500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215704 00212504*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215708 00212508*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021570C 0021250C*/ PPC::Runtime::ASM::blr();
}