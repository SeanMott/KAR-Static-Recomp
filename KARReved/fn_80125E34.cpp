//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80125E34(PPC::Runtime::GCContext* context)
{
/*80125E34 00122C34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80125E38 00122C38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125E3C 00122C3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125E40 00122C40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125E44 00122C44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125E48 00122C48*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125E4C 00122C4C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80125E50 00122C50*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80125E54 00122C54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb24, context->r3));
/*80125E58 00122C58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80125E5C 00122C5C*/ PPC::Runtime::ASM::beq(.L_80125E64);
/*80125E60 00122C60*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80125E64, 0x80125E64) //this is a jump label
/*80125E64 00122C64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125E68 00122C68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125E6C 00122C6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80125E70 00122C70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80125E74 00122C74*/ PPC::Runtime::ASM::blr();
}