//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DB7D0.hpp"



void fn_800F5C98(PPC::Runtime::GCContext* context)
{
/*800F5C98 000F2A98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F5C9C 000F2A9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F5CA0 000F2AA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5CA4 000F2AA4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F5CA8 000F2AA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800F5CAC 000F2AAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F5CB0 000F2AB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F5CB4 000F2AB4*/ PPC::Runtime::ASM::beq(.L_800F5CD8);
/*800F5CB8 000F2AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800F5CBC 000F2ABC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800F5CC0 000F2AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r6));
/*800F5CC4 000F2AC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F5CC8 000F2AC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r6));
/*800F5CCC 000F2ACC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F5CD0 000F2AD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F5CD4 000F2AD4*/ PPC::Runtime::ASM::bl(fn_800DB7D0);
RUNTIME_PPC_JUMP_LABEL(.L_800F5CD8, 0x800F5CD8) //this is a jump label
/*800F5CD8 000F2AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5CDC 000F2ADC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F5CE0 000F2AE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F5CE4 000F2AE4*/ PPC::Runtime::ASM::blr();
}