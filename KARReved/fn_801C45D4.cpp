//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C45D4(PPC::Runtime::GCContext* context)
{
/*801C45D4 001C13D4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r3));
/*801C45D8 001C13D8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801C45DC 001C13DC*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 7, 24, 24);
/*801C45E0 001C13E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801C45E4 001C13E4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r3));
/*801C45E8 001C13E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r3));
/*801C45EC 001C13EC*/ PPC::Runtime::ASM::blr();
}