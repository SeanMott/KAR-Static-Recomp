//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000AAC4.hpp"
#include "fn_800727C4.hpp"
#include "memset.hpp"



void fn_80277754(PPC::Runtime::GCContext* context)
{
/*80277754 00274554*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80277758 00274558*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027775C 0027455C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80277760 00274560*/ PPC::Runtime::ASM::bl(fn_8000AAC4);
/*80277764 00274564*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80277768 00274568*/ PPC::Runtime::ASM::bne(.L_802777A0);
/*8027776C 0027456C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80277770 00274570*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80277774 00274574*/ PPC::Runtime::ASM::bne(.L_80277780);
/*80277778 00274578*/ PPC::Runtime::ASM::bl(fn_800727C4);
/*8027777C 0027457C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80277780, 0x80277780) //this is a jump label
/*80277780 00274580*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80277784 00274584*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80277788 00274588*/ PPC::Runtime::ASM::beq(.L_802777FC);
/*8027778C 0027458C*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*80277790 00274590*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x55c8);
/*80277794 00274594*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80277798 00274598*/ PPC::Runtime::ASM::bl(memset);
/*8027779C 0027459C*/ PPC::Runtime::ASM::b(.L_802777FC);
RUNTIME_PPC_JUMP_LABEL(.L_802777A0, 0x802777A0) //this is a jump label
/*802777A0 002745A0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777A4 002745A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802777A8 002745A8*/ PPC::Runtime::ASM::beq(.L_802777FC);
/*802777AC 002745AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802777B0 002745B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802777B4 002745B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802777B8 002745B8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777BC 002745BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802777C0 002745C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777C4 002745C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802777C8 002745C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802777CC 002745CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777D0 002745D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802777D4 002745D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777D8 002745D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802777DC 002745DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802777E0 002745E0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777E4 002745E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802777E8 002745E8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777EC 002745EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802777F0 002745F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802777F4 002745F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802777F8 002745F8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802777FC, 0x802777FC) //this is a jump label
/*802777FC 002745FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80277800 00274600*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80277804 00274604*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80277808 00274608*/ PPC::Runtime::ASM::blr();
}