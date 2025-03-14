//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_setFbbRegs.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_VISetNextFrameBuffer(PPC::Runtime::GCContext* context)
{
/*803DF318 003DC118*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DF31C 003DC11C*/ PPC::Runtime::ASM::lis(context->r4, lbl_SoundBufferEntryRegs @ Get_MemoryOffset_HighBit);
/*803DF320 003DC120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DF324 003DC124*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803DF328 003DC128*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF32C 003DC12C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_SoundBufferEntryRegs @ Get_MemoryOffset_LowBit);
/*803DF330 003DC130*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DF334 003DC134*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803DF338 003DC138*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DF33C 003DC13C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*803DF340 003DC140*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803DF344 003DC144*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803DF348 003DC148*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDFB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF34C 003DC14C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xf0);
/*803DF350 003DC150*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x124);
/*803DF354 003DC154*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x128);
/*803DF358 003DC158*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x13c);
/*803DF35C 003DC15C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x140);
/*803DF360 003DC160*/ PPC::Runtime::ASM::bl(fn_setFbbRegs);
/*803DF364 003DC164*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DF368 003DC168*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DF36C 003DC16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DF370 003DC170*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF374 003DC174*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DF378 003DC178*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803DF37C 003DC17C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DF380 003DC180*/ PPC::Runtime::ASM::blr();
}