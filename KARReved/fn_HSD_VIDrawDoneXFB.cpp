//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_VIDrawDoneXFB(PPC::Runtime::GCContext* context)
{
/*804114BC 0040E2BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804114C0 0040E2C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804114C4 0040E2C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804114C8 0040E2C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804114CC 0040E2CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804114D0 0040E2D0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804114D4 0040E2D4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804114D8 0040E2D8*/ PPC::Runtime::ASM::mulli(context->r5, context->r30, 0x60);
/*804114DC 0040E2DC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*804114E0 0040E2E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804114E4 0040E2E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*804114E8 0040E2E8*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r5);
/*804114EC 0040E2EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*804114F0 0040E2F0*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x5c);
/*804114F4 0040E2F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804114F8 0040E2F8*/ PPC::Runtime::ASM::beq(.L_80411510);
/*804114FC 0040E2FC*/ PPC::Runtime::ASM::lis(context->r4, lbl_80503EDC @ Get_MemoryOffset_HighBit);
/*80411500 0040E300*/ PPC::Runtime::ASM::li(context->r3, String_ "video." Get_MemoryOffset_SDA21);
/*80411504 0040E304*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80503EDC @ Get_MemoryOffset_LowBit);
/*80411508 0040E308*/ PPC::Runtime::ASM::li(context->r4, 0x2d2);
/*8041150C 0040E30C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80411510, 0x80411510) //this is a jump label
/*80411510 0040E310*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*80411514 0040E314*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*80411518 0040E318*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8041151C 0040E31C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80411520 0040E320*/ PPC::Runtime::ASM::bne(.L_8041152C);
/*80411524 0040E324*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80411528 0040E328*/ PPC::Runtime::ASM::b(.L_8041155C);
RUNTIME_PPC_JUMP_LABEL(.L_8041152C, 0x8041152C) //this is a jump label
/*8041152C 0040E32C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x60);
/*80411530 0040E330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80411534 0040E334*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80411538 0040E338*/ PPC::Runtime::ASM::bne(.L_80411544);
/*8041153C 0040E33C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80411540 0040E340*/ PPC::Runtime::ASM::b(.L_8041155C);
RUNTIME_PPC_JUMP_LABEL(.L_80411544, 0x80411544) //this is a jump label
/*80411544 0040E344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r3));
/*80411548 0040E348*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8041154C 0040E34C*/ PPC::Runtime::ASM::bne(.L_80411558);
/*80411550 0040E350*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80411554 0040E354*/ PPC::Runtime::ASM::b(.L_8041155C);
RUNTIME_PPC_JUMP_LABEL(.L_80411558, 0x80411558) //this is a jump label
/*80411558 0040E358*/ PPC::Runtime::ASM::li(context->r0, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8041155C, 0x8041155C) //this is a jump label
/*8041155C 0040E35C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80411560 0040E360*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80411564 0040E364*/ PPC::Runtime::ASM::beq(.L_8041156C);
/*80411568 0040E368*/ PPC::Runtime::ASM::li(context->r0, 0x5);
RUNTIME_PPC_JUMP_LABEL(.L_8041156C, 0x8041156C) //this is a jump label
/*8041156C 0040E36C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80411570 0040E370*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80411574 0040E374*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80411578 0040E378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041157C 0040E37C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80411580 0040E380*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80411584 0040E384*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80411588 0040E388*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041158C 0040E38C*/ PPC::Runtime::ASM::blr();
}