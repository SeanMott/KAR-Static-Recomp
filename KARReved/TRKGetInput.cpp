//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKTestForPacket.hpp"
#include "TRKGetBuffer.hpp"
#include "fn_TRKConstructEvent.hpp"
#include "fn_TRKPostEvent.hpp"



void TRKGetInput(PPC::Runtime::GCContext* context)
{
/*803BE484 003BB284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803BE488 003BB288*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BE48C 003BB28C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE490 003BB290*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE494 003BB294*/ PPC::Runtime::ASM::bl(fn_TRKTestForPacket);
/*803BE498 003BB298*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803BE49C 003BB29C*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*803BE4A0 003BB2A0*/ PPC::Runtime::ASM::beq(.L_803BE4D0);
/*803BE4A4 003BB2A4*/ PPC::Runtime::ASM::bl(TRKGetBuffer);
/*803BE4A8 003BB2A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BE4AC 003BB2AC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*803BE4B0 003BB2B0*/ PPC::Runtime::ASM::bl(fn_TRKConstructEvent);
/*803BE4B4 003BB2B4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056B840 @ Get_MemoryOffset_HighBit);
/*803BE4B8 003BB2B8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BE4BC 003BB2BC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18056B840 @ Get_MemoryOffset_LowBit);
/*803BE4C0 003BB2C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BE4C4 003BB2C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BE4C8 003BB2C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803BE4CC 003BB2CC*/ PPC::Runtime::ASM::bl(fn_TRKPostEvent);
RUNTIME_PPC_JUMP_LABEL(.L_803BE4D0, 0x803BE4D0) //this is a jump label
/*803BE4D0 003BB2D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE4D4 003BB2D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE4D8 003BB2D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BE4DC 003BB2DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803BE4E0 003BB2E0*/ PPC::Runtime::ASM::blr();
}