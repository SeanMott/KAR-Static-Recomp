//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DHCPRequest.hpp"



void fn_T1Handler(PPC::Runtime::GCContext* context)
{
/*804785F4 004753F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804785F8 004753F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804785FC 004753FC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80478600 00475400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80478604 00475404*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80478608 00475408*/ PPC::Runtime::ASM::subi(context->r31, context->r3, 0x378);
/*8047860C 0047540C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x288, context->r3));
/*80478610 00475410*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r3));
/*80478614 00475414*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x288, context->r3));
/*80478618 00475418*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047861C 0047541C  4E 80 00 21 */ blrl
/*80478620 00475420*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80478624 00475424*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80478628 00475428*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047862C 0047542C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80478630 00475430*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80478634 00475434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*80478638 00475438*/ PPC::Runtime::ASM::bl(fn_DHCPRequest);
/*8047863C 0047543C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80478640 00475440*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80478644 00475444*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80478648 00475448*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047864C 0047544C*/ PPC::Runtime::ASM::blr();
}