//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C853C(PPC::Runtime::GCContext* context)
{
/*801C853C 001C533C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8540 001C5340*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/*801C8544 001C5344*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 31);
/*801C8548 001C5348*/ PPC::Runtime::ASM::blr();
}