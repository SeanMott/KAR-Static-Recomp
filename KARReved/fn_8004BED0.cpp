//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E128.hpp"



void fn_8004BED0(PPC::Runtime::GCContext* context)
{
/*8004BED0 00048CD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004BED4 00048CD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004BED8 00048CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BEDC 00048CDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BEE0 00048CE0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BEE4, 0x8004BEE4) //this is a jump label
/*8004BEE4 00048CE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BEE8 00048CE8*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BEEC 00048CEC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BEF0 00048CF0*/ PPC::Runtime::ASM::bne(.L_8004BF0C);
/*8004BEF4 00048CF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BEF8 00048CF8*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004BEFC 00048CFC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BF00 00048D00*/ PPC::Runtime::ASM::beq(.L_8004BF0C);
/*8004BF04 00048D04*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004BF08 00048D08*/ PPC::Runtime::ASM::b(.L_8004BF1C);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF0C, 0x8004BF0C) //this is a jump label
/*8004BF0C 00048D0C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BF10 00048D10*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BF14 00048D14*/ PPC::Runtime::ASM::blt(.L_8004BEE4);
/*8004BF18 00048D18*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF1C, 0x8004BF1C) //this is a jump label
/*8004BF1C 00048D1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004BF20 00048D20*/ PPC::Runtime::ASM::beq(.L_8004BF6C);
/*8004BF24 00048D24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF28, 0x8004BF28) //this is a jump label
/*8004BF28 00048D28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BF2C 00048D2C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BF30 00048D30*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BF34 00048D34*/ PPC::Runtime::ASM::bne(.L_8004BF60);
/*8004BF38 00048D38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BF3C 00048D3C*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004BF40 00048D40*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BF44 00048D44*/ PPC::Runtime::ASM::bne(.L_8004BF60);
/*8004BF48 00048D48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BF4C 00048D4C*/ PPC::Runtime::ASM::bl(fn_8022E128);
/*8004BF50 00048D50*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BF54 00048D54*/ PPC::Runtime::ASM::beq(.L_8004BF60);
/*8004BF58 00048D58*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004BF5C 00048D5C*/ PPC::Runtime::ASM::b(.L_8004BF70);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF60, 0x8004BF60) //this is a jump label
/*8004BF60 00048D60*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BF64 00048D64*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BF68 00048D68*/ PPC::Runtime::ASM::blt(.L_8004BF28);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF6C, 0x8004BF6C) //this is a jump label
/*8004BF6C 00048D6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF70, 0x8004BF70) //this is a jump label
/*8004BF70 00048D70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BF74 00048D74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BF78 00048D78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004BF7C 00048D7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004BF80 00048D80*/ PPC::Runtime::ASM::blr();
}