//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022AC90(PPC::Runtime::GCContext* context)
{
/*8022AC90 00227A90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*8022AC94 00227A94*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8022AC98 00227A98*/ PPC::Runtime::ASM::beqlr();
/*8022AC9C 00227A9C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8022ACA0 00227AA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*8022ACA4 00227AA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*8022ACA8 00227AA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8022ACAC 00227AAC*/ PPC::Runtime::ASM::bnelr();
/*8022ACB0 00227AB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r3));
/*8022ACB4 00227AB4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8022ACB8 00227AB8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8022ACBC 00227ABC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r3));
/*8022ACC0 00227AC0*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 1, 26);
/*8022ACC4 00227AC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*8022ACC8 00227AC8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8022ACCC 00227ACC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*8022ACD0 00227AD0*/ PPC::Runtime::ASM::blr();
}