//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C8C08.hpp"



void fn_801E0674(PPC::Runtime::GCContext* context)
{
/*801E0674 001DD474*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801E0678 001DD478*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E067C 001DD47C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E0680 001DD480*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E0684 001DD484*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E0688 001DD488*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801E068C 001DD48C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0690 001DD490*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E0694 001DD494*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E0698 001DD498*/ PPC::Runtime::ASM::beq(.L_801E06D8);
/*801E069C 001DD49C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801E06A0 001DD4A0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801E06A4, 0x801E06A4) //this is a jump label
/*801E06A4 001DD4A4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E06A8 001DD4A8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r31);
/*801E06AC 001DD4AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801E06B0 001DD4B0*/ PPC::Runtime::ASM::beq(.L_801E06C4);
/*801E06B4 001DD4B4*/ PPC::Runtime::ASM::bl(fn_801C8C08);
/*801E06B8 001DD4B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E06BC 001DD4BC*/ PPC::Runtime::ASM::beq(.L_801E06C4);
/*801E06C0 001DD4C0*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E06C4, 0x801E06C4) //this is a jump label
/*801E06C4 001DD4C4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801E06C8 001DD4C8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801E06CC 001DD4CC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*801E06D0 001DD4D0*/ PPC::Runtime::ASM::blt(.L_801E06A4);
/*801E06D4 001DD4D4*/ PPC::Runtime::ASM::b(.L_801E06DC);
RUNTIME_PPC_JUMP_LABEL(.L_801E06D8, 0x801E06D8) //this is a jump label
/*801E06D8 001DD4D8*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E06DC, 0x801E06DC) //this is a jump label
/*801E06DC 001DD4DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E06E0 001DD4E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E06E4 001DD4E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E06E8 001DD4E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E06EC 001DD4EC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E06F0 001DD4F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E06F4 001DD4F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801E06F8 001DD4F8*/ PPC::Runtime::ASM::blr();
}