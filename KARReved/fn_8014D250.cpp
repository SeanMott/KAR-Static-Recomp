//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138AC8.hpp"



void fn_8014D250(PPC::Runtime::GCContext* context)
{
/*8014D250 0014A050*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014D254 0014A054*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014D258 0014A058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014D25C 0014A05C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014D260 0014A060*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014D264 0014A064*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014D268 0014A068*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014D26C 0014A06C*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*8014D270 0014A070*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r3));
/*8014D274 0014A074*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8014D278 0014A078*/ PPC::Runtime::ASM::beq(.L_8014D2C0);
/*8014D27C 0014A07C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8014D280 0014A080*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014D284 0014A084*/ PPC::Runtime::ASM::xoris(context->r4, context->r0, 0x8000);
/*8014D288 0014A088*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8014D28C 0014A08C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8014D290 0014A090*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D294 0014A094*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014D298 0014A098*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D29C 0014A09C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0600 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014D2A0 0014A0A0*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8014D2A4 0014A0A4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D2A8 0014A0A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8014D2AC 0014A0AC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8014D2B0 0014A0B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014D2B4 0014A0B4*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014D2B8 0014A0B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014D2BC 0014A0BC*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8014D2C0, 0x8014D2C0) //this is a jump label
/*8014D2C0 0014A0C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014D2C4 0014A0C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014D2C8 0014A0C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014D2CC 0014A0CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014D2D0 0014A0D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014D2D4 0014A0D4*/ PPC::Runtime::ASM::blr();
}