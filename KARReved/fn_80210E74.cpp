//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_80210B68.hpp"
#include "fn_80210B68.hpp"



void fn_80210E74(PPC::Runtime::GCContext* context)
{
/*80210E74 0020DC74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80210E78 0020DC78*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210E7C 0020DC7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210E80 0020DC80*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80210E84 0020DC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80210E88 0020DC88*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80210E8C 0020DC8C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80210E90 0020DC90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E252C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210E94 0020DC94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80210E98 0020DC98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80210E9C 0020DC9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210EA0 0020DCA0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80210EA4 0020DCA4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80210EA8 0020DCA8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80210EAC 0020DCAC*/ PPC::Runtime::ASM::lis(context->r3, fn_80210B68 @ Get_MemoryOffset_HighBit);
/*80210EB0 0020DCB0*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r29));
/*80210EB4 0020DCB4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80210B68 @ Get_MemoryOffset_LowBit);
/*80210EB8 0020DCB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad4, context->r29));
/*80210EBC 0020DCBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80210EC0 0020DCC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r29));
/*80210EC4 0020DCC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/* 80210EC8 0020DCC8  54 05 EF BF */ extrwi. context->r5 , context->r0 , 2 , 27
/*80210ECC 0020DCCC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80210ED0 0020DCD0*/ PPC::Runtime::ASM::bge(.L_80210EDC);
/*80210ED4 0020DCD4*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*80210ED8 0020DCD8*/ PPC::Runtime::ASM::b(.L_80210EE8);
RUNTIME_PPC_JUMP_LABEL(.L_80210EDC, 0x80210EDC) //this is a jump label
/*80210EDC 0020DCDC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*80210EE0 0020DCE0*/ PPC::Runtime::ASM::ble(.L_80210EE8);
/*80210EE4 0020DCE4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80210EE8, 0x80210EE8) //this is a jump label
/*80210EE8 0020DCE8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r29));
/*80210EEC 0020DCEC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B3020 @ Get_MemoryOffset_HighBit);
/*80210EF0 0020DCF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B3020 @ Get_MemoryOffset_LowBit);
/*80210EF4 0020DCF4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80210EF8 0020DCF8*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r4, 31);
/*80210EFC 0020DCFC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x3);
/*80210F00 0020DD00*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*80210F04 0020DD04*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 2);
/*80210F08 0020DD08*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80210F0C, 0x80210F0C) //this is a jump label
/*80210F0C 0020DD0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80210F10 0020DD10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80210F14 0020DD14*/ PPC::Runtime::ASM::bne(.L_80210F28);
/*80210F18 0020DD18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210F1C 0020DD1C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80210F20 0020DD20*/ PPC::Runtime::ASM::bl(fn_HSD_DObjClearFlags);
/*80210F24 0020DD24*/ PPC::Runtime::ASM::b(.L_80210F34);
RUNTIME_PPC_JUMP_LABEL(.L_80210F28, 0x80210F28) //this is a jump label
/*80210F28 0020DD28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210F2C 0020DD2C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80210F30 0020DD30*/ PPC::Runtime::ASM::bl(fn_HSD_DObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80210F34, 0x80210F34) //this is a jump label
/*80210F34 0020DD34*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80210F38 0020DD38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80210F3C 0020DD3C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x6);
/*80210F40 0020DD40*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x18);
/*80210F44 0020DD44*/ PPC::Runtime::ASM::blt(.L_80210F0C);
/*80210F48 0020DD48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80210F4C 0020DD4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80210F50 0020DD50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80210F54 0020DD54*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210F58 0020DD58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210F5C 0020DD5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80210F60 0020DD60*/ PPC::Runtime::ASM::blr();
}