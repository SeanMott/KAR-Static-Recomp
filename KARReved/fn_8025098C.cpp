//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8025098C(PPC::Runtime::GCContext* context)
{
/*8025098C 0024D78C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r3));
/*80250990 0024D790*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80250994 0024D794*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*80250998 0024D798*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r3));
/*8025099C 0024D79C*/ PPC::Runtime::ASM::blr();
}