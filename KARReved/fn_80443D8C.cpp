//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80449AE4.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80443D8C(PPC::Runtime::GCContext* context)
{
/*80443D8C 00440B8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80443D90 00440B90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80443D94 00440B94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80443D98 00440B98*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80443D9C 00440B9C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/* 80443DA0 00440BA0  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80443DA4 00440BA4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80443DA8 00440BA8*/ PPC::Runtime::ASM::blt(.L_80443E80);
/*80443DAC 00440BAC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x3f);
/*80443DB0 00440BB0*/ PPC::Runtime::ASM::bgt(.L_80443E80);
/*80443DB4 00440BB4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80443DB8 00440BB8*/ PPC::Runtime::ASM::lwz(context->r29, STRUCT_BYTE4_COUNT_1805DE480 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443DBC 00440BBC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80443DC0 00440BC0*/ PPC::Runtime::ASM::b(.L_80443E68);
RUNTIME_PPC_JUMP_LABEL(.L_80443DC4, 0x80443DC4) //this is a jump label
/*80443DC4 00440BC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/* 80443DC8 00440BC8  54 00 00 03 */ clrrwi. context->r0 , context->r0 , 30
/*80443DCC 00440BCC*/ PPC::Runtime::ASM::beq(.L_80443E64);
/*80443DD0 00440BD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d, context->r29));
/*80443DD4 00440BD4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*80443DD8 00440BD8*/ PPC::Runtime::ASM::bne(.L_80443E64);
/*80443DDC 00440BDC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80443DE0 00440BE0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE494 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443DE4 00440BE4*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*80443DE8 00440BE8*/ PPC::Runtime::ASM::and(context->r27, context->r26, context->r0);
/*80443DEC 00440BEC*/ PPC::Runtime::ASM::blt(.L_80443DFC);
/*80443DF0 00440BF0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE49C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443DF4 00440BF4*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*80443DF8 00440BF8*/ PPC::Runtime::ASM::ble(.L_80443E04);
RUNTIME_PPC_JUMP_LABEL(.L_80443DFC, 0x80443DFC) //this is a jump label
/*80443DFC 00440BFC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80443E00 00440C00*/ PPC::Runtime::ASM::b(.L_80443E60);
RUNTIME_PPC_JUMP_LABEL(.L_80443E04, 0x80443E04) //this is a jump label
/*80443E04 00440C04*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80443E08 00440C08*/ PPC::Runtime::ASM::mulli(context->r0, context->r27, 0x48);
/*80443E0C 00440C0C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE48C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443E10 00440C10*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80443E14 00440C14*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80443E18 00440C18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80443E1C 00440C1C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r26);
/*80443E20 00440C20*/ PPC::Runtime::ASM::bne(.L_80443E30);
/*80443E24 00440C24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/* 80443E28 00440C28  54 00 00 03 */ clrrwi. context->r0 , context->r0 , 30
/*80443E2C 00440C2C*/ PPC::Runtime::ASM::bne(.L_80443E40);
RUNTIME_PPC_JUMP_LABEL(.L_80443E30, 0x80443E30) //this is a jump label
/*80443E30 00440C30*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80443E34 00440C34*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80443E38 00440C38*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80443E3C 00440C3C*/ PPC::Runtime::ASM::b(.L_80443E60);
RUNTIME_PPC_JUMP_LABEL(.L_80443E40, 0x80443E40) //this is a jump label
/*80443E40 00440C40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80443E44 00440C44*/ PPC::Runtime::ASM::bl(fn_80449AE4);
/*80443E48 00440C48*/ PPC::Runtime::ASM::subfic(context->r4, context->r3, -0x1);
/*80443E4C 00440C4C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80443E50 00440C50*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*80443E54 00440C54*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80443E58 00440C58*/ PPC::Runtime::ASM::srwi(context->r26, context->r0, 31);
/*80443E5C 00440C5C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_80443E60, 0x80443E60) //this is a jump label
/*80443E60 00440C60*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r26);
RUNTIME_PPC_JUMP_LABEL(.L_80443E64, 0x80443E64) //this is a jump label
/*80443E64 00440C64*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80443E68, 0x80443E68) //this is a jump label
/*80443E68 00440C68*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80443E6C 00440C6C*/ PPC::Runtime::ASM::bne(.L_80443DC4);
/*80443E70 00440C70*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80443E74 00440C74*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80443E78 00440C78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80443E7C 00440C7C*/ PPC::Runtime::ASM::b(.L_80443E84);
RUNTIME_PPC_JUMP_LABEL(.L_80443E80, 0x80443E80) //this is a jump label
/*80443E80 00440C80*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80443E84, 0x80443E84) //this is a jump label
/*80443E84 00440C84*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80443E88 00440C88*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80443E8C 00440C8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80443E90 00440C90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80443E94 00440C94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80443E98 00440C98*/ PPC::Runtime::ASM::blr();
}