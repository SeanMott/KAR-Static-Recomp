//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D3C8C(PPC::Runtime::GCContext* context)
{
/*802D3C8C 002D0A8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D3C90 002D0A90*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D3C94 002D0A94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3C98 002D0A98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3C9C 002D0A9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D3CA0 002D0AA0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3CA4 002D0AA4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D3CA8 002D0AA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3CAC 002D0AAC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*802D3CB0 002D0AB0*/ PPC::Runtime::ASM::beq(.L_802D3CD4);
/*802D3CB4 002D0AB4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3CB8 002D0AB8*/ PPC::Runtime::ASM::beq(.L_802D3CD0);
/*802D3CBC 002D0ABC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3CC0 002D0AC0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3CC4 002D0AC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3CC8 002D0AC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3CCC 002D0ACC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3CD0, 0x802D3CD0) //this is a jump label
/*802D3CD0 002D0AD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802D3CD4, 0x802D3CD4) //this is a jump label
/*802D3CD4 002D0AD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3CD8 002D0AD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D3CDC 002D0ADC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3CE0 002D0AE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3CE4 002D0AE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D3CE8 002D0AE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D3CEC 002D0AEC*/ PPC::Runtime::ASM::blr();
}