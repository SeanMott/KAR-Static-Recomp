//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80190DAC(PPC::Runtime::GCContext* context)
{
/*80190DAC 0018DBAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190DB0 0018DBB0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80190DB4 0018DBB4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80190DB8 0018DBB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190DBC 0018DBBC*/ PPC::Runtime::ASM::blr();
}