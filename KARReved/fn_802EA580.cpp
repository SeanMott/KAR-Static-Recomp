//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EED00.hpp"



void fn_802EA580(PPC::Runtime::GCContext* context)
{
/*802EA580 002E7380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802EA584 002E7384*/ PPC::Runtime::ASM::mflr(context->r0);
/*802EA588 002E7388*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BD254 @ Get_MemoryOffset_HighBit);
/*802EA58C 002E738C*/ PPC::Runtime::ASM::lis(context->r7, lbl_804C0544 @ Get_MemoryOffset_HighBit);
/*802EA590 002E7390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802EA594 002E7394*/ PPC::Runtime::ASM::addi(context->r9, context->r6, lbl_804BD254 @ Get_MemoryOffset_LowBit);
/*802EA598 002E7398*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804C0544 @ Get_MemoryOffset_LowBit);
/*802EA59C 002E739C*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BF9DC @ Get_MemoryOffset_HighBit);
/*802EA5A0 002E73A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802EA5A4 002E73A4*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BF9DC @ Get_MemoryOffset_LowBit);
/*802EA5A8 002E73A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802EA5AC 002E73AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802EA5B0 002E73B0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802EA5B4 002E73B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D25E0 @ Get_MemoryOffset_HighBit);
/*802EA5B8 002E73B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D25E0 @ Get_MemoryOffset_LowBit);
/*802EA5BC 002E73BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802EA5C0 002E73C0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x18);
/*802EA5C4 002E73C4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802EA5C8 002E73C8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802EA5CC 002E73CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802EA5D0 002E73D0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802EA5D4 002E73D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802EA5D8 002E73D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802EA5DC 002E73DC*/ PPC::Runtime::ASM::bl(fn_802EED00);
/*802EA5E0 002E73E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802EA5E4 002E73E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802EA5E8 002E73E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*802EA5EC 002E73EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802EA5F0 002E73F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802EA5F4 002E73F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802EA5F8 002E73F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802EA5FC 002E73FC*/ PPC::Runtime::ASM::blr();
}