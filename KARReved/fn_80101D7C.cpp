//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CB28.hpp"



void fn_80101D7C(PPC::Runtime::GCContext* context)
{
/*80101D7C 000FEB7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80101D80 000FEB80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80101D84 000FEB84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80101D88 000FEB88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80101D8C 000FEB8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101D90 000FEB90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80101D94 000FEB94*/ PPC::Runtime::ASM::ble(.L_80101DB4);
/*80101D98 000FEB98*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80101D9C 000FEB9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101DA0 000FEBA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101DA4 000FEBA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101DA8 000FEBA8*/ PPC::Runtime::ASM::bgt(.L_80101DB4);
/*80101DAC 000FEBAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r4));
/*80101DB0 000FEBB0*/ PPC::Runtime::ASM::bl(fn_8018CB28);
RUNTIME_PPC_JUMP_LABEL(.L_80101DB4, 0x80101DB4) //this is a jump label
/*80101DB4 000FEBB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80101DB8 000FEBB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80101DBC 000FEBBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80101DC0 000FEBC0*/ PPC::Runtime::ASM::blr();
}