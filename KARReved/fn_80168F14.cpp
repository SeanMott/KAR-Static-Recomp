//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80168F14(PPC::Runtime::GCContext* context)
{
/*80168F14 00165D14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80168F18 00165D18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80168F1C 00165D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80168F20 00165D20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80168F24 00165D24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80168F28 00165D28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80168F2C 00165D2C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168F30 00165D30*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80168F34, 0x80168F34) //this is a jump label
/*80168F34 00165D34*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80168F38 00165D38*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80168F3C 00165D3C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80168F40 00165D40*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80168F44 00165D44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xadc, context->r30));
/*80168F48 00165D48*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80168F4C 00165D4C*/ PPC::Runtime::ASM::beq(.L_80168F58);
/*80168F50 00165D50*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80168F54 00165D54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xadc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80168F58, 0x80168F58) //this is a jump label
/*80168F58 00165D58*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80168F5C 00165D5C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*80168F60 00165D60*/ PPC::Runtime::ASM::blt(.L_80168F34);
/*80168F64 00165D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80168F68 00165D68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80168F6C 00165D6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80168F70 00165D70*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168F74 00165D74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80168F78 00165D78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80168F7C 00165D7C*/ PPC::Runtime::ASM::blr();
}