//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80069E68(PPC::Runtime::GCContext* context)
{
/*80069E68 00066C68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa, context->r3));
/*80069E6C 00066C6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80069E70 00066C70*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80069E74 00066C74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa, context->r3));
/*80069E78 00066C78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80069E7C 00066C7C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*80069E80 00066C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80069E84 00066C84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80069E88 00066C88*/ PPC::Runtime::ASM::blr();
}