//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8015FF40(PPC::Runtime::GCContext* context)
{
/*8015FF40 0015CD40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8015FF44 0015CD44*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015FF48 0015CD48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015FF4C 0015CD4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015FF50 0015CD50*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8015FF54 0015CD54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015FF58 0015CD58*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FF5C 0015CD5C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015FF60, 0x8015FF60) //this is a jump label
/*8015FF60 0015CD60*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015FF64 0015CD64*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015FF68 0015CD68*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015FF6C 0015CD6C*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8015FF70 0015CD70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r30));
/*8015FF74 0015CD74*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015FF78 0015CD78*/ PPC::Runtime::ASM::beq(.L_8015FF84);
/*8015FF7C 0015CD7C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8015FF80 0015CD80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8015FF84, 0x8015FF84) //this is a jump label
/*8015FF84 0015CD84*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8015FF88 0015CD88*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8015FF8C 0015CD8C*/ PPC::Runtime::ASM::blt(.L_8015FF60);
/*8015FF90 0015CD90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015FF94 0015CD94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015FF98 0015CD98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015FF9C 0015CD9C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FFA0 0015CDA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015FFA4 0015CDA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8015FFA8 0015CDA8*/ PPC::Runtime::ASM::blr();
}