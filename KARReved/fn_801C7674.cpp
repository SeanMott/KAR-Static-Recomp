//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CC238.hpp"



void fn_801C7674(PPC::Runtime::GCContext* context)
{
/*801C7674 001C4474*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C7678 001C4478*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C767C 001C447C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7680 001C4480*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C7684 001C4484*/ PPC::Runtime::ASM::bl(fn_801CC238);
/*801C7688 001C4488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C768C 001C448C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C7690 001C4490*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C7694 001C4494*/ PPC::Runtime::ASM::blr();
}