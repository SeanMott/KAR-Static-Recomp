//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C855C(PPC::Runtime::GCContext* context)
{
/*801C855C 001C535C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8560 001C5360*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r3));
/*801C8564 001C5364*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*801C8568 001C5368*/ PPC::Runtime::ASM::blr();
}