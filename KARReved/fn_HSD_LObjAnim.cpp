//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjInterpretAnim.hpp"
#include "fn_HSD_LObjGetPositionWObj.hpp"
#include "fn_HSD_WObjInterpretAnim.hpp"
#include "fn_HSD_LObjGetInterestWObj.hpp"
#include "fn_HSD_WObjInterpretAnim.hpp"



void fn_HSD_LObjAnim(PPC::Runtime::GCContext* context)
{
/*803FDDFC 003FABFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FDE00 003FAC00*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FDE04 003FAC04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FDE08 003FAC08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 803FDE0C 003FAC0C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803FDE10 003FAC10*/ PPC::Runtime::ASM::beq(.L_803FDE40);
/*803FDE14 003FAC14*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FDE18 003FAC18*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803FDE1C 003FAC1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*803FDE20 003FAC20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r5));
/*803FDE24 003FAC24*/ PPC::Runtime::ASM::bl(fn_HSD_AObjInterpretAnim);
/*803FDE28 003FAC28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FDE2C 003FAC2C*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetPositionWObj);
/*803FDE30 003FAC30*/ PPC::Runtime::ASM::bl(fn_HSD_WObjInterpretAnim);
/*803FDE34 003FAC34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FDE38 003FAC38*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetInterestWObj);
/*803FDE3C 003FAC3C*/ PPC::Runtime::ASM::bl(fn_HSD_WObjInterpretAnim);
RUNTIME_PPC_JUMP_LABEL(.L_803FDE40, 0x803FDE40) //this is a jump label
/*803FDE40 003FAC40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FDE44 003FAC44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FDE48 003FAC48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FDE4C 003FAC4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FDE50 003FAC50*/ PPC::Runtime::ASM::blr();
}