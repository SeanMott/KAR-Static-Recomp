//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A4038(PPC::Runtime::GCContext* context)
{
/*802A4038 002A0E38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A403C 002A0E3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A4040 002A0E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4044 002A0E44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4048 002A0E48*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A404C 002A0E4C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A4050 002A0E50  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A4054 002A0E54*/ PPC::Runtime::ASM::beq(.L_802A4180);
/*802A4058 002A0E58*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3D74 @ Get_MemoryOffset_HighBit);
/*802A405C 002A0E5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14f8);
/*802A4060 002A0E60*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C3D74 @ Get_MemoryOffset_LowBit);
/*802A4064 002A0E64*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4068 002A0E68*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A406C 002A0E6C*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A4070 002A0E70*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A4074 002A0E74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A4078 002A0E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A407C 002A0E7C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4080 002A0E80*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x13f4);
/*802A4084 002A0E84*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4088 002A0E88*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A408C 002A0E8C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12f0);
/*802A4090 002A0E90*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4094 002A0E94*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4098 002A0E98*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x11ec);
/*802A409C 002A0E9C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40A0 002A0EA0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40A4 002A0EA4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10e8);
/*802A40A8 002A0EA8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40AC 002A0EAC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40B0 002A0EB0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A40B4 002A0EB4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40B8 002A0EB8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40BC 002A0EBC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A40C0 002A0EC0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40C4 002A0EC4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40C8 002A0EC8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A40CC 002A0ECC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40D0 002A0ED0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40D4 002A0ED4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A40D8 002A0ED8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40DC 002A0EDC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40E0 002A0EE0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A40E4 002A0EE4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40E8 002A0EE8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40EC 002A0EEC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A40F0 002A0EF0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A40F4 002A0EF4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A40F8 002A0EF8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A40FC 002A0EFC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4100 002A0F00*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4104 002A0F04*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A4108 002A0F08*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A410C 002A0F0C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4110 002A0F10*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A4114 002A0F14*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4118 002A0F18*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A411C 002A0F1C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A4120 002A0F20*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4124 002A0F24*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4128 002A0F28*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A412C 002A0F2C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4130 002A0F30*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4134 002A0F34*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A4138 002A0F38*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A413C 002A0F3C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4140 002A0F40*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A4144 002A0F44*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4148 002A0F48*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A414C 002A0F4C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A4150 002A0F50*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4154 002A0F54*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4158 002A0F58*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A415C 002A0F5C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4160 002A0F60*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4164 002A0F64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4168 002A0F68*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A416C 002A0F6C*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A4170 002A0F70*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A4174 002A0F74*/ PPC::Runtime::ASM::ble(.L_802A4180);
/*802A4178 002A0F78*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A417C 002A0F7C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A4180, 0x802A4180) //this is a jump label
/*802A4180 002A0F80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4184 002A0F84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4188 002A0F88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A418C 002A0F8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A4190 002A0F90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A4194 002A0F94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A4198 002A0F98*/ PPC::Runtime::ASM::blr();
}