//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "PPCMfhid2.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSDumpContext.hpp"
#include "PPCHalt.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "PPCMthid2.hpp"



void DMAErrorHandler(PPC::Runtime::GCContext* context)
{
/*803D40C8 003D0EC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D40CC 003D0ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D40D0 003D0ED0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*803D40D4 003D0ED4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803D40D8 003D0ED8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803D40DC 003D0EDC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803D40E0 003D0EE0*/ PPC::Runtime::ASM::bne(cr1, .L_803D4104);
/*803D40E4 003D0EE4*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803D40E8 003D0EE8*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803D40EC 003D0EEC*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803D40F0 003D0EF0*/ PPC::Runtime::ASM::stfd(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803D40F4 003D0EF4*/ PPC::Runtime::ASM::stfd(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803D40F8 003D0EF8*/ PPC::Runtime::ASM::stfd(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803D40FC 003D0EFC*/ PPC::Runtime::ASM::stfd(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*803D4100 003D0F00*/ PPC::Runtime::ASM::stfd(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803D4104, 0x803D4104) //this is a jump label
/*803D4104 003D0F04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803D4108 003D0F08*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D410C 003D0F0C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D4110 003D0F10*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D4114 003D0F14*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D4118 003D0F18*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D411C 003D0F1C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D4120 003D0F20*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D4124 003D0F24*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*803D4128 003D0F28*/ PPC::Runtime::ASM::lis(context->r3, AT_69_804FAA00 @ Get_MemoryOffset_HighBit);
/*803D412C 003D0F2C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, AT_69_804FAA00 @ Get_MemoryOffset_LowBit);
/*803D4130 003D0F30*/ PPC::Runtime::ASM::bl(PPCMfhid2);
/*803D4134 003D0F34*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D4138 003D0F38*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D413C 003D0F3C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*803D4140 003D0F40*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4144 003D0F44*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*803D4148 003D0F48*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803D414C 003D0F4C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*803D4150 003D0F50*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4154 003D0F54*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4158 003D0F58*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r30, 0, 8, 11);
/*803D415C 003D0F5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4160 003D0F60*/ PPC::Runtime::ASM::beq(.L_803D4174);
/*803D4164 003D0F64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*803D4168 003D0F68*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 10, 10);
/*803D416C 003D0F6C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4170 003D0F70*/ PPC::Runtime::ASM::bne(.L_803D418C);
RUNTIME_PPC_JUMP_LABEL(.L_803D4174, 0x803D4174) //this is a jump label
/*803D4174 003D0F74*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x60);
/*803D4178 003D0F78*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D417C 003D0F7C*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4180 003D0F80*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803D4184 003D0F84*/ PPC::Runtime::ASM::bl(OSDumpContext);
/*803D4188 003D0F88*/ PPC::Runtime::ASM::bl(PPCHalt);
RUNTIME_PPC_JUMP_LABEL(.L_803D418C, 0x803D418C) //this is a jump label
/*803D418C 003D0F8C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x90);
/*803D4190 003D0F90*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4194 003D0F94*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4198 003D0F98*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xcc);
/*803D419C 003D0F9C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D41A0 003D0FA0*/ PPC::Runtime::ASM::bl(OSReport);
/*803D41A4 003D0FA4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r30, 0, 8, 8);
/*803D41A8 003D0FA8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D41AC 003D0FAC*/ PPC::Runtime::ASM::beq(.L_803D41BC);
/*803D41B0 003D0FB0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x104);
/*803D41B4 003D0FB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D41B8 003D0FB8*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_803D41BC, 0x803D41BC) //this is a jump label
/*803D41BC 003D0FBC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r30, 0, 9, 9);
/*803D41C0 003D0FC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D41C4 003D0FC4*/ PPC::Runtime::ASM::beq(.L_803D41D4);
/*803D41C8 003D0FC8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x144);
/*803D41CC 003D0FCC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D41D0 003D0FD0*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_803D41D4, 0x803D41D4) //this is a jump label
/*803D41D4 003D0FD4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r30, 0, 10, 10);
/*803D41D8 003D0FD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D41DC 003D0FDC*/ PPC::Runtime::ASM::beq(.L_803D41EC);
/*803D41E0 003D0FE0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x170);
/*803D41E4 003D0FE4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D41E8 003D0FE8*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_803D41EC, 0x803D41EC) //this is a jump label
/*803D41EC 003D0FEC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r30, 0, 11, 11);
/*803D41F0 003D0FF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D41F4 003D0FF4*/ PPC::Runtime::ASM::beq(.L_803D4204);
/*803D41F8 003D0FF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x190);
/*803D41FC 003D0FFC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4200 003D1000*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_803D4204, 0x803D4204) //this is a jump label
/*803D4204 003D1004*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D4208 003D1008*/ PPC::Runtime::ASM::bl(PPCMthid2);
/*803D420C 003D100C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803D4210 003D1010*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803D4214 003D1014*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803D4218 003D1018*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803D421C 003D101C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*803D4220 003D1020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D4224 003D1024*/ PPC::Runtime::ASM::blr();
}