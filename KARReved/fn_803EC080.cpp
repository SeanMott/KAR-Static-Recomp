//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803EC1D8.hpp"
#include "fn_803EC1F4.hpp"
#include "fn_803EC1A8.hpp"
#include "fn_803EC1D8.hpp"



void fn_803EC080(PPC::Runtime::GCContext* context)
{
/*803EC080 003E8E80*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EC084 003E8E84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EC088 003E8E88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803EC08C 003E8E8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803EC090 003E8E90*/ PPC::Runtime::ASM::bl(fn_803EC1D8);
/*803EC094 003E8E94*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803EC098 003E8E98*/ PPC::Runtime::ASM::b(.L_803EC0D8);
RUNTIME_PPC_JUMP_LABEL(.L_803EC09C, 0x803EC09C) //this is a jump label
/*803EC09C 003E8E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803EC0A0 003E8EA0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803EC0A4 003E8EA4*/ PPC::Runtime::ASM::beq(.L_803EC0D0);
/*803EC0A8 003E8EA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803EC0AC 003E8EAC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803EC0B0 003E8EB0*/ PPC::Runtime::ASM::beq(.L_803EC0C0);
/*803EC0B4 003E8EB4*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803EC0B8 003E8EB8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/* 803EC0BC 003E8EBC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803EC0C0, 0x803EC0C0) //this is a jump label
/*803EC0C0 003E8EC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803EC0C4 003E8EC4*/ PPC::Runtime::ASM::bl(fn_803EC1F4);
/*803EC0C8 003E8EC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803EC0CC 003E8ECC*/ PPC::Runtime::ASM::bl(fn_803EC1A8);
RUNTIME_PPC_JUMP_LABEL(.L_803EC0D0, 0x803EC0D0) //this is a jump label
/*803EC0D0 003E8ED0*/ PPC::Runtime::ASM::bl(fn_803EC1D8);
/*803EC0D4 003E8ED4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803EC0D8, 0x803EC0D8) //this is a jump label
/*803EC0D8 003E8ED8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803EC0DC 003E8EDC*/ PPC::Runtime::ASM::bne(.L_803EC09C);
/*803EC0E0 003E8EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EC0E4 003E8EE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803EC0E8 003E8EE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803EC0EC 003E8EEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EC0F0 003E8EF0*/ PPC::Runtime::ASM::blr();
}