//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DVDLowSeek.hpp"



void fn_SeekTwiceBeforeRead(PPC::Runtime::GCContext* context)
{
/*803C4580 003C1380*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C4584 003C1384*/ PPC::Runtime::ASM::lis(context->r7, CommandList_8056CB40 @ Get_MemoryOffset_HighBit);
/*803C4588 003C1388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/* 803C458C 003C138C  54 A8 00 21 */ clrrwi. context->r8 , context->r5 , 15
/*803C4590 003C1390*/ PPC::Runtime::ASM::addi(context->r9, context->r7, CommandList_8056CB40 @ Get_MemoryOffset_LowBit);
/*803C4594 003C1394*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803C4598 003C1398*/ PPC::Runtime::ASM::bne(.L_803C45A4);
/*803C459C 003C139C*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*803C45A0 003C13A0*/ PPC::Runtime::ASM::b(.L_803C45AC);
RUNTIME_PPC_JUMP_LABEL(.L_803C45A4, 0x803C45A4) //this is a jump label
/*803C45A4 003C13A4*/ PPC::Runtime::ASM::lwz(context->r0, WorkAroundSeekLocation_805DDD68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C45A8 003C13A8*/ PPC::Runtime::ASM::add(context->r10, context->r8, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803C45AC, 0x803C45AC) //this is a jump label
/*803C45AC 003C13AC*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C45B0 003C13B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803C45B4 003C13B4*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*803C45B8 003C13B8*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*803C45BC 003C13BC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*803C45C0 003C13C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C45C4 003C13C4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*803C45C8 003C13C8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*803C45CC 003C13CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*803C45D0 003C13D0*/ PPC::Runtime::ASM::mr(context->r3, context->r10);
/*803C45D4 003C13D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r9));
/*803C45D8 003C13D8*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*803C45DC 003C13DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r9));
/*803C45E0 003C13E0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r9));
/*803C45E4 003C13E4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*803C45E8 003C13E8*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C45EC 003C13EC*/ PPC::Runtime::ASM::bl(fn_DVDLowSeek);
/*803C45F0 003C13F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C45F4 003C13F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803C45F8 003C13F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C45FC 003C13FC*/ PPC::Runtime::ASM::blr();
}