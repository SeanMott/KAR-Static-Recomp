//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C7F14(PPC::Runtime::GCContext* context)
{
/*801C7F14 001C4D14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C7F18 001C4D18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801C7F1C 001C4D1C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 29);
/*801C7F20 001C4D20*/ PPC::Runtime::ASM::blr();
}