//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_80150D1C(PPC::Runtime::GCContext* context)
{
/*80150D1C 0014DB1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80150D20 0014DB20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80150D24 0014DB24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150D28 0014DB28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80150D2C 0014DB2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80150D30 0014DB30*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80150D34 0014DB34*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80150D38 0014DB38*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80150D3C 0014DB3C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80150D40 0014DB40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e0, context->r3));
/*80150D44 0014DB44*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80150D48 0014DB48*/ PPC::Runtime::ASM::beq(.L_80150D50);
/*80150D4C 0014DB4C*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80150D50, 0x80150D50) //this is a jump label
/*80150D50 0014DB50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150D54 0014DB54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80150D58 0014DB58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80150D5C 0014DB5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80150D60 0014DB60*/ PPC::Runtime::ASM::blr();
}