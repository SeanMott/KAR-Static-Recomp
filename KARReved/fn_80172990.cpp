//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80172990(PPC::Runtime::GCContext* context)
{
/*80172990 0016F790*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80172994 0016F794*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172998 0016F798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017299C 0016F79C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801729A0 0016F7A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801729A4 0016F7A4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801729A8 0016F7A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xca4, context->r3));
/*801729AC 0016F7AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801729B0 0016F7B0*/ PPC::Runtime::ASM::beq(.L_801729CC);
/*801729B4 0016F7B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801729B8 0016F7B8*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*801729BC 0016F7BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801729C0 0016F7C0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801729C4 0016F7C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801729C8 0016F7C8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_801729CC, 0x801729CC) //this is a jump label
/*801729CC 0016F7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801729D0 0016F7D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801729D4 0016F7D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801729D8 0016F7D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801729DC 0016F7DC*/ PPC::Runtime::ASM::blr();
}