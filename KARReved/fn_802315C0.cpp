//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_802315C0(PPC::Runtime::GCContext* context)
{
/*802315C0 0022E3C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802315C4 0022E3C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802315C8 0022E3C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802315CC 0022E3CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802315D0 0022E3D0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802315D4 0022E3D4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*802315D8 0022E3D8*/ PPC::Runtime::ASM::blt(.L_802315F4);
/*802315DC 0022E3DC*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*802315E0 0022E3E0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*802315E4 0022E3E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*802315E8 0022E3E8*/ PPC::Runtime::ASM::li(context->r4, 0x911);
/*802315EC 0022E3EC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*802315F0 0022E3F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802315F4, 0x802315F4) //this is a jump label
/*802315F4 0022E3F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802315F8 0022E3F8*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*802315FC 0022E3FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80231600 0022E400*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f4, context->r3));
/*80231604 0022E404*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80231608 0022E408*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023160C 0022E40C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80231610 0022E410*/ PPC::Runtime::ASM::blr();
}