//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "__OSGetSystemTime.hpp"
#include "__OSGetSystemTime.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "__OSGetSystemTime.hpp"
#include "GetTypeCallback.hpp"
#include "GetTypeCallback.hpp"
#include "SITransfer.hpp"
#include "OSRestoreInterrupts.hpp"



void SIGetType(PPC::Runtime::GCContext* context)
{
/*803E9B5C 003E695C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E9B60 003E6960*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E9B64 003E6964*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803E9B68 003E6968*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E9B6C 003E696C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803E9B70 003E6970*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E9B74 003E6974*/ PPC::Runtime::ASM::lis(context->r4, Type_804FCC38 @ Get_MemoryOffset_HighBit);
/*803E9B78 003E6978*/ PPC::Runtime::ASM::slwi(context->r5, context->r27, 2);
/*803E9B7C 003E697C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, Type_804FCC38 @ Get_MemoryOffset_LowBit);
/*803E9B80 003E6980*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*803E9B84 003E6984*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E9B88 003E6988*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803E9B8C 003E698C*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803E9B90 003E6990*/ PPC::Runtime::ASM::lis(context->r5, TypeTime_8056E848 @ Get_MemoryOffset_HighBit);
/*803E9B94 003E6994*/ PPC::Runtime::ASM::slwi(context->r6, context->r27, 3);
/*803E9B98 003E6998*/ PPC::Runtime::ASM::addi(context->r0, context->r5, TypeTime_8056E848 @ Get_MemoryOffset_LowBit);
/*803E9B9C 003E699C*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r6);
/*803E9BA0 003E69A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803E9BA4 003E69A4*/ PPC::Runtime::ASM::lis(context->r5, Si_804FCC24 @ Get_MemoryOffset_HighBit);
/*803E9BA8 003E69A8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, Si_804FCC24 @ Get_MemoryOffset_LowBit);
/*803E9BAC 003E69AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E9BB0 003E69B0*/ PPC::Runtime::ASM::subfc(context->r4, context->r6, context->r4);
/*803E9BB4 003E69B4*/ PPC::Runtime::ASM::subfe(context->r0, context->r0, context->r3);
/*803E9BB8 003E69B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803E9BBC 003E69BC*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*803E9BC0 003E69C0*/ PPC::Runtime::ASM::sraw(context->r3, context->r5, context->r27);
/*803E9BC4 003E69C4*/ PPC::Runtime::ASM::and.(context->r3, context->r6, context->r3);
/*803E9BC8 003E69C8*/ PPC::Runtime::ASM::beq(.L_803E9BFC);
/*803E9BCC 003E69CC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x8);
/*803E9BD0 003E69D0*/ PPC::Runtime::ASM::beq(.L_803E9BF0);
/*803E9BD4 003E69D4*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803E9BD8 003E69D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803E9BDC 003E69DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E9BE0 003E69E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803E9BE4 003E69E4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E9BE8 003E69E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803E9BEC 003E69EC*/ PPC::Runtime::ASM::b(.L_803E9D0C);
RUNTIME_PPC_JUMP_LABEL(.L_803E9BF0, 0x803E9BF0) //this is a jump label
/*803E9BF0 003E69F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E9BF4 003E69F4*/ PPC::Runtime::ASM::li(context->r28, 0x80);
/*803E9BF8 003E69F8*/ PPC::Runtime::ASM::b(.L_803E9CAC);
RUNTIME_PPC_JUMP_LABEL(.L_803E9BFC, 0x803E9BFC) //this is a jump label
/*803E9BFC 003E69FC*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E9C00 003E6A00*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803E9C04 003E6A04*/ PPC::Runtime::ASM::lis(context->r5, 0x1062);
/*803E9C08 003E6A08*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4dd3);
/*803E9C0C 003E6A0C*/ PPC::Runtime::ASM::srwi(context->r6, context->r6, 2);
/*803E9C10 003E6A10*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r5, context->r6);
/*803E9C14 003E6A14*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 6);
/*803E9C18 003E6A18*/ PPC::Runtime::ASM::mulli(context->r7, context->r5, 0x32);
/*803E9C1C 003E6A1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E9C20 003E6A20*/ PPC::Runtime::ASM::xoris(context->r6, context->r3, 0x8000);
/*803E9C24 003E6A24*/ PPC::Runtime::ASM::xoris(context->r5, context->r0, 0x8000);
/*803E9C28 003E6A28*/ PPC::Runtime::ASM::subfc(context->r3, context->r4, context->r7);
/*803E9C2C 003E6A2C*/ PPC::Runtime::ASM::subfe(context->r5, context->r5, context->r6);
/*803E9C30 003E6A30*/ PPC::Runtime::ASM::subfe(context->r5, context->r6, context->r6);
/*803E9C34 003E6A34*/ PPC::Runtime::ASM::neg.(context->r5, context->r5);
/*803E9C38 003E6A38*/ PPC::Runtime::ASM::bne(.L_803E9C54);
/*803E9C3C 003E6A3C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x8);
/*803E9C40 003E6A40*/ PPC::Runtime::ASM::beq(.L_803E9C54);
/*803E9C44 003E6A44*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803E9C48 003E6A48*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E9C4C 003E6A4C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803E9C50 003E6A50*/ PPC::Runtime::ASM::b(.L_803E9D0C);
RUNTIME_PPC_JUMP_LABEL(.L_803E9C54, 0x803E9C54) //this is a jump label
/*803E9C54 003E6A54*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E9C58 003E6A58*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803E9C5C 003E6A5C*/ PPC::Runtime::ASM::lis(context->r5, 0x1062);
/*803E9C60 003E6A60*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4dd3);
/*803E9C64 003E6A64*/ PPC::Runtime::ASM::srwi(context->r6, context->r6, 2);
/*803E9C68 003E6A68*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r5, context->r6);
/*803E9C6C 003E6A6C*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 6);
/*803E9C70 003E6A70*/ PPC::Runtime::ASM::mulli(context->r6, context->r5, 0x4b);
/*803E9C74 003E6A74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E9C78 003E6A78*/ PPC::Runtime::ASM::xoris(context->r5, context->r3, 0x8000);
/*803E9C7C 003E6A7C*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*803E9C80 003E6A80*/ PPC::Runtime::ASM::subfc(context->r0, context->r4, context->r6);
/*803E9C84 003E6A84*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r5);
/*803E9C88 003E6A88*/ PPC::Runtime::ASM::subfe(context->r3, context->r5, context->r5);
/*803E9C8C 003E6A8C*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*803E9C90 003E6A90*/ PPC::Runtime::ASM::bne(.L_803E9CA0);
/*803E9C94 003E6A94*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*803E9C98 003E6A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E9C9C 003E6A9C*/ PPC::Runtime::ASM::b(.L_803E9CAC);
RUNTIME_PPC_JUMP_LABEL(.L_803E9CA0, 0x803E9CA0) //this is a jump label
/*803E9CA0 003E6AA0*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*803E9CA4 003E6AA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E9CA8 003E6AA8*/ PPC::Runtime::ASM::li(context->r28, 0x80);
RUNTIME_PPC_JUMP_LABEL(.L_803E9CAC, 0x803E9CAC) //this is a jump label
/*803E9CAC 003E6AAC*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803E9CB0 003E6AB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803E9CB4 003E6AB4*/ PPC::Runtime::ASM::lis(context->r4, 0x431c);
/*803E9CB8 003E6AB8*/ PPC::Runtime::ASM::lis(context->r5, GetTypeCallback @ Get_MemoryOffset_HighBit);
/*803E9CBC 003E6ABC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E9CC0 003E6AC0*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E9CC4 003E6AC4*/ PPC::Runtime::ASM::addi(context->r8, context->r5, GetTypeCallback @ Get_MemoryOffset_LowBit);
/*803E9CC8 003E6AC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803E9CCC 003E6ACC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x217d);
/*803E9CD0 003E6AD0*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*803E9CD4 003E6AD4*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803E9CD8 003E6AD8*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r4, context->r0);
/*803E9CDC 003E6ADC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 15);
/*803E9CE0 003E6AE0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x41);
/*803E9CE4 003E6AE4*/ PPC::Runtime::ASM::srwi(context->r10, context->r0, 3);
/*803E9CE8 003E6AE8*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x0);
/*803E9CEC 003E6AEC*/ PPC::Runtime::ASM::li(context->r4, cmdTypeAndStatus$371_805DE054 @ Get_MemoryOffset_SDA21);
/*803E9CF0 003E6AF0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803E9CF4 003E6AF4*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*803E9CF8 003E6AF8*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*803E9CFC 003E6AFC*/ PPC::Runtime::ASM::bl(SITransfer);
/*803E9D00 003E6B00*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803E9D04 003E6B04*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E9D08 003E6B08*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_803E9D0C, 0x803E9D0C) //this is a jump label
/*803E9D0C 003E6B0C*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E9D10 003E6B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803E9D14 003E6B14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803E9D18 003E6B18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E9D1C 003E6B1C*/ PPC::Runtime::ASM::blr();
}