//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8003D5F0.hpp"



void fn_800F2528(PPC::Runtime::GCContext* context)
{
/*800F2528 000EF328*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F252C 000EF32C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F2530 000EF330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F2534 000EF334*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F2538 000EF338*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800F253C 000EF33C*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*800F2540 000EF340*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800F2544 000EF344*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800F2548 000EF348*/ PPC::Runtime::ASM::bne(.L_800F2560);
/*800F254C 000EF34C*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*800F2550 000EF350*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800F2554 000EF354*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800F2558 000EF358*/ PPC::Runtime::ASM::bne(.L_800F2560);
/*800F255C 000EF35C*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F2560, 0x800F2560) //this is a jump label
/*800F2560 000EF360*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800F2564 000EF364*/ PPC::Runtime::ASM::beq(.L_800F2588);
/*800F2568 000EF368*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DD704 @ Get_MemoryOffset_SDA21);
/*800F256C 000EF36C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800F2570 000EF370*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DD700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F2574 000EF374*/ PPC::Runtime::ASM::li(context->r0, StructValues_57 @ Get_MemoryOffset_SDA21);
/*800F2578 000EF378*/ PPC::Runtime::ASM::stw(context->r4, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F257C 000EF37C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD704 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F2580 000EF380*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F2584 000EF384*/ PPC::Runtime::ASM::b(.L_800F2590);
RUNTIME_PPC_JUMP_LABEL(.L_800F2588, 0x800F2588) //this is a jump label
/*800F2588 000EF388*/ PPC::Runtime::ASM::lwz(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F258C 000EF38C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800F2590, 0x800F2590) //this is a jump label
/*800F2590 000EF390*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800F2594 000EF394*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F2598 000EF398*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F259C 000EF39C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F25A0 000EF3A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F25A4 000EF3A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F25A8 000EF3A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F25AC 000EF3AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F25B0 000EF3B0*/ PPC::Runtime::ASM::blr();
}