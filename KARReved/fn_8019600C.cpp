//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018DBA0.hpp"
#include "fn_8018DC88.hpp"



void fn_8019600C(PPC::Runtime::GCContext* context)
{
/*8019600C 00192E0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80196010 00192E10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80196014 00192E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80196018 00192E18*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*8019601C 00192E1C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80196020 00192E20*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*80196024 00192E24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196028 00192E28*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8019602C 00192E2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80196030 00192E30*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80196034 00192E34*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*80196038 00192E38*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019603C 00192E3C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80196040 00192E40*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80196044 00192E44*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*80196048 00192E48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8019604C 00192E4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80196050 00192E50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r31));
/*80196054 00192E54*/ PPC::Runtime::ASM::bl(fn_8018DBA0);
/*80196058 00192E58*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AE028 @ Get_MemoryOffset_HighBit);
/*8019605C 00192E5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AE0A0 @ Get_MemoryOffset_HighBit);
/*80196060 00192E60*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804AE028 @ Get_MemoryOffset_LowBit);
/*80196064 00192E64*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80196068 00192E68*/ PPC::Runtime::ASM::addi(context->r8, context->r3, lbl_804AE0A0 @ Get_MemoryOffset_LowBit);
/*8019606C 00192E6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d0, context->r31));
/*80196070 00192E70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r31));
/*80196074 00192E74*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80196078 00192E78*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8019607C 00192E7C*/ PPC::Runtime::ASM::bl(fn_8018DC88);
/*80196080 00192E80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80196084 00192E84*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80196088 00192E88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019608C 00192E8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80196090 00192E90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80196094 00192E94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80196098 00192E98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019609C 00192E9C*/ PPC::Runtime::ASM::blr();
}