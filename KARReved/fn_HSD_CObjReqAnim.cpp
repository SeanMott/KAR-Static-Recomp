//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjReqAnim.hpp"
#include "fn_HSD_WObjReqAnim.hpp"
#include "fn_HSD_WObjReqAnim.hpp"



void fn_HSD_CObjReqAnim(PPC::Runtime::GCContext* context)
{
/*80400A88 003FD888*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80400A8C 003FD88C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80400A90 003FD890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80400A94 003FD894*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80400A98 003FD898*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80400A9C 003FD89C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 80400AA0 003FD8A0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80400AA4 003FD8A4*/ PPC::Runtime::ASM::beq(.L_80400ACC);
/*80400AA8 003FD8A8*/ PPC::Runtime::ASM::beq(.L_80400ACC);
/*80400AAC 003FD8AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*80400AB0 003FD8B0*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*80400AB4 003FD8B4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80400AB8 003FD8B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80400ABC 003FD8BC*/ PPC::Runtime::ASM::bl(fn_HSD_WObjReqAnim);
/*80400AC0 003FD8C0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80400AC4 003FD8C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80400AC8 003FD8C8*/ PPC::Runtime::ASM::bl(fn_HSD_WObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_80400ACC, 0x80400ACC) //this is a jump label
/*80400ACC 003FD8CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80400AD0 003FD8D0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80400AD4 003FD8D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80400AD8 003FD8D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80400ADC 003FD8DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80400AE0 003FD8E0*/ PPC::Runtime::ASM::blr();
}