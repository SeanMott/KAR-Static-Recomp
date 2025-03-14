//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_8044A080.hpp"
#include "fn_8044ADB4.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80449A40(PPC::Runtime::GCContext* context)
{
/*80449A40 00446840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80449A44 00446844*/ PPC::Runtime::ASM::mflr(context->r0);
/*80449A48 00446848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80449A4C 0044684C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80449A50 00446850*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80449A54 00446854*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80449A58 00446858*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80449A5C 0044685C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80449A60 00446860*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 26);
/*80449A64 00446864*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80449A68 00446868*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x98);
/*80449A6C 0044686C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80449A70 00446870*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80449A74 00446874*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80449A78 00446878*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r5);
/*80449A7C 0044687C*/ PPC::Runtime::ASM::ble(.L_80449A90);
/*80449A80 00446880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80449A84 00446884*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*80449A88 00446888*/ PPC::Runtime::ASM::bne(.L_80449A90);
/*80449A8C 0044688C*/ PPC::Runtime::ASM::b(.L_80449A94);
RUNTIME_PPC_JUMP_LABEL(.L_80449A90, 0x80449A90) //this is a jump label
/*80449A90 00446890*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80449A94, 0x80449A94) //this is a jump label
/*80449A94 00446894*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80449A98 00446898*/ PPC::Runtime::ASM::beq(.L_80449AC0);
/*80449A9C 0044689C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*80449AA0 004468A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 30, 30);
/*80449AA4 004468A4*/ PPC::Runtime::ASM::beq(.L_80449AC0);
/*80449AA8 004468A8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 31, 28);
/*80449AAC 004468AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80449AB0 004468B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*80449AB4 004468B4*/ PPC::Runtime::ASM::bl(fn_8044A080);
/*80449AB8 004468B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80449ABC 004468BC*/ PPC::Runtime::ASM::bl(fn_8044ADB4);
RUNTIME_PPC_JUMP_LABEL(.L_80449AC0, 0x80449AC0) //this is a jump label
/*80449AC0 004468C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80449AC4 004468C4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80449AC8 004468C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80449ACC 004468CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80449AD0 004468D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80449AD4 004468D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80449AD8 004468D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80449ADC 004468DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80449AE0 004468E0*/ PPC::Runtime::ASM::blr();
}