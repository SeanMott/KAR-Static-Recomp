//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80117B6C(PPC::Runtime::GCContext* context)
{
/*80117B6C 0011496C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80117B70 00114970*/ PPC::Runtime::ASM::mflr(context->r0);
/*80117B74 00114974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80117B78 00114978*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80117B7C 0011497C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80117B80 00114980*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80117B84 00114984*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80117B88 00114988*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80117B8C 0011498C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*80117B90 00114990*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80117B94 00114994*/ PPC::Runtime::ASM::beq(.L_80117B9C);
/*80117B98 00114998*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80117B9C, 0x80117B9C) //this is a jump label
/*80117B9C 0011499C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80117BA0 001149A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80117BA4 001149A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80117BA8 001149A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80117BAC 001149AC*/ PPC::Runtime::ASM::blr();
}