//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80203DBC.hpp"



void fn_80217D24(PPC::Runtime::GCContext* context)
{
/*80217D24 00214B24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80217D28 00214B28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80217D2C 00214B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217D30 00214B30*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80217D34 00214B34*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r3));
/*80217D38 00214B38*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80217D3C 00214B3C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80217D40 00214B40*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r3));
/*80217D44 00214B44*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r3));
/*80217D48 00214B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80217D4C 00214B4C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80217D50 00214B50*/ PPC::Runtime::ASM::ble(.L_80217D58);
/*80217D54 00214B54*/ PPC::Runtime::ASM::bl(fn_80203DBC);
RUNTIME_PPC_JUMP_LABEL(.L_80217D58, 0x80217D58) //this is a jump label
/*80217D58 00214B58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217D5C 00214B5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80217D60 00214B60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80217D64 00214B64*/ PPC::Runtime::ASM::blr();
}