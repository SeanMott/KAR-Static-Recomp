//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801A3010(PPC::Runtime::GCContext* context)
{
/*801A3010 0019FE10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r3));
/*801A3014 0019FE14*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A3018 0019FE18*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*801A301C 0019FE1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r3));
/*801A3020 0019FE20*/ PPC::Runtime::ASM::blr();
}