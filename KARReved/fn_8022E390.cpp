//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022E390(PPC::Runtime::GCContext* context)
{
/*8022E390 0022B190*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022E394 0022B194*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022E398 0022B198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E39C 0022B19C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E3A0 0022B1A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022E3A4 0022B1A4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E3A8 0022B1A8*/ PPC::Runtime::ASM::blt(.L_8022E3C4);
/*8022E3AC 0022B1AC*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022E3B0 0022B1B0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022E3B4 0022B1B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022E3B8 0022B1B8*/ PPC::Runtime::ASM::li(context->r4, 0x106);
/*8022E3BC 0022B1BC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022E3C0 0022B1C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022E3C4, 0x8022E3C4) //this is a jump label
/*8022E3C4 0022B1C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E3C8 0022B1C8*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E3CC 0022B1CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E3D0 0022B1D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d4, context->r3));
/*8022E3D4 0022B1D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E3D8 0022B1D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022E3DC 0022B1DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022E3E0 0022B1E0*/ PPC::Runtime::ASM::blr();
}