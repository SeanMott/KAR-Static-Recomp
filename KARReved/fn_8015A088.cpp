//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8015A088(PPC::Runtime::GCContext* context)
{
/*8015A088 00156E88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015A08C 00156E8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015A090 00156E90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015A094 00156E94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015A098 00156E98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015A09C 00156E9C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015A0A0 00156EA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e0, context->r3));
/*8015A0A4 00156EA4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015A0A8 00156EA8*/ PPC::Runtime::ASM::beq(.L_8015A0D0);
/*8015A0AC 00156EAC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8015A0B0 00156EB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8015A0B4, 0x8015A0B4) //this is a jump label
/*8015A0B4 00156EB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8015A0B8 00156EB8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8015A0BC 00156EBC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8015A0C0 00156EC0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8015A0C4 00156EC4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x38);
/*8015A0C8 00156EC8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8015A0CC 00156ECC*/ PPC::Runtime::ASM::blt(.L_8015A0B4);
RUNTIME_PPC_JUMP_LABEL(.L_8015A0D0, 0x8015A0D0) //this is a jump label
/*8015A0D0 00156ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015A0D4 00156ED4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015A0D8 00156ED8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015A0DC 00156EDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015A0E0 00156EE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015A0E4 00156EE4*/ PPC::Runtime::ASM::blr();
}