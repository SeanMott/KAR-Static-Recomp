//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8033C7C0(PPC::Runtime::GCContext* context)
{
/*8033C7C0 003395C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033C7C4 003395C4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8033C7C8 003395C8*/ PPC::Runtime::ASM::beqlr();
/*8033C7CC 003395CC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8033C7D0 003395D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033C7D4 003395D4*/ PPC::Runtime::ASM::blr();
}