//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022CE94.hpp"
#include "fn_800AB5A4.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"



void fn_800A9A34(PPC::Runtime::GCContext* context)
{
/*800A9A34 000A6834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800A9A38 000A6838*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A9A3C 000A683C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A9A40 000A6840*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A9A44 000A6844*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A9A48 000A6848*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800A9A4C 000A684C*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A9A50 000A6850*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x724, context->r31));
/* 800A9A54 000A6854  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*800A9A58 000A6858*/ PPC::Runtime::ASM::beq(.L_800A9ACC);
/*800A9A5C 000A685C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800A9A60 000A6860*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A9A64 000A6864*/ PPC::Runtime::ASM::bl(fn_8022CE94);
/*800A9A68 000A6868*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800A9A6C 000A686C*/ PPC::Runtime::ASM::bl(fn_800AB5A4);
/*800A9A70 000A6870*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800A9A74 000A6874*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A9A78 000A6878*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800A9A7C 000A687C*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*800A9A80 000A6880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800A9A84 000A6884*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A9A88 000A6888*/ PPC::Runtime::ASM::bne(.L_800A9A98);
/*800A9A8C 000A688C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A9A90 000A6890*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A9A94 000A6894*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800A9A98, 0x800A9A98) //this is a jump label
/*800A9A98 000A6898*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A9A9C 000A689C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x720, context->r31));
/*800A9AA0 000A68A0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A9AA4 000A68A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800A9AA8 000A68A8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_654 @ Get_MemoryOffset_HighBit);
/*800A9AAC 000A68AC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*800A9AB0 000A68B0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_654 @ Get_MemoryOffset_LowBit);
/*800A9AB4 000A68B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800A9AB8 000A68B8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A9ABC 000A68BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800A9AC0 000A68C0*/ PPC::Runtime::ASM::addi(context->r5, context->r8, 0x1);
/* 800A9AC4 000A68C4  4C C6 32 42 */ crset context->cr1eq
/*800A9AC8 000A68C8*/ PPC::Runtime::ASM::bl(fn_dbPutString);
RUNTIME_PPC_JUMP_LABEL(.L_800A9ACC, 0x800A9ACC) //this is a jump label
/*800A9ACC 000A68CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A9AD0 000A68D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A9AD4 000A68D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A9AD8 000A68D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A9ADC 000A68DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800A9AE0 000A68E0*/ PPC::Runtime::ASM::blr();
}