//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80088078.hpp"



void fn_80086120(PPC::Runtime::GCContext* context)
{
/*80086120 00082F20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80086124 00082F24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80086128 00082F28*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552FB0 @ Get_MemoryOffset_HighBit);
/*8008612C 00082F2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80086130 00082F30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552FB0 @ Get_MemoryOffset_LowBit);
/*80086134 00082F34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80086138 00082F38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8008613C 00082F3C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80086140 00082F40*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80086144 00082F44*/ PPC::Runtime::ASM::beq(.L_80086164);
/*80086148 00082F48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*8008614C 00082F4C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x40);
/*80086150 00082F50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*80086154 00082F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80086158 00082F58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8008615C 00082F5C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*80086160 00082F60*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80086164, 0x80086164) //this is a jump label
/*80086164 00082F64*/ PPC::Runtime::ASM::bl(fn_80088078);
/*80086168 00082F68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008616C 00082F6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80086170 00082F70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80086174 00082F74*/ PPC::Runtime::ASM::blr();
}