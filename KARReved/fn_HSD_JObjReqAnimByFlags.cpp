//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjReqAnim.hpp"
#include "fn_HSD_DObjReqAnimAllByFlags.hpp"
#include "fn_HSD_RObjReqAnimAllByFlags.hpp"



void fn_HSD_JObjReqAnimByFlags(PPC::Runtime::GCContext* context)
{
/*80408F00 00405D00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80408F04 00405D04*/ PPC::Runtime::ASM::mflr(context->r0);
/*80408F08 00405D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80408F0C 00405D0C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80408F10 00405D10*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80408F14 00405D14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408F18 00405D18*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80408F1C 00405D1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80408F20 00405D20  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80408F24 00405D24*/ PPC::Runtime::ASM::beq(.L_80408F6C);
/* 80408F28 00405D28  57 E0 07 FF */ clrlwi. context->r0 , context->r31 , 31
/*80408F2C 00405D2C*/ PPC::Runtime::ASM::beq(.L_80408F38);
/*80408F30 00405D30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80408F34 00405D34*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_80408F38, 0x80408F38) //this is a jump label
/*80408F38 00405D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80408F3C 00405D3C*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x4020);
/*80408F40 00405D40*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80408F44 00405D44  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80408F48 00405D48*/ PPC::Runtime::ASM::beq(.L_80408F5C);
/*80408F4C 00405D4C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80408F50 00405D50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80408F54 00405D54*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80408F58 00405D58*/ PPC::Runtime::ASM::bl(fn_HSD_DObjReqAnimAllByFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80408F5C, 0x80408F5C) //this is a jump label
/*80408F5C 00405D5C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80408F60 00405D60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*80408F64 00405D64*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80408F68 00405D68*/ PPC::Runtime::ASM::bl(fn_HSD_RObjReqAnimAllByFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80408F6C, 0x80408F6C) //this is a jump label
/*80408F6C 00405D6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80408F70 00405D70*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80408F74 00405D74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408F78 00405D78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80408F7C 00405D7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80408F80 00405D80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80408F84 00405D84*/ PPC::Runtime::ASM::blr();
}