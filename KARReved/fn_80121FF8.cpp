//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80252C90.hpp"
#include "fn_800098C0.hpp"
#include "fn_80121CA4.hpp"
#include "fn_80121CA4.hpp"
#include "fn_801149A0.hpp"
#include "fn_80121AA4.hpp"
#include "fn_80121AA4.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_80115264.hpp"



void fn_80121FF8(PPC::Runtime::GCContext* context)
{
/*80121FF8 0011EDF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80121FFC 0011EDFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80122000 0011EE00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80122004 0011EE04*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80122008 0011EE08*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8012200C 0011EE0C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80122010 0011EE10*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80122014 0011EE14*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80122018 0011EE18*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012201C 0011EE1C*/ PPC::Runtime::ASM::slwi(context->r4, context->r30, 7);
/*80122020 0011EE20*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*80122024 0011EE24*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80122028 0011EE28*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8012202C 0011EE2C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80122030 0011EE30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x724);
RUNTIME_PPC_JUMP_LABEL(.L_80122034, 0x80122034) //this is a jump label
/*80122034 0011EE34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80122038 0011EE38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8012203C 0011EE3C*/ PPC::Runtime::ASM::bne(.L_80122104);
/*80122040 0011EE40*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122044 0011EE44*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80122048 0011EE48*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x724);
/*8012204C 0011EE4C*/ PPC::Runtime::ASM::beq(.L_80122110);
/*80122050 0011EE50*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80122054 0011EE54*/ PPC::Runtime::ASM::bl(fn_80252C90);
/*80122058 0011EE58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012205C 0011EE5C*/ PPC::Runtime::ASM::bne(.L_80122110);
/*80122060 0011EE60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80122064 0011EE64*/ PPC::Runtime::ASM::bl(fn_800098C0);
/*80122068 0011EE68*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012206C 0011EE6C*/ PPC::Runtime::ASM::beq(.L_80122110);
/*80122070 0011EE70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80122074 0011EE74*/ PPC::Runtime::ASM::lis(context->r3, fn_80121CA4 @ Get_MemoryOffset_HighBit);
/*80122078 0011EE78*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_80121CA4 @ Get_MemoryOffset_LowBit);
/*8012207C 0011EE7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80122080 0011EE80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80122084 0011EE84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80122088 0011EE88*/ PPC::Runtime::ASM::bl(fn_801149A0);
/*8012208C 0011EE8C*/ PPC::Runtime::ASM::lis(context->r4, fn_80121AA4 @ Get_MemoryOffset_HighBit);
/*80122090 0011EE90*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80122094 0011EE94*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80122098 0011EE98*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8012209C 0011EE9C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80121AA4 @ Get_MemoryOffset_LowBit);
/*801220A0 0011EEA0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801220A4 0011EEA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*801220A8 0011EEA8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801220AC 0011EEAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFE34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801220B0 0011EEB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801220B4 0011EEB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFE40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801220B8 0011EEB8*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*801220BC 0011EEBC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801220C0 0011EEC0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*801220C4 0011EEC4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*801220C8 0011EEC8*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*801220CC 0011EECC*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*801220D0 0011EED0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801220D4 0011EED4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801220D8 0011EED8*/ PPC::Runtime::ASM::bl(fn_80115264);
/*801220DC 0011EEDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801220E0 0011EEE0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801220E4 0011EEE4*/ PPC::Runtime::ASM::slwi(context->r3, context->r30, 7);
/*801220E8 0011EEE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801220EC 0011EEEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801220F0 0011EEF0*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*801220F4 0011EEF4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801220F8 0011EEF8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*801220FC 0011EEFC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80122100 0011EF00*/ PPC::Runtime::ASM::b(.L_80122110);
RUNTIME_PPC_JUMP_LABEL(.L_80122104, 0x80122104) //this is a jump label
/*80122104 0011EF04*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80122108 0011EF08*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8012210C 0011EF0C*/ PPC::Runtime::ASM::bdnz(.L_80122034);
RUNTIME_PPC_JUMP_LABEL(.L_80122110, 0x80122110) //this is a jump label
/*80122110 0011EF10*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80122114 0011EF14*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80122118 0011EF18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8012211C 0011EF1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80122120 0011EF20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80122124 0011EF24*/ PPC::Runtime::ASM::blr();
}