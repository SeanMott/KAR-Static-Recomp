//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn___assert.hpp"
#include "fn_8044CCC8.hpp"
#include "fn_8044CCC8.hpp"
#include "fn_80446ACC.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8044CE08(PPC::Runtime::GCContext* context)
{
/*8044CE08 00449C08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8044CE0C 00449C0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044CE10 00449C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8044CE14 00449C14*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8044CE18 00449C18*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8044CE1C 00449C1C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_HighBit);
/*8044CE20 00449C20*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8044CE24 00449C24*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_LowBit);
/*8044CE28 00449C28*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8044CE2C 00449C2C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r28, 26);
/*8044CE30 00449C30*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8044CE34 00449C34*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044CE38 00449C38*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x8c0);
/*8044CE3C 00449C3C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8044CE40 00449C40*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r0);
/*8044CE44 00449C44*/ PPC::Runtime::ASM::ble(.L_8044CE58);
/*8044CE48 00449C48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8044CE4C 00449C4C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*8044CE50 00449C50*/ PPC::Runtime::ASM::bne(.L_8044CE58);
/*8044CE54 00449C54*/ PPC::Runtime::ASM::b(.L_8044CE5C);
RUNTIME_PPC_JUMP_LABEL(.L_8044CE58, 0x8044CE58) //this is a jump label
/*8044CE58 00449C58*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8044CE5C, 0x8044CE5C) //this is a jump label
/*8044CE5C 00449C5C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8044CE60 00449C60*/ PPC::Runtime::ASM::beq(.L_8044CF54);
/*8044CE64 00449C64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8044CE68 00449C68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8044CE6C 00449C6C*/ PPC::Runtime::ASM::beq(.L_8044CF54);
/*8044CE70 00449C70*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x10);
/*8044CE74 00449C74*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x424);
/*8044CE78 00449C78*/ PPC::Runtime::ASM::b(.L_8044CE88);
RUNTIME_PPC_JUMP_LABEL(.L_8044CE7C, 0x8044CE7C) //this is a jump label
/*8044CE7C 00449C7C*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8044CE80 00449C80*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x424);
/*8044CE84 00449C84*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8044CE88, 0x8044CE88) //this is a jump label
/*8044CE88 00449C88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8044CE8C 00449C8C*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8044CE90 00449C90*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8044CE94 00449C94*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044CE98 00449C98*/ PPC::Runtime::ASM::bne(.L_8044CE7C);
/*8044CE9C 00449C9C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x480);
/*8044CEA0 00449CA0*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 6);
/*8044CEA4 00449CA4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8044CEA8 00449CA8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8044CEAC 00449CAC*/ PPC::Runtime::ASM::cmpwi(context->r27, -0x1);
/*8044CEB0 00449CB0*/ PPC::Runtime::ASM::bne(.L_8044CEC4);
/*8044CEB4 00449CB4*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044CEB8 00449CB8*/ PPC::Runtime::ASM::li(context->r4, 0xd4c);
/*8044CEBC 00449CBC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_344 @ Get_MemoryOffset_SDA21);
/*8044CEC0 00449CC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044CEC4, 0x8044CEC4) //this is a jump label
/*8044CEC4 00449CC4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044CEC8 00449CC8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*8044CECC 00449CCC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044CED0 00449CD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8044CED4 00449CD4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044CED8 00449CD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8044CEDC 00449CDC*/ PPC::Runtime::ASM::ble(.L_8044CF04);
RUNTIME_PPC_JUMP_LABEL(.L_8044CEE0, 0x8044CEE0) //this is a jump label
/*8044CEE0 00449CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044CEE4 00449CE4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044CEE8 00449CE8*/ PPC::Runtime::ASM::bne(.L_8044CEF8);
/*8044CEEC 00449CEC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r3);
/*8044CEF0 00449CF0*/ PPC::Runtime::ASM::beq(.L_8044CEF8);
/*8044CEF4 00449CF4*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044CEF8, 0x8044CEF8) //this is a jump label
/*8044CEF8 00449CF8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8044CEFC 00449CFC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8044CF00 00449D00*/ PPC::Runtime::ASM::bdnz(.L_8044CEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8044CF04, 0x8044CF04) //this is a jump label
/*8044CF04 00449D04*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044CF08 00449D08*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8044CF0C 00449D0C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8044CF10 00449D10*/ PPC::Runtime::ASM::beq(.L_8044CF18);
/*8044CF14 00449D14*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8044CF18, 0x8044CF18) //this is a jump label
/*8044CF18 00449D18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8044CF1C 00449D1C*/ PPC::Runtime::ASM::lis(context->r3, fn_8044CCC8 @ Get_MemoryOffset_HighBit);
/*8044CF20 00449D20*/ PPC::Runtime::ASM::addi(context->r9, context->r3, fn_8044CCC8 @ Get_MemoryOffset_LowBit);
/*8044CF24 00449D24*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 6);
/*8044CF28 00449D28*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8044CF2C 00449D2C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x480);
/*8044CF30 00449D30*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8044CF34 00449D34*/ PPC::Runtime::ASM::mr(context->r10, context->r28);
/*8044CF38 00449D38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8044CF3C 00449D3C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*8044CF40 00449D40*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*8044CF44 00449D44*/ PPC::Runtime::ASM::li(context->r7, 0x21);
/*8044CF48 00449D48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8044CF4C 00449D4C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8044CF50 00449D50*/ PPC::Runtime::ASM::bl(fn_80446ACC);
RUNTIME_PPC_JUMP_LABEL(.L_8044CF54, 0x8044CF54) //this is a jump label
/*8044CF54 00449D54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8044CF58 00449D58*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8044CF5C 00449D5C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8044CF60 00449D60*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8044CF64 00449D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8044CF68 00449D68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044CF6C 00449D6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8044CF70 00449D70*/ PPC::Runtime::ASM::blr();
}