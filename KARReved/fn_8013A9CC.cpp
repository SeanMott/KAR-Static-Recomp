//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013A9CC(PPC::Runtime::GCContext* context)
{
/*8013A9CC 001377CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013A9D0 001377D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013A9D4 001377D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013A9D8 001377D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013A9DC 001377DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013A9E0 001377E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013A9E4 001377E4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013A9E8 001377E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013A9EC 001377EC*/ PPC::Runtime::ASM::li(context->r3, 0x26);
/*8013A9F0 001377F0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8013A9F4 001377F4*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8013A9F8 001377F8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013A9FC 001377FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8013AA00 00137800*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013AA04 00137804*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013AA08 00137808*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8013AA0C 0013780C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013AA10 00137810*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8013AA14 00137814*/ PPC::Runtime::ASM::bl(fn_HSD_LObjLoadDesc);
/*8013AA18 00137818*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_29 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013AA1C 0013781C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8013AA20 00137820*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013AA24 00137824*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8013AA28 00137828*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A22C @ Get_MemoryOffset_HighBit);
/*8013AA2C 0013782C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013AA30 00137830*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A22C @ Get_MemoryOffset_LowBit);
/*8013AA34 00137834*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013AA38 00137838*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8013AA3C 0013783C*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8013AA40 00137840*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8013AA44 00137844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013AA48 00137848*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013AA4C 0013784C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013AA50 00137850*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013AA54 00137854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013AA58 00137858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8013AA5C 0013785C*/ PPC::Runtime::ASM::blr();
}