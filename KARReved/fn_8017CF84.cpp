//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8017CF84(PPC::Runtime::GCContext* context)
{
/*8017CF84 00179D84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017CF88 00179D88*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017CF8C 00179D8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CF90 00179D90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8017CF94 00179D94*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8017CF98 00179D98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CF9C 00179D9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017CFA0 00179DA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017CFA4 00179DA4*/ PPC::Runtime::ASM::blr();
}