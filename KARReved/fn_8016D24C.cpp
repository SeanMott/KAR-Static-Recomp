//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016D24C(PPC::Runtime::GCContext* context)
{
/*8016D24C 0016A04C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016D250 0016A050*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016D254 0016A054*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D258 0016A058*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D25C 0016A05C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8016D260 0016A060*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016D264 0016A064*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016D268 0016A068*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016D26C 0016A06C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb28, context->r3));
/*8016D270 0016A070*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016D274 0016A074*/ PPC::Runtime::ASM::beq(.L_8016D2A0);
/*8016D278 0016A078*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8016D27C 0016A07C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016D280 0016A080*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*8016D284 0016A084*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*8016D288 0016A088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8016D28C 0016A08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8016D290 0016A090*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016D294 0016A094*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8016D298 0016A098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8016D29C 0016A09C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016D2A0, 0x8016D2A0) //this is a jump label
/*8016D2A0 0016A0A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D2A4 0016A0A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D2A8 0016A0A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016D2AC 0016A0AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016D2B0 0016A0B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016D2B4 0016A0B4*/ PPC::Runtime::ASM::blr();
}