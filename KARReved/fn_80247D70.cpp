//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D8D44.hpp"



void fn_80247D70(PPC::Runtime::GCContext* context)
{
/*80247D70 00244B70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80247D74 00244B74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80247D78 00244B78*/ PPC::Runtime::ASM::mr(context->r12, context->r7);
/*80247D7C 00244B7C*/ PPC::Runtime::ASM::mr(context->r10, context->r9);
/*80247D80 00244B80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80247D84 00244B84*/ PPC::Runtime::ASM::mr(context->r0, context->r8);
/*80247D88 00244B88*/ PPC::Runtime::ASM::mr(context->r8, context->r12);
/*80247D8C 00244B8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80247D90 00244B90*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*80247D94 00244B94*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*80247D98 00244B98*/ PPC::Runtime::ASM::mr(context->r9, context->r0);
/*80247D9C 00244B9C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80247DA0 00244BA0*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80247DA4 00244BA4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*80247DA8 00244BA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80247DAC 00244BAC*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80247DB0 00244BB0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80247DB4 00244BB4*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80247DB8 00244BB8*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80247DBC 00244BBC*/ PPC::Runtime::ASM::addi(context->r3, context->r11, 0x54);
/*80247DC0 00244BC0*/ PPC::Runtime::ASM::bl(fn_800D8D44);
/*80247DC4 00244BC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80247DC8 00244BC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80247DCC 00244BCC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80247DD0 00244BD0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80247DD4 00244BD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80247DD8 00244BD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80247DDC 00244BDC*/ PPC::Runtime::ASM::blr();
}