//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjRemove.hpp"
#include "fn_HSD_DObjRemoveAnimAllByFlags.hpp"
#include "fn_HSD_RObjRemoveAnimAllByFlags.hpp"



void fn_HSD_JObjRemoveAnim(PPC::Runtime::GCContext* context)
{
/*80408E74 00405C74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80408E78 00405C78*/ PPC::Runtime::ASM::mflr(context->r0);
/*80408E7C 00405C7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408E80 00405C80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80408E84 00405C84  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80408E88 00405C88*/ PPC::Runtime::ASM::beq(.L_80408EC8);
/*80408E8C 00405C8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80408E90 00405C90*/ PPC::Runtime::ASM::bl(fn_HSD_AObjRemove);
/*80408E94 00405C94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80408E98 00405C98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80408E9C 00405C9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80408EA0 00405CA0*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x4020);
/*80408EA4 00405CA4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80408EA8 00405CA8  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80408EAC 00405CAC*/ PPC::Runtime::ASM::beq(.L_80408EBC);
/*80408EB0 00405CB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80408EB4 00405CB4*/ PPC::Runtime::ASM::li(context->r4, 0x7ff);
/*80408EB8 00405CB8*/ PPC::Runtime::ASM::bl(fn_HSD_DObjRemoveAnimAllByFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80408EBC, 0x80408EBC) //this is a jump label
/*80408EBC 00405CBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*80408EC0 00405CC0*/ PPC::Runtime::ASM::li(context->r4, 0x7ff);
/*80408EC4 00405CC4*/ PPC::Runtime::ASM::bl(fn_HSD_RObjRemoveAnimAllByFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80408EC8, 0x80408EC8) //this is a jump label
/*80408EC8 00405CC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408ECC 00405CCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80408ED0 00405CD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80408ED4 00405CD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80408ED8 00405CD8*/ PPC::Runtime::ASM::blr();
}