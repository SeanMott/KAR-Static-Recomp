//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DoNotify.hpp"



void fn_DoUnreachable(PPC::Runtime::GCContext* context)
{
/*8046CDF8 00469BF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046CDFC 00469BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046CE00 00469C00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8046CE04 00469C04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8046CE08 00469C08*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 28, 2);
/*8046CE0C 00469C0C*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*8046CE10 00469C10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8046CE14 00469C14*/ PPC::Runtime::ASM::addi(context->r7, context->r5, 0x8);
/*8046CE18 00469C18*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8046CE1C 00469C1C*/ PPC::Runtime::ASM::beq(.L_8046CE3C);
/*8046CE20 00469C20*/ PPC::Runtime::ASM::bge(.L_8046CE30);
/*8046CE24 00469C24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8046CE28 00469C28*/ PPC::Runtime::ASM::bge(.L_8046CF60);
/*8046CE2C 00469C2C*/ PPC::Runtime::ASM::b(.L_8046CF70);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE30, 0x8046CE30) //this is a jump label
/*8046CE30 00469C30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*8046CE34 00469C34*/ PPC::Runtime::ASM::bge(.L_8046CF70);
/*8046CE38 00469C38*/ PPC::Runtime::ASM::b(.L_8046CF60);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE3C, 0x8046CE3C) //this is a jump label
/*8046CE3C 00469C3C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r5));
/*8046CE40 00469C40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046CE44 00469C44*/ PPC::Runtime::ASM::beq(.L_8046CE5C);
/*8046CE48 00469C48*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x44);
/*8046CE4C 00469C4C*/ PPC::Runtime::ASM::bge(.L_8046CE54);
/*8046CE50 00469C50*/ PPC::Runtime::ASM::li(context->r0, 0x44);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE54, 0x8046CE54) //this is a jump label
/*8046CE54 00469C54*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 16);
/*8046CE58 00469C58*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE5C, 0x8046CE5C) //this is a jump label
/*8046CE5C 00469C5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8046CE60 00469C60*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*8046CE64 00469C64*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*8046CE68 00469C68*/ PPC::Runtime::ASM::bge(.L_8046CE70);
/*8046CE6C 00469C6C*/ PPC::Runtime::ASM::b(.L_8046CE74);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE70, 0x8046CE70) //this is a jump label
/*8046CE70 00469C70*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE74, 0x8046CE74) //this is a jump label
/*8046CE74 00469C74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5d4);
/*8046CE78 00469C78*/ PPC::Runtime::ASM::ble(.L_8046CE84);
/*8046CE7C 00469C7C*/ PPC::Runtime::ASM::li(context->r5, 0x3ee);
/*8046CE80 00469C80*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE84, 0x8046CE84) //this is a jump label
/*8046CE84 00469C84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3ee);
/*8046CE88 00469C88*/ PPC::Runtime::ASM::ble(.L_8046CE94);
/*8046CE8C 00469C8C*/ PPC::Runtime::ASM::li(context->r5, 0x1fc);
/*8046CE90 00469C90*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE94, 0x8046CE94) //this is a jump label
/*8046CE94 00469C94*/ PPC::Runtime::ASM::li(context->r5, 0x44);
RUNTIME_PPC_JUMP_LABEL(.L_8046CE98, 0x8046CE98) //this is a jump label
/*8046CE98 00469C98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8046CE9C 00469C9C*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 16);
/*8046CEA0 00469CA0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*8046CEA4 00469CA4*/ PPC::Runtime::ASM::bge(.L_8046CEAC);
/*8046CEA8 00469CA8*/ PPC::Runtime::ASM::b(.L_8046CEB0);
RUNTIME_PPC_JUMP_LABEL(.L_8046CEAC, 0x8046CEAC) //this is a jump label
/*8046CEAC 00469CAC*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8046CEB0, 0x8046CEB0) //this is a jump label
/*8046CEB0 00469CB0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE650 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046CEB4 00469CB4*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r0, 16);
/*8046CEB8 00469CB8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8046CEBC 00469CBC*/ PPC::Runtime::ASM::addi(context->r8, context->r5, 0x0);
/*8046CEC0 00469CC0*/ PPC::Runtime::ASM::bne(.L_8046CECC);
/*8046CEC4 00469CC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046CEC8 00469CC8*/ PPC::Runtime::ASM::b(.L_8046CED0);
RUNTIME_PPC_JUMP_LABEL(.L_8046CECC, 0x8046CECC) //this is a jump label
/*8046CECC 00469CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_8046CED0, 0x8046CED0) //this is a jump label
/*8046CED0 00469CD0*/ PPC::Runtime::ASM::mr(context->r9, context->r0);
/*8046CED4 00469CD4*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x28);
/*8046CED8 00469CD8*/ PPC::Runtime::ASM::b(.L_8046CF4C);
RUNTIME_PPC_JUMP_LABEL(.L_8046CEDC, 0x8046CEDC) //this is a jump label
/*8046CEDC 00469CDC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*8046CEE0 00469CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*8046CEE4 00469CE4*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*8046CEE8 00469CE8*/ PPC::Runtime::ASM::bne(.L_8046CF30);
/*8046CEEC 00469CEC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r8));
/*8046CEF0 00469CF0*/ PPC::Runtime::ASM::cmpw(context->r5, context->r6);
/*8046CEF4 00469CF4*/ PPC::Runtime::ASM::bge(.L_8046CF24);
/*8046CEF8 00469CF8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x28);
/*8046CEFC 00469CFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5d4);
/*8046CF00 00469D00*/ PPC::Runtime::ASM::ble(.L_8046CF0C);
/*8046CF04 00469D04*/ PPC::Runtime::ASM::li(context->r5, 0x3ee);
/*8046CF08 00469D08*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF0C, 0x8046CF0C) //this is a jump label
/*8046CF0C 00469D0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3ee);
/*8046CF10 00469D10*/ PPC::Runtime::ASM::ble(.L_8046CF1C);
/*8046CF14 00469D14*/ PPC::Runtime::ASM::li(context->r5, 0x1fc);
/*8046CF18 00469D18*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF1C, 0x8046CF1C) //this is a jump label
/*8046CF1C 00469D1C*/ PPC::Runtime::ASM::li(context->r5, 0x44);
/*8046CF20 00469D20*/ PPC::Runtime::ASM::b(.L_8046CE98);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF24, 0x8046CF24) //this is a jump label
/*8046CF24 00469D24*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r8));
/*8046CF28 00469D28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r8));
/*8046CF2C 00469D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_8046CF30, 0x8046CF30) //this is a jump label
/*8046CF30 00469D30*/ PPC::Runtime::ASM::cmplwi(context->r9, 0x0);
/*8046CF34 00469D34*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x0);
/*8046CF38 00469D38*/ PPC::Runtime::ASM::bne(.L_8046CF44);
/*8046CF3C 00469D3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046CF40 00469D40*/ PPC::Runtime::ASM::b(.L_8046CF48);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF44, 0x8046CF44) //this is a jump label
/*8046CF44 00469D44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
RUNTIME_PPC_JUMP_LABEL(.L_8046CF48, 0x8046CF48) //this is a jump label
/*8046CF48 00469D48*/ PPC::Runtime::ASM::mr(context->r9, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF4C, 0x8046CF4C) //this is a jump label
/*8046CF4C 00469D4C*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*8046CF50 00469D50*/ PPC::Runtime::ASM::bne(.L_8046CEDC);
/*8046CF54 00469D54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r7));
/*8046CF58 00469D58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*8046CF5C 00469D5C*/ PPC::Runtime::ASM::beq(.L_8046CF70);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF60, 0x8046CF60) //this is a jump label
/*8046CF60 00469D60*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x0);
/*8046CF64 00469D64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*8046CF68 00469D68*/ PPC::Runtime::ASM::li(context->r5, -0x2);
/*8046CF6C 00469D6C*/ PPC::Runtime::ASM::bl(fn_DoNotify);
RUNTIME_PPC_JUMP_LABEL(.L_8046CF70, 0x8046CF70) //this is a jump label
/*8046CF70 00469D70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8046CF74 00469D74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*8046CF78 00469D78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046CF7C 00469D7C*/ PPC::Runtime::ASM::blr();
}