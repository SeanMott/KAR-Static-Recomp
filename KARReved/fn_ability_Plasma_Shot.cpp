//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190E2C.hpp"
#include "fn_randomAbility_removeGlow.hpp"
#include "fn_801B3208.hpp"



void fn_ability_Plasma_Shot(PPC::Runtime::GCContext* context)
{
/*801B2FC8 001AFDC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B2FCC 001AFDCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2FD0 001AFDD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B2FD4 001AFDD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B2FD8 001AFDD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B2FDC 001AFDDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e4, context->r3));
/*801B2FE0 001AFDE0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801B2FE4 001AFDE4*/ PPC::Runtime::ASM::beq(.L_801B31F0);
/*801B2FE8 001AFDE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801B2FEC 001AFDEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x60);
/*801B2FF0 001AFDF0*/ PPC::Runtime::ASM::beq(.L_801B31F0);
/*801B2FF4 001AFDF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa16, context->r31));
/*801B2FF8 001AFDF8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801B2FFC 001AFDFC*/ PPC::Runtime::ASM::bne(.L_801B31F0);
/*801B3000 001AFE00*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa14, context->r31));
/*801B3004 001AFE04*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801B3008 001AFE08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B300C 001AFE0C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801B3010 001AFE10*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E15E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3014 001AFE14*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*801B3018 001AFE18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B301C 001AFE1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B3020 001AFE20*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B3024 001AFE24*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B3028 001AFE28*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B302C 001AFE2C*/ PPC::Runtime::ASM::bne(.L_801B3058);
/*801B3030 001AFE30*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*801B3034 001AFE34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B3038 001AFE38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B303C 001AFE3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r4));
/*801B3040 001AFE40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r4));
/*801B3044 001AFE44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B3048 001AFE48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r31));
/*801B304C 001AFE4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r4));
/*801B3050 001AFE50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r31));
/*801B3054 001AFE54*/ PPC::Runtime::ASM::b(.L_801B3148);
RUNTIME_PPC_JUMP_LABEL(.L_801B3058, 0x801B3058) //this is a jump label
/*801B3058 001AFE58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B305C 001AFE5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3060 001AFE60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B3064 001AFE64*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B3068 001AFE68*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B306C 001AFE6C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B3070 001AFE70*/ PPC::Runtime::ASM::bne(.L_801B309C);
/*801B3074 001AFE74*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*801B3078 001AFE78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B307C 001AFE7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B3080 001AFE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r4));
/*801B3084 001AFE84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r4));
/*801B3088 001AFE88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B308C 001AFE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r31));
/*801B3090 001AFE90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r4));
/*801B3094 001AFE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r31));
/*801B3098 001AFE98*/ PPC::Runtime::ASM::b(.L_801B3148);
RUNTIME_PPC_JUMP_LABEL(.L_801B309C, 0x801B309C) //this is a jump label
/*801B309C 001AFE9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B30A0 001AFEA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B30A4 001AFEA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B30A8 001AFEA8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B30AC 001AFEAC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B30B0 001AFEB0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B30B4 001AFEB4*/ PPC::Runtime::ASM::bne(.L_801B30E0);
/*801B30B8 001AFEB8*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*801B30BC 001AFEBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B30C0 001AFEC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B30C4 001AFEC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x258, context->r4));
/*801B30C8 001AFEC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25c, context->r4));
/*801B30CC 001AFECC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B30D0 001AFED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r31));
/*801B30D4 001AFED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r4));
/*801B30D8 001AFED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r31));
/*801B30DC 001AFEDC*/ PPC::Runtime::ASM::b(.L_801B3148);
RUNTIME_PPC_JUMP_LABEL(.L_801B30E0, 0x801B30E0) //this is a jump label
/*801B30E0 001AFEE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B30E4 001AFEE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B30E8 001AFEE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B30EC 001AFEEC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B30F0 001AFEF0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B30F4 001AFEF4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B30F8 001AFEF8*/ PPC::Runtime::ASM::bne(.L_801B3124);
/*801B30FC 001AFEFC*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*801B3100 001AFF00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B3104 001AFF04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B3108 001AFF08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r4));
/*801B310C 001AFF0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r4));
/*801B3110 001AFF10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B3114 001AFF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r31));
/*801B3118 001AFF18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r4));
/*801B311C 001AFF1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r31));
/*801B3120 001AFF20*/ PPC::Runtime::ASM::b(.L_801B3148);
RUNTIME_PPC_JUMP_LABEL(.L_801B3124, 0x801B3124) //this is a jump label
/*801B3124 001AFF24*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*801B3128 001AFF28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B312C 001AFF2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B3130 001AFF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x280, context->r4));
/*801B3134 001AFF34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x284, context->r4));
/*801B3138 001AFF38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B313C 001AFF3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r31));
/*801B3140 001AFF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x288, context->r4));
/*801B3144 001AFF44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B3148, 0x801B3148) //this is a jump label
/*801B3148 001AFF48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B314C 001AFF4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B3150 001AFF50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801B3154 001AFF54*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B3158 001AFF58*/ PPC::Runtime::ASM::bl(fn_80190E2C);
/*801B315C 001AFF5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801B3160 001AFF60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B3164 001AFF64*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa16, context->r31));
/*801B3168 001AFF68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r31));
/*801B316C 001AFF6C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801B3170 001AFF70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r31));
/*801B3174 001AFF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r31));
/*801B3178 001AFF78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*801B317C 001AFF7C*/ PPC::Runtime::ASM::bne(.L_801B319C);
/*801B3180 001AFF80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B3184 001AFF84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r3));
/*801B3188 001AFF88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa17, context->r31));
/*801B318C 001AFF8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B3190 001AFF90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r3));
/*801B3194 001AFF94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa15, context->r31));
/*801B3198 001AFF98*/ PPC::Runtime::ASM::b(.L_801B31C8);
RUNTIME_PPC_JUMP_LABEL(.L_801B319C, 0x801B319C) //this is a jump label
/*801B319C 001AFF9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*801B31A0 001AFFA0*/ PPC::Runtime::ASM::bne(.L_801B31C0);
/*801B31A4 001AFFA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B31A8 001AFFA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r3));
/*801B31AC 001AFFAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa17, context->r31));
/*801B31B0 001AFFB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B31B4 001AFFB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r3));
/*801B31B8 001AFFB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa15, context->r31));
/*801B31BC 001AFFBC*/ PPC::Runtime::ASM::b(.L_801B31C8);
RUNTIME_PPC_JUMP_LABEL(.L_801B31C0, 0x801B31C0) //this is a jump label
/*801B31C0 001AFFC0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa17, context->r31));
/*801B31C4 001AFFC4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa15, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B31C8, 0x801B31C8) //this is a jump label
/*801B31C8 001AFFC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B31CC 001AFFCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B31D0 001AFFD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r31));
/*801B31D4 001AFFD4*/ PPC::Runtime::ASM::li(context->r4, 0x25);
/*801B31D8 001AFFD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa14, context->r31));
/*801B31DC 001AFFDC*/ PPC::Runtime::ASM::bl(fn_randomAbility_removeGlow);
/*801B31E0 001AFFE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B31E4 001AFFE4*/ PPC::Runtime::ASM::bl(fn_801B3208);
/*801B31E8 001AFFE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B31EC 001AFFEC*/ PPC::Runtime::ASM::b(.L_801B31F4);
RUNTIME_PPC_JUMP_LABEL(.L_801B31F0, 0x801B31F0) //this is a jump label
/*801B31F0 001AFFF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B31F4, 0x801B31F4) //this is a jump label
/*801B31F4 001AFFF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B31F8 001AFFF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B31FC 001AFFFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B3200 001B0000*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B3204 001B0004*/ PPC::Runtime::ASM::blr();
}