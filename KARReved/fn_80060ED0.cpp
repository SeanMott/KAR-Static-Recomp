//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005ECA0.hpp"



void fn_80060ED0(PPC::Runtime::GCContext* context)
{
/*80060ED0 0005DCD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80060ED4 0005DCD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80060ED8 0005DCD8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80060EDC 0005DCDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80060EE0 0005DCE0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*80060EE4 0005DCE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80060EE8 0005DCE8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80060EEC 0005DCEC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80060EF0 0005DCF0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80060EF4 0005DCF4*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80060EF8 0005DCF8*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0xb8);
/*80060EFC 0005DCFC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*80060F00 0005DD00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x391, context->r3));
/*80060F04 0005DD04*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x33c);
/* 80060F08 0005DD08  54 00 E7 7F */ extrwi. context->r0 , context->r0 , 3 , 25
/*80060F0C 0005DD0C*/ PPC::Runtime::ASM::beq(.L_80060F80);
/*80060F10 0005DD10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/* 80060F14 0005DD14  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*80060F18 0005DD18*/ PPC::Runtime::ASM::bne(.L_80060F30);
/*80060F1C 0005DD1C*/ PPC::Runtime::ASM::lis(context->r3, String_lbaudio.c @ Get_MemoryOffset_HighBit);
/*80060F20 0005DD20*/ PPC::Runtime::ASM::li(context->r4, 0x105b);
/*80060F24 0005DD24*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_lbaudio.c @ Get_MemoryOffset_LowBit);
/*80060F28 0005DD28*/ PPC::Runtime::ASM::li(context->r5, String_ "gp_PtrPointerTo_re" Get_MemoryOffset_SDA21);
/*80060F2C 0005DD2C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80060F30, 0x80060F30) //this is a jump label
/*80060F30 0005DD30*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80060F34 0005DD34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*80060F38 0005DD38*/ PPC::Runtime::ASM::ble(.L_80060F70);
/*80060F3C 0005DD3C*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*80060F40 0005DD40*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80060F44 0005DD44*/ PPC::Runtime::ASM::b(.L_80060F60);
RUNTIME_PPC_JUMP_LABEL(.L_80060F48, 0x80060F48) //this is a jump label
/*80060F48 0005DD48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*80060F4C 0005DD4C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*80060F50 0005DD50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80060F54 0005DD54*/ PPC::Runtime::ASM::bl(fn_8005ECA0);
/*80060F58 0005DD58*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x8);
/*80060F5C 0005DD5C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80060F60, 0x80060F60) //this is a jump label
/*80060F60 0005DD60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r30));
/*80060F64 0005DD64*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 3, 25);
/*80060F68 0005DD68*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80060F6C 0005DD6C*/ PPC::Runtime::ASM::blt(.L_80060F48);
RUNTIME_PPC_JUMP_LABEL(.L_80060F70, 0x80060F70) //this is a jump label
/*80060F70 0005DD70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r30));
/*80060F74 0005DD74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80060F78 0005DD78*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 25, 27);
/*80060F7C 0005DD7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80060F80, 0x80060F80) //this is a jump label
/*80060F80 0005DD80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80060F84 0005DD84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80060F88 0005DD88*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80060F8C 0005DD8C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80060F90 0005DD90*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80060F94 0005DD94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80060F98 0005DD98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80060F9C 0005DD9C*/ PPC::Runtime::ASM::blr();
}