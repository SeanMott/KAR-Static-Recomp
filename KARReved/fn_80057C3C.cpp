//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80057B30.hpp"
#include "fn_80057B30.hpp"



void fn_80057C3C(PPC::Runtime::GCContext* context)
{
/*80057C3C 00054A3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80057C40 00054A40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80057C44 00054A44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80057C48 00054A48*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80057C4C 00054A4C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80057C50 00054A50*/ PPC::Runtime::ASM::lis(context->r8, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_HighBit);
/*80057C54 00054A54*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80057C58 00054A58*/ PPC::Runtime::ASM::addi(context->r3, context->r8, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_LowBit);
/*80057C5C 00054A5C*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*80057C60 00054A60*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80057C64 00054A64*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80057C68 00054A68*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*80057C6C 00054A6C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x9e0);
/*80057C70 00054A70*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80057C74 00054A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80057C78 00054A78*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80057C7C 00054A7C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80057C80 00054A80*/ PPC::Runtime::ASM::beq(.L_80057C9C);
/*80057C84 00054A84*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_186 @ Get_MemoryOffset_HighBit);
/*80057C88 00054A88*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_187 @ Get_MemoryOffset_HighBit);
/*80057C8C 00054A8C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_186 @ Get_MemoryOffset_LowBit);
/*80057C90 00054A90*/ PPC::Runtime::ASM::li(context->r4, 0x152);
/*80057C94 00054A94*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_187 @ Get_MemoryOffset_LowBit);
/*80057C98 00054A98*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80057C9C, 0x80057C9C) //this is a jump label
/*80057C9C 00054A9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80057CA0 00054AA0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80057CA4 00054AA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80057CA8 00054AA8*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80057CAC 00054AAC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80057CB0 00054AB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80057CB4 00054AB4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80057CB8 00054AB8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80057CBC 00054ABC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80057CC0 00054AC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80057CC4 00054AC4*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*80057CC8 00054AC8*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*80057CCC 00054ACC*/ PPC::Runtime::ASM::lis(context->r4, 0x1062);
/*80057CD0 00054AD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*80057CD4 00054AD4*/ PPC::Runtime::ASM::lis(context->r3, fn_80057B30 @ Get_MemoryOffset_HighBit);
/*80057CD8 00054AD8*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_80057B30 @ Get_MemoryOffset_LowBit);
/*80057CDC 00054ADC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4dd3);
/*80057CE0 00054AE0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*80057CE4 00054AE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80057CE8 00054AE8*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r4, context->r0);
/*80057CEC 00054AEC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80057CF0 00054AF0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 6);
/*80057CF4 00054AF4*/ PPC::Runtime::ASM::mulli(context->r6, context->r0, 0x3);
/*80057CF8 00054AF8*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*80057CFC 00054AFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80057D00 00054B00*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80057D04 00054B04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80057D08 00054B08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80057D0C 00054B0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80057D10 00054B10*/ PPC::Runtime::ASM::blr();
}