//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_800FA740.hpp"



void fn_800FA708(PPC::Runtime::GCContext* context)
{
/*800FA708 000F7508*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FA70C 000F750C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FA710 000F7510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA714 000F7514*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FA718 000F7518*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800FA71C 000F751C*/ PPC::Runtime::ASM::li(context->r3, 0x13);
/*800FA720 000F7520*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*800FA724 000F7524*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800FA728 000F7528*/ PPC::Runtime::ASM::bl(fn_800FA740);
/*800FA72C 000F752C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA730 000F7530*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FA734 000F7534*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FA738 000F7538*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FA73C 000F753C*/ PPC::Runtime::ASM::blr();
}