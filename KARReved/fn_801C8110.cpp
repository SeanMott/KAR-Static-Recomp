//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C8110(PPC::Runtime::GCContext* context)
{
/*801C8110 001C4F10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8114 001C4F14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/*801C8118 001C4F18*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 27);
/*801C811C 001C4F1C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*801C8120 001C4F20*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*801C8124 001C4F24*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*801C8128 001C4F28*/ PPC::Runtime::ASM::blr();
}