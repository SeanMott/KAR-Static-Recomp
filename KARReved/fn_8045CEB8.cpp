//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_DVDGetCommandBlockStatus.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_DVDCancel.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_DVDGetCommandBlockStatus.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_DVDClose.hpp"
#include "fn_8045D6CC.hpp"
#include "fn_8045D6CC.hpp"



void fn_8045CEB8(PPC::Runtime::GCContext* context)
{
/*8045CEB8 00459CB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8045CEBC 00459CBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045CEC0 00459CC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045CEC4 00459CC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045CEC8 00459CC8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8045CECC 00459CCC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045CED0 00459CD0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8045CED4 00459CD4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8045CED8 00459CD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8045CEDC 00459CDC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045CEE0 00459CE0*/ PPC::Runtime::ASM::bl(fn_DVDGetCommandBlockStatus);
/*8045CEE4 00459CE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8045CEE8 00459CE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8045CEEC 00459CEC*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8045CEF0 00459CF0*/ PPC::Runtime::ASM::bne(.L_8045CF00);
/*8045CEF4 00459CF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045CEF8 00459CF8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8045CEFC 00459CFC*/ PPC::Runtime::ASM::b(.L_8045CF90);
RUNTIME_PPC_JUMP_LABEL(.L_8045CF00, 0x8045CF00) //this is a jump label
/*8045CF00 00459D00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8045CF04 00459D04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045CF08 00459D08*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8045CF0C 00459D0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*8045CF10 00459D10*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8045CF14 00459D14*/ PPC::Runtime::ASM::beq(.L_8045CF90);
/*8045CF18 00459D18*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8045CF1C 00459D1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*8045CF20 00459D20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*8045CF24 00459D24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8045CF28 00459D28*/ PPC::Runtime::ASM::bctrl();
/*8045CF2C 00459D2C*/ PPC::Runtime::ASM::b(.L_8045CF90);
RUNTIME_PPC_JUMP_LABEL(.L_8045CF30, 0x8045CF30) //this is a jump label
/*8045CF30 00459D30*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045CF34 00459D34*/ PPC::Runtime::ASM::bl(fn_DVDCancel);
/*8045CF38 00459D38*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8045CF3C 00459D3C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8045CF40 00459D40*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045CF44 00459D44*/ PPC::Runtime::ASM::bl(fn_DVDGetCommandBlockStatus);
/*8045CF48 00459D48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8045CF4C 00459D4C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8045CF50 00459D50*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8045CF54 00459D54*/ PPC::Runtime::ASM::bne(.L_8045CF64);
/*8045CF58 00459D58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8045CF5C 00459D5C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8045CF60 00459D60*/ PPC::Runtime::ASM::b(.L_8045CF90);
RUNTIME_PPC_JUMP_LABEL(.L_8045CF64, 0x8045CF64) //this is a jump label
/*8045CF64 00459D64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8045CF68 00459D68*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8045CF6C 00459D6C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8045CF70 00459D70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*8045CF74 00459D74*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8045CF78 00459D78*/ PPC::Runtime::ASM::beq(.L_8045CF90);
/*8045CF7C 00459D7C*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8045CF80 00459D80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*8045CF84 00459D84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*8045CF88 00459D88*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8045CF8C 00459D8C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8045CF90, 0x8045CF90) //this is a jump label
/*8045CF90 00459D90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r29));
/*8045CF94 00459D94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045CF98 00459D98*/ PPC::Runtime::ASM::beq(.L_8045CF30);
/*8045CF9C 00459D9C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045CFA0 00459DA0*/ PPC::Runtime::ASM::bl(fn_DVDClose);
/*8045CFA4 00459DA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8045CFA8 00459DA8*/ PPC::Runtime::ASM::bl(fn_8045D6CC);
/*8045CFAC 00459DAC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045CFB0 00459DB0*/ PPC::Runtime::ASM::bl(fn_8045D6CC);
/*8045CFB4 00459DB4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE580 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045CFB8 00459DB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045CFBC 00459DBC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8045CFC0 00459DC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8045CFC4 00459DC4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*8045CFC8 00459DC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045CFCC 00459DCC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045CFD0 00459DD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045CFD4 00459DD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8045CFD8 00459DD8*/ PPC::Runtime::ASM::blr();
}