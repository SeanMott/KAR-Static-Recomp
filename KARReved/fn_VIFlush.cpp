//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn___shr2u.hpp"
#include "fn___shl2i.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_VIFlush(PPC::Runtime::GCContext* context)
{
/*803DF1E8 003DBFE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DF1EC 003DBFEC*/ PPC::Runtime::ASM::lis(context->r3, lbl_SoundBufferEntryRegs @ Get_MemoryOffset_HighBit);
/*803DF1F0 003DBFF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DF1F4 003DBFF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803DF1F8 003DBFF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DF1FC 003DBFFC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_SoundBufferEntryRegs @ Get_MemoryOffset_LowBit);
/*803DF200 003DC000*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DF204 003DC004*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF208 003DC008*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DF20C 003DC00C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DF210 003DC010*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF214 003DC014*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803DF218 003DC018*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DF21C 003DC01C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDF8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF220 003DC020*/ PPC::Runtime::ASM::or(context->r3, context->r5, context->r4);
/*803DF224 003DC024*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDF98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF228 003DC028*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF22C 003DC02C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDFA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF230 003DC030*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDFA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF234 003DC034*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF238 003DC038*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDF94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF23C 003DC03C*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803DF240 003DC040*/ PPC::Runtime::ASM::or(context->r3, context->r5, context->r3);
/*803DF244 003DC044*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDFA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF248 003DC048*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDFA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF24C 003DC04C*/ PPC::Runtime::ASM::b(.L_803DF2C4);
RUNTIME_PPC_JUMP_LABEL(.L_803DF250, 0x803DF250) //this is a jump label
/*803DF250 003DC050*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDF90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF254 003DC054*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803DF258 003DC058*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DDF94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF25C 003DC05C*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*803DF260 003DC060*/ PPC::Runtime::ASM::bl(fn___shr2u);
/*803DF264 003DC064*/ PPC::Runtime::ASM::cntlzw(context->r4, context->r4);
/*803DF268 003DC068*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x20);
/*803DF26C 003DC06C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803DF270 003DC070*/ PPC::Runtime::ASM::and(context->r0, context->r28, context->r0);
/*803DF274 003DC074*/ PPC::Runtime::ASM::bge(.L_803DF27C);
/*803DF278 003DC078*/ PPC::Runtime::ASM::b(.L_803DF284);
RUNTIME_PPC_JUMP_LABEL(.L_803DF27C, 0x803DF27C) //this is a jump label
/*803DF27C 003DC07C*/ PPC::Runtime::ASM::cntlzw(context->r3, context->r0);
/*803DF280 003DC080*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x20);
RUNTIME_PPC_JUMP_LABEL(.L_803DF284, 0x803DF284) //this is a jump label
/*803DF284 003DC084*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 1);
/*803DF288 003DC088*/ PPC::Runtime::ASM::lhzx(context->r0, context->r31, context->r3);
/*803DF28C 003DC08C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*803DF290 003DC090*/ PPC::Runtime::ASM::subfic(context->r5, context->r4, 0x3f);
/*803DF294 003DC094*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*803DF298 003DC098*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF29C 003DC09C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803DF2A0 003DC0A0*/ PPC::Runtime::ASM::bl(fn___shl2i);
/*803DF2A4 003DC0A4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2A8 003DC0A8*/ PPC::Runtime::ASM::nor(context->r5, context->r3, context->r3);
/*803DF2AC 003DC0AC*/ PPC::Runtime::ASM::nor(context->r4, context->r4, context->r4);
/*803DF2B0 003DC0B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDF94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2B4 003DC0B4*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r5);
/*803DF2B8 003DC0B8*/ PPC::Runtime::ASM::and(context->r3, context->r3, context->r4);
/*803DF2BC 003DC0BC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDF94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2C0 003DC0C0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803DF2C4, 0x803DF2C4) //this is a jump label
/*803DF2C4 003DC0C4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2C8 003DC0C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF2CC 003DC0CC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDF94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2D0 003DC0D0*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*803DF2D4 003DC0D4*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*803DF2D8 003DC0D8*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*803DF2DC 003DC0DC*/ PPC::Runtime::ASM::bne(.L_803DF250);
/*803DF2E0 003DC0E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803DF2E4 003DC0E4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2E8 003DC0E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DF2EC 003DC0EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*803DF2F0 003DC0F0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDFB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF2F4 003DC0F4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DF2F8 003DC0F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DF2FC 003DC0FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DF300 003DC100*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DF304 003DC104*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF308 003DC108*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DF30C 003DC10C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803DF310 003DC110*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DF314 003DC114*/ PPC::Runtime::ASM::blr();
}