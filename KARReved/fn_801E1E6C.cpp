//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E1E6C(PPC::Runtime::GCContext* context)
{
/*801E1E6C 001DEC6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r3));
/*801E1E70 001DEC70*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801E1E74 001DEC74*/ PPC::Runtime::ASM::beqlr();
/*801E1E78 001DEC78*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801E1E7C 001DEC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r3));
/*801E1E80 001DEC80*/ PPC::Runtime::ASM::blr();
}