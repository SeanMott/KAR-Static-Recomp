//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Read.hpp"
#include "fn_DVDLowSeek.hpp"



void fn_AlarmHandler2(PPC::Runtime::GCContext* context)
{
/*803C437C 003C117C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C4380 003C1180*/ PPC::Runtime::ASM::lis(context->r3, CommandList_8056CB40 @ Get_MemoryOffset_HighBit);
/*803C4384 003C1184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C4388 003C1188*/ PPC::Runtime::ASM::addi(context->r4, context->r3, CommandList_8056CB40 @ Get_MemoryOffset_LowBit);
/*803C438C 003C118C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803C4390 003C1190*/ PPC::Runtime::ASM::lwz(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4394 003C1194*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*803C4398 003C1198*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*803C439C 003C119C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*803C43A0 003C11A0*/ PPC::Runtime::ASM::bne(.L_803C43CC);
/*803C43A4 003C11A4*/ PPC::Runtime::ASM::lwz(context->r3, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C43A8 003C11A8*/ PPC::Runtime::ASM::add(context->r6, context->r4, context->r0);
/*803C43AC 003C11AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803C43B0 003C11B0*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C43B4 003C11B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803C43B8 003C11B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803C43BC 003C11BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803C43C0 003C11C0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C43C4 003C11C4*/ PPC::Runtime::ASM::bl(fn_Read);
/*803C43C8 003C11C8*/ PPC::Runtime::ASM::b(.L_803C43F0);
RUNTIME_PPC_JUMP_LABEL(.L_803C43CC, 0x803C43CC) //this is a jump label
/*803C43CC 003C11CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803C43D0 003C11D0*/ PPC::Runtime::ASM::bne(.L_803C43F0);
/*803C43D4 003C11D4*/ PPC::Runtime::ASM::lwz(context->r3, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C43D8 003C11D8*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803C43DC 003C11DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803C43E0 003C11E0*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C43E4 003C11E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C43E8 003C11E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803C43EC 003C11EC*/ PPC::Runtime::ASM::bl(fn_DVDLowSeek);
RUNTIME_PPC_JUMP_LABEL(.L_803C43F0, 0x803C43F0) //this is a jump label
/*803C43F0 003C11F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C43F4 003C11F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803C43F8 003C11F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C43FC 003C11FC*/ PPC::Runtime::ASM::blr();
}