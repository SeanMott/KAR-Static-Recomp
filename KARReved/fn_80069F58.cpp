//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80069F58(PPC::Runtime::GCContext* context)
{
/*80069F58 00066D58*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80069F5C 00066D5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*80069F60 00066D60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80069F64 00066D64*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*80069F68 00066D68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80069F6C 00066D6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80069F70 00066D70*/ PPC::Runtime::ASM::blr();
}