//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D24FC(PPC::Runtime::GCContext* context)
{
/*800D24FC 000CF2FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D2500 000CF300*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D2504 000CF304*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D2508 000CF308*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D250C 000CF30C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800D2510 000CF310*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D2514 000CF314*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x140);
/*800D2518 000CF318*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800D251C 000CF31C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*800D2520 000CF320*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800D2524 000CF324*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*800D2528 000CF328*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D252C 000CF32C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800D2530 000CF330*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*800D2534 000CF334*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*800D2538 000CF338*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800D253C 000CF33C*/ PPC::Runtime::ASM::beq(.L_800D2554);
/*800D2540 000CF340*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_913 @ Get_MemoryOffset_HighBit);
/*800D2544 000CF344*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D2548 000CF348*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_913 @ Get_MemoryOffset_LowBit);
/*800D254C 000CF34C*/ PPC::Runtime::ASM::li(context->r4, 0x8de);
/*800D2550 000CF350*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D2554, 0x800D2554) //this is a jump label
/*800D2554 000CF354*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800D2558 000CF358*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800D255C 000CF35C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800D2560 000CF360*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800D2564 000CF364*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800D2568 000CF368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D256C 000CF36C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D2570 000CF370*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800D2574 000CF374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D2578 000CF378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800D257C 000CF37C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D2580 000CF380*/ PPC::Runtime::ASM::beq(.L_800D2590);
/*800D2584 000CF384*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800D2588 000CF388*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 24);
/*800D258C 000CF38C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800D2590, 0x800D2590) //this is a jump label
/*800D2590 000CF390*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D2594 000CF394*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800D2598 000CF398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D259C 000CF39C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D25A0 000CF3A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D25A4 000CF3A4*/ PPC::Runtime::ASM::blr();
}