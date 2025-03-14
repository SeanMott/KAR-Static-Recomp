//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TExpFreeTevDesc.hpp"
#include "fn_HSD_TExpFreeList.hpp"
#include "fn_HSD_TObjAssignResources.hpp"
#include "fn_HSD_TExpCompile.hpp"



void fn_HSD_MObjCompileTev(PPC::Runtime::GCContext* context)
{
/*803FAA80 003F7880*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803FAA84 003F7884*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FAA88 003F7888*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FAA8C 003F788C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803FAA90 003F7890*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803FAA94 003F7894*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 803FAA98 003F7898  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803FAA9C 003F789C*/ PPC::Runtime::ASM::beq(.L_803FAB88);
/*803FAAA0 003F78A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*803FAAA4 003F78A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAAA8 003F78A8*/ PPC::Runtime::ASM::beq(.L_803FAAB8);
/*803FAAAC 003F78AC*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeTevDesc);
/*803FAAB0 003F78B0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803FAAB4 003F78B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803FAAB8, 0x803FAAB8) //this is a jump label
/*803FAAB8 003F78B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*803FAABC 003F78BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAAC0 003F78C0*/ PPC::Runtime::ASM::beq(.L_803FAAD8);
/*803FAAC4 003F78C4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*803FAAC8 003F78C8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803FAACC 003F78CC*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeList);
/*803FAAD0 003F78D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803FAAD4 003F78D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803FAAD8, 0x803FAAD8) //this is a jump label
/*803FAAD8 003F78D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803FAADC 003F78DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803FAAE0 003F78E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803FAAE4 003F78E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 5, 5);
/*803FAAE8 003F78E8*/ PPC::Runtime::ASM::beq(.L_803FAB14);
/*803FAAEC 003F78EC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FAAF0 003F78F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803FAAF4 003F78F4*/ PPC::Runtime::ASM::beq(.L_803FAB14);
/*803FAAF8 003F78F8*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x8);
/*803FAAFC 003F78FC*/ PPC::Runtime::ASM::b(.L_803FAB04);
RUNTIME_PPC_JUMP_LABEL(.L_803FAB00, 0x803FAB00) //this is a jump label
/*803FAB00 003F7900*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803FAB04, 0x803FAB04) //this is a jump label
/*803FAB04 003F7904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FAB08 003F7908*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAB0C 003F790C*/ PPC::Runtime::ASM::bne(.L_803FAB00);
/*803FAB10 003F7910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803FAB14, 0x803FAB14) //this is a jump label
/*803FAB14 003F7914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803FAB18 003F7918*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*803FAB1C 003F791C*/ PPC::Runtime::ASM::beq(.L_803FAB48);
/*803FAB20 003F7920*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FAB24 003F7924*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAB28 003F7928*/ PPC::Runtime::ASM::beq(.L_803FAB48);
/*803FAB2C 003F792C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*803FAB30 003F7930*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803FAB34 003F7934*/ PPC::Runtime::ASM::beq(.L_803FAB48);
/*803FAB38 003F7938*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803FAB3C 003F793C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803FAB40 003F7940*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FAB44 003F7944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803FAB48, 0x803FAB48) //this is a jump label
/*803FAB48 003F7948*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803FAB4C 003F794C*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAssignResources);
/*803FAB50 003F7950*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803FAB54 003F7954*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803FAB58 003F7958*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*803FAB5C 003F795C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803FAB60 003F7960*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r6));
/*803FAB64 003F7964*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FAB68 003F7968*/ PPC::Runtime::ASM::bctrl();
/*803FAB6C 003F796C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x18);
/*803FAB70 003F7970*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*803FAB74 003F7974*/ PPC::Runtime::ASM::bl(fn_HSD_TExpCompile);
/*803FAB78 003F7978*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803FAB7C 003F797C*/ PPC::Runtime::ASM::beq(.L_803FAB88);
/*803FAB80 003F7980*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803FAB84 003F7984*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803FAB88, 0x803FAB88) //this is a jump label
/*803FAB88 003F7988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FAB8C 003F798C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803FAB90 003F7990*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803FAB94 003F7994*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAB98 003F7998*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803FAB9C 003F799C*/ PPC::Runtime::ASM::blr();
}