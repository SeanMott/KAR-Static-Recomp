//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AF474(PPC::Runtime::GCContext* context)
{
/*800AF474 000AC274*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF478 000AC278*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF47C 000AC27C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AF480 000AC280*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF484 000AC284*/ PPC::Runtime::ASM::bne(.L_800AF498);
/*800AF488 000AC288*/ PPC::Runtime::ASM::bl(fn_804484C8);
/*800AF48C 000AC28C*/ PPC::Runtime::ASM::lis(context->r4, AllZeros_50 @ Get_MemoryOffset_HighBit);
/*800AF490 000AC290*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AllZeros_50 @ Get_MemoryOffset_LowBit);
/*800AF494 000AC294*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800AF498, 0x800AF498) //this is a jump label
/*800AF498 000AC298*/ PPC::Runtime::ASM::lis(context->r3, AllZeros_50 @ Get_MemoryOffset_HighBit);
/*800AF49C 000AC29C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, AllZeros_50 @ Get_MemoryOffset_LowBit);
/*800AF4A0 000AC2A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800AF4A4 000AC2A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AF4A8 000AC2A8*/ PPC::Runtime::ASM::beq(.L_800AF4CC);
/*800AF4AC 000AC2AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800AF4B0 000AC2B0*/ PPC::Runtime::ASM::beq(.L_800AF4CC);
/*800AF4B4 000AC2B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800AF4B8 000AC2B8*/ PPC::Runtime::ASM::beq(.L_800AF4CC);
/*800AF4BC 000AC2BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800AF4C0 000AC2C0*/ PPC::Runtime::ASM::beq(.L_800AF4CC);
/*800AF4C4 000AC2C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AF4C8 000AC2C8*/ PPC::Runtime::ASM::bne(.L_800AF4D0);
RUNTIME_PPC_JUMP_LABEL(.L_800AF4CC, 0x800AF4CC) //this is a jump label
/*800AF4CC 000AC2CC*/ PPC::Runtime::ASM::bl(fn_804484D0);
RUNTIME_PPC_JUMP_LABEL(.L_800AF4D0, 0x800AF4D0) //this is a jump label
/*800AF4D0 000AC2D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF4D4 000AC2D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF4D8 000AC2D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF4DC 000AC2DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF4E0 000AC2E0*/ PPC::Runtime::ASM::blr();
}