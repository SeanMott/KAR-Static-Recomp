//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801917A4.hpp"



void fn_801A3E6C(PPC::Runtime::GCContext* context)
{
/*801A3E6C 001A0C6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A3E70 001A0C70*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A3E74 001A0C74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3E78 001A0C78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3E7C 001A0C7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A3E80 001A0C80*/ PPC::Runtime::ASM::bl(fn_801917A4);
/*801A3E84 001A0C84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A3E88 001A0C88*/ PPC::Runtime::ASM::beq(.L_801A3EA0);
/*801A3E8C 001A0C8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801A3E90 001A0C90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x13);
/*801A3E94 001A0C94*/ PPC::Runtime::ASM::bne(.L_801A3EA0);
/*801A3E98 001A0C98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801A3E9C 001A0C9C*/ PPC::Runtime::ASM::b(.L_801A3EB4);
RUNTIME_PPC_JUMP_LABEL(.L_801A3EA0, 0x801A3EA0) //this is a jump label
/*801A3EA0 001A0CA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801A3EA4 001A0CA4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AE3C0 @ Get_MemoryOffset_HighBit);
/*801A3EA8 001A0CA8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804AE3C0 @ Get_MemoryOffset_LowBit);
/*801A3EAC 001A0CAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801A3EB0 001A0CB0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801A3EB4, 0x801A3EB4) //this is a jump label
/*801A3EB4 001A0CB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3EB8 001A0CB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3EBC 001A0CBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A3EC0 001A0CC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A3EC4 001A0CC4*/ PPC::Runtime::ASM::blr();
}