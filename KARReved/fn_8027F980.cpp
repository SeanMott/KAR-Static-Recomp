//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027F6FC.hpp"
#include "fn_8027F6FC.hpp"



void fn_8027F980(PPC::Runtime::GCContext* context)
{
/*8027F980 0027C780*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027F984 0027C784*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027F988 0027C788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027F98C 0027C78C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027F990 0027C790*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8027F994 0027C794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027F998 0027C798*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8027F99C 0027C79C*/ PPC::Runtime::ASM::bne(.L_8027F9C8);
/*8027F9A0 0027C7A0*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*8027F9A4 0027C7A4*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8027F9A8 0027C7A8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027F9AC 0027C7AC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8027F9B0 0027C7B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027F9B4 0027C7B4*/ PPC::Runtime::ASM::lis(context->r3, fn_8027F6FC @ Get_MemoryOffset_HighBit);
/*8027F9B8 0027C7B8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8027F6FC @ Get_MemoryOffset_LowBit);
/*8027F9BC 0027C7BC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027F9C0 0027C7C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027F9C4 0027C7C4*/ PPC::Runtime::ASM::bl(fn_804288A4);
RUNTIME_PPC_JUMP_LABEL(.L_8027F9C8, 0x8027F9C8) //this is a jump label
/*8027F9C8 0027C7C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027F9CC 0027C7CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027F9D0 0027C7D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027F9D4 0027C7D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027F9D8 0027C7D8*/ PPC::Runtime::ASM::blr();
}