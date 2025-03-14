//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKTargetReadInstruction.hpp"
#include "fn_TRKConstructEvent.hpp"
#include "fn_TRKPostEvent.hpp"



void TRKPostInterruptEvent(PPC::Runtime::GCContext* context)
{
/*803C0AB8 003BD8B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803C0ABC 003BD8BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C0AC0 003BD8C0*/ PPC::Runtime::ASM::lis(context->r3, gTRKState @ Get_MemoryOffset_HighBit);
/*803C0AC4 003BD8C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C0AC8 003BD8C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, gTRKState @ Get_MemoryOffset_LowBit);
/*803C0ACC 003BD8CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*803C0AD0 003BD8D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C0AD4 003BD8D4*/ PPC::Runtime::ASM::beq(.L_803C0AE4);
/*803C0AD8 003BD8D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C0ADC 003BD8DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*803C0AE0 003BD8E0*/ PPC::Runtime::ASM::b(.L_803C0B54);
RUNTIME_PPC_JUMP_LABEL(.L_803C0AE4, 0x803C0AE4) //this is a jump label
/*803C0AE4 003BD8E4*/ PPC::Runtime::ASM::lis(context->r3, gTRKCPUState @ Get_MemoryOffset_HighBit);
/*803C0AE8 003BD8E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, gTRKCPUState @ Get_MemoryOffset_LowBit);
/*803C0AEC 003BD8EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r3));
/*803C0AF0 003BD8F0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*803C0AF4 003BD8F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xd00);
/*803C0AF8 003BD8F8*/ PPC::Runtime::ASM::beq(.L_803C0B0C);
/*803C0AFC 003BD8FC*/ PPC::Runtime::ASM::bge(.L_803C0B40);
/*803C0B00 003BD900*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x700);
/*803C0B04 003BD904*/ PPC::Runtime::ASM::beq(.L_803C0B0C);
/*803C0B08 003BD908*/ PPC::Runtime::ASM::b(.L_803C0B40);
RUNTIME_PPC_JUMP_LABEL(.L_803C0B0C, 0x803C0B0C) //this is a jump label
/*803C0B0C 003BD90C*/ PPC::Runtime::ASM::lis(context->r4, gTRKCPUState @ Get_MemoryOffset_HighBit);
/*803C0B10 003BD910*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C0B14 003BD914*/ PPC::Runtime::ASM::addi(context->r4, context->r4, gTRKCPUState @ Get_MemoryOffset_LowBit);
/*803C0B18 003BD918*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*803C0B1C 003BD91C*/ PPC::Runtime::ASM::bl(fn_TRKTargetReadInstruction);
/*803C0B20 003BD920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C0B24 003BD924*/ PPC::Runtime::ASM::subis(context->r0, context->r3, 0xfe0);
/*803C0B28 003BD928*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C0B2C 003BD92C*/ PPC::Runtime::ASM::bne(.L_803C0B38);
/*803C0B30 003BD930*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*803C0B34 003BD934*/ PPC::Runtime::ASM::b(.L_803C0B44);
RUNTIME_PPC_JUMP_LABEL(.L_803C0B38, 0x803C0B38) //this is a jump label
/*803C0B38 003BD938*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*803C0B3C 003BD93C*/ PPC::Runtime::ASM::b(.L_803C0B44);
RUNTIME_PPC_JUMP_LABEL(.L_803C0B40, 0x803C0B40) //this is a jump label
/*803C0B40 003BD940*/ PPC::Runtime::ASM::li(context->r4, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803C0B44, 0x803C0B44) //this is a jump label
/*803C0B44 003BD944*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*803C0B48 003BD948*/ PPC::Runtime::ASM::bl(fn_TRKConstructEvent);
/*803C0B4C 003BD94C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*803C0B50 003BD950*/ PPC::Runtime::ASM::bl(fn_TRKPostEvent);
RUNTIME_PPC_JUMP_LABEL(.L_803C0B54, 0x803C0B54) //this is a jump label
/*803C0B54 003BD954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C0B58 003BD958*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C0B5C 003BD95C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803C0B60 003BD960*/ PPC::Runtime::ASM::blr();
}