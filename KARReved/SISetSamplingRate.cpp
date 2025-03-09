//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "VIGetTvFormat.hpp"
#include "OSReport.hpp"
#include "SISetXY.hpp"
#include "OSRestoreInterrupts.hpp"



void SISetSamplingRate(PPC::Runtime::GCContext* context)
{
/*803E9E5C 003E6C5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E9E60 003E6C60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E9E64 003E6C64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E9E68 003E6C68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E9E6C 003E6C6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E9E70 003E6C70*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E9E74 003E6C74*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803E9E78 003E6C78*/ PPC::Runtime::ASM::cmplwi(context->r29, 0xb);
/*803E9E7C 003E6C7C*/ PPC::Runtime::ASM::lis(context->r3, XYNTSC_804FCCF8 @ Get_MemoryOffset_HighBit);
/*803E9E80 003E6C80*/ PPC::Runtime::ASM::addi(context->r31, context->r3, XYNTSC_804FCCF8 @ Get_MemoryOffset_LowBit);
/*803E9E84 003E6C84*/ PPC::Runtime::ASM::ble(.L_803E9E8C);
/*803E9E88 003E6C88*/ PPC::Runtime::ASM::li(context->r29, 0xb);
RUNTIME_PPC_JUMP_LABEL(.L_803E9E8C, 0x803E9E8C) //this is a jump label
/*803E9E8C 003E6C8C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E9E90 003E6C90*/ PPC::Runtime::ASM::stw(context->r29, SamplingRate_805DE060 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E9E94 003E6C94*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803E9E98 003E6C98*/ PPC::Runtime::ASM::bl(VIGetTvFormat);
/*803E9E9C 003E6C9C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803E9EA0 003E6CA0*/ PPC::Runtime::ASM::beq(.L_803E9EC4);
/*803E9EA4 003E6CA4*/ PPC::Runtime::ASM::bge(.L_803E9EB8);
/*803E9EA8 003E6CA8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E9EAC 003E6CAC*/ PPC::Runtime::ASM::beq(.L_803E9EC4);
/*803E9EB0 003E6CB0*/ PPC::Runtime::ASM::bge(.L_803E9ECC);
/*803E9EB4 003E6CB4*/ PPC::Runtime::ASM::b(.L_803E9ED4);
RUNTIME_PPC_JUMP_LABEL(.L_803E9EB8, 0x803E9EB8) //this is a jump label
/*803E9EB8 003E6CB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*803E9EBC 003E6CBC*/ PPC::Runtime::ASM::beq(.L_803E9EC4);
/*803E9EC0 003E6CC0*/ PPC::Runtime::ASM::b(.L_803E9ED4);
RUNTIME_PPC_JUMP_LABEL(.L_803E9EC4, 0x803E9EC4) //this is a jump label
/*803E9EC4 003E6CC4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803E9EC8 003E6CC8*/ PPC::Runtime::ASM::b(.L_803E9EE8);
RUNTIME_PPC_JUMP_LABEL(.L_803E9ECC, 0x803E9ECC) //this is a jump label
/*803E9ECC 003E6CCC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x30);
/*803E9ED0 003E6CD0*/ PPC::Runtime::ASM::b(.L_803E9EE8);
RUNTIME_PPC_JUMP_LABEL(.L_803E9ED4, 0x803E9ED4) //this is a jump label
/*803E9ED4 003E6CD4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x60);
/*803E9ED8 003E6CD8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803E9EDC 003E6CDC*/ PPC::Runtime::ASM::bl(OSReport);
/*803E9EE0 003E6CE0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803E9EE4 003E6CE4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E9EE8, 0x803E9EE8) //this is a jump label
/*803E9EE8 003E6CE8*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803E9EEC 003E6CEC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x206c, context->r3));
/* 803E9EF0 003E6CF0  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803E9EF4 003E6CF4*/ PPC::Runtime::ASM::beq(.L_803E9F00);
/*803E9EF8 003E6CF8*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803E9EFC 003E6CFC*/ PPC::Runtime::ASM::b(.L_803E9F04);
RUNTIME_PPC_JUMP_LABEL(.L_803E9F00, 0x803E9F00) //this is a jump label
/*803E9F00 003E6D00*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803E9F04, 0x803E9F04) //this is a jump label
/*803E9F04 003E6D04*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 2);
/*803E9F08 003E6D08*/ PPC::Runtime::ASM::lhzx(context->r0, context->r4, context->r3);
/*803E9F0C 003E6D0C*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*803E9F10 003E6D10*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*803E9F14 003E6D14*/ PPC::Runtime::ASM::mullw(context->r3, context->r5, context->r0);
/*803E9F18 003E6D18*/ PPC::Runtime::ASM::bl(SISetXY);
/*803E9F1C 003E6D1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E9F20 003E6D20*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E9F24 003E6D24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E9F28 003E6D28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E9F2C 003E6D2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E9F30 003E6D30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E9F34 003E6D34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E9F38 003E6D38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E9F3C 003E6D3C*/ PPC::Runtime::ASM::blr();
}