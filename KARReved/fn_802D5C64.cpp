//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802FAA88.hpp"



void fn_802D5C64(PPC::Runtime::GCContext* context)
{
/*802D5C64 002D2A64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D5C68 002D2A68*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D5C6C 002D2A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5C70 002D2A70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5C74 002D2A74*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802D5C78 002D2A78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D5C7C 002D2A7C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D5C80 002D2A80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802D5C84 002D2A84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5C88 002D2A88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802D5C8C 002D2A8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5C90 002D2A90*/ PPC::Runtime::ASM::bctrl();
/*802D5C94 002D2A94*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xd);
/*802D5C98 002D2A98*/ PPC::Runtime::ASM::beq(.L_802D5CCC);
/*802D5C9C 002D2A9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*802D5CA0 002D2AA0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802D5CA4 002D2AA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5CA8 002D2AA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D5CAC 002D2AAC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5CB0 002D2AB0*/ PPC::Runtime::ASM::bctrl();
/*802D5CB4 002D2AB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*802D5CB8 002D2AB8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5CBC 002D2ABC*/ PPC::Runtime::ASM::beq(.L_802D5CCC);
/*802D5CC0 002D2AC0*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*802D5CC4 002D2AC4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x80);
/*802D5CC8 002D2AC8*/ PPC::Runtime::ASM::bl(fn_802FAA88);
RUNTIME_PPC_JUMP_LABEL(.L_802D5CCC, 0x802D5CCC) //this is a jump label
/*802D5CCC 002D2ACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5CD0 002D2AD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5CD4 002D2AD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D5CD8 002D2AD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D5CDC 002D2ADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D5CE0 002D2AE0*/ PPC::Runtime::ASM::blr();
}