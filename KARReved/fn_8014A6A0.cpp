//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_8014A6A0(PPC::Runtime::GCContext* context)
{
/*8014A6A0 001474A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014A6A4 001474A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A6A8 001474A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A6AC 001474AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A6B0 001474B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A6B4 001474B4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A6B8 001474B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x380, context->r3));
/*8014A6BC 001474BC*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8014A6C0 001474C0*/ PPC::Runtime::ASM::beq(.L_8014A6DC);
/*8014A6C4 001474C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*8014A6C8 001474C8*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*8014A6CC 001474CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A6D0 001474D0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8014A6D4 001474D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8014A6D8 001474D8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_8014A6DC, 0x8014A6DC) //this is a jump label
/*8014A6DC 001474DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A6E0 001474E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A6E4 001474E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A6E8 001474E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014A6EC 001474EC*/ PPC::Runtime::ASM::blr();
}