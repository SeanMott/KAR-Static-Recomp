//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80223168(PPC::Runtime::GCContext* context)
{
/*80223168 0021FF68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8022316C 0021FF6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*80223170 0021FF70*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 29);
/*80223174 0021FF74*/ PPC::Runtime::ASM::blr();
}