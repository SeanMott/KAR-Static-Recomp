//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8037989C.hpp"
#include "fn_8037989C.hpp"
#include "fn_803799B8.hpp"
#include "fn_803785B0.hpp"
#include "fn_80379A94.hpp"



void fn_802F10A4(PPC::Runtime::GCContext* context)
{
/*802F10A4 002EDEA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802F10A8 002EDEA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F10AC 002EDEAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802F10B0 002EDEB0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802F10B4 002EDEB4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802F10B8 002EDEB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F10BC 002EDEBC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F10C0 002EDEC0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802F10C4 002EDEC4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802F10C8 002EDEC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F10CC 002EDECC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802F10D0 002EDED0*/ PPC::Runtime::ASM::beq(.L_802F1168);
/* 802F10D4 002EDED4  54 80 06 3F */ clrlwi. context->r0 , context->r4 , 24
/*802F10D8 002EDED8*/ PPC::Runtime::ASM::beq(.L_802F1144);
/*802F10DC 002EDEDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F10E0 002EDEE0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F10E4 002EDEE4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F10E8 002EDEE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F10EC 002EDEEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F10F0 002EDEF0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802F10F4 002EDEF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F10F8 002EDEF8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F10FC 002EDEFC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*802F1100 002EDF00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3AB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F1104 002EDF04*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802F1108 002EDF08*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3ABC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F110C 002EDF0C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*802F1110 002EDF10*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*802F1114 002EDF14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802F1118 002EDF18*/ PPC::Runtime::ASM::bge(.L_802F1130);
/*802F111C 002EDF1C*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802F1120 002EDF20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*802F1124 002EDF24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6);
/*802F1128 002EDF28*/ PPC::Runtime::ASM::bl(fn_8037989C);
/*802F112C 002EDF2C*/ PPC::Runtime::ASM::b(.L_802F114C);
RUNTIME_PPC_JUMP_LABEL(.L_802F1130, 0x802F1130) //this is a jump label
/*802F1130 002EDF30*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802F1134 002EDF34*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*802F1138 002EDF38*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x7);
/*802F113C 002EDF3C*/ PPC::Runtime::ASM::bl(fn_8037989C);
/*802F1140 002EDF40*/ PPC::Runtime::ASM::b(.L_802F114C);
RUNTIME_PPC_JUMP_LABEL(.L_802F1144, 0x802F1144) //this is a jump label
/*802F1144 002EDF44*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*802F1148 002EDF48*/ PPC::Runtime::ASM::bl(fn_803799B8);
RUNTIME_PPC_JUMP_LABEL(.L_802F114C, 0x802F114C) //this is a jump label
/*802F114C 002EDF4C*/ PPC::Runtime::ASM::bl(fn_803785B0);
/*802F1150 002EDF50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*802F1154 002EDF54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*802F1158 002EDF58*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*802F115C 002EDF5C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802F1160 002EDF60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802F1164 002EDF64*/ PPC::Runtime::ASM::bl(fn_80379A94);
RUNTIME_PPC_JUMP_LABEL(.L_802F1168, 0x802F1168) //this is a jump label
/*802F1168 002EDF68*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802F116C 002EDF6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802F1170 002EDF70*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802F1174 002EDF74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F1178 002EDF78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F117C 002EDF7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F1180 002EDF80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802F1184 002EDF84*/ PPC::Runtime::ASM::blr();
}