//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801A1640(PPC::Runtime::GCContext* context)
{
/*801A1640 0019E440*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r3));
/*801A1644 0019E444*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*801A1648 0019E448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r3));
/*801A164C 0019E44C*/ PPC::Runtime::ASM::blr();
}