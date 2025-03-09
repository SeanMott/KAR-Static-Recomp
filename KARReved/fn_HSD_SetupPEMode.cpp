//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_StateSetColorUpdate.hpp"
#include "fn_HSD_StateSetAlphaUpdate.hpp"
#include "fn_HSD_StateSetDstAlpha.hpp"
#include "fn_HSD_StateSetBlendMode.hpp"
#include "fn_HSD_StateSetZMode.hpp"
#include "fn_HSD_StateSetZCompLoc.hpp"
#include "fn_HSD_StateSetAlphaCompare.hpp"
#include "fn_HSD_StateSetColorDither.hpp"
#include "fn_HSD_StateSetColorUpdate.hpp"
#include "fn_HSD_StateSetAlphaUpdate.hpp"
#include "fn_HSD_StateSetDstAlpha.hpp"
#include "fn_HSD_StateSetBlendMode.hpp"
#include "fn_HSD_StateSetZMode.hpp"
#include "fn_HSD_StateSetZCompLoc.hpp"
#include "fn_HSD_StateSetAlphaCompare.hpp"
#include "fn_HSD_StateSetZCompLoc.hpp"
#include "fn_HSD_StateSetAlphaCompare.hpp"
#include "fn_HSD_StateSetColorDither.hpp"



void fn_HSD_SetupPEMode(PPC::Runtime::GCContext* context)
{
/*803F7F80 003F4D80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F7F84 003F4D84*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F7F88 003F4D88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F7F8C 003F4D8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F7F90 003F4D90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F7F94 003F4D94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 803F7F98 003F4D98  7C 9E 23 79 */ mr. context->r30 , context->r4
/*803F7F9C 003F4D9C*/ PPC::Runtime::ASM::beq(.L_803F8024);
/*803F7FA0 003F4DA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F7FA4 003F4DA4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 31);
/*803F7FA8 003F4DA8*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorUpdate);
/*803F7FAC 003F4DAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F7FB0 003F4DB0*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 30, 30);
/*803F7FB4 003F4DB4*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetAlphaUpdate);
/*803F7FB8 003F4DB8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F7FBC 003F4DBC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*803F7FC0 003F4DC0*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 29, 29);
/*803F7FC4 003F4DC4*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetDstAlpha);
/*803F7FC8 003F4DC8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803F7FCC 003F4DCC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*803F7FD0 003F4DD0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*803F7FD4 003F4DD4*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r30));
/*803F7FD8 003F4DD8*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetBlendMode);
/*803F7FDC 003F4DDC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F7FE0 003F4DE0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803F7FE4 003F4DE4*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 27, 27);
/*803F7FE8 003F4DE8*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 0, 26, 26);
/*803F7FEC 003F4DEC*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetZMode);
/*803F7FF0 003F4DF0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F7FF4 003F4DF4*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 28, 28);
/*803F7FF8 003F4DF8*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetZCompLoc);
/*803F7FFC 003F4DFC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*803F8000 003F4E00*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*803F8004 003F4E04*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r30));
/*803F8008 003F4E08*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r30));
/*803F800C 003F4E0C*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*803F8010 003F4E10*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetAlphaCompare);
/*803F8014 003F4E14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F8018 003F4E18*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 25, 25);
/*803F801C 003F4E1C*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorDither);
/*803F8020 003F4E20*/ PPC::Runtime::ASM::b(.L_803F80DC);
RUNTIME_PPC_JUMP_LABEL(.L_803F8024, 0x803F8024) //this is a jump label
/*803F8024 003F4E24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F8028 003F4E28*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorUpdate);
/*803F802C 003F4E2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F8030 003F4E30*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetAlphaUpdate);
/*803F8034 003F4E34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F8038 003F4E38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803F803C 003F4E3C*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetDstAlpha);
/*803F8040 003F4E40*/ PPC::Runtime::ASM::extrwi(context->r3, context->r31, 1, 1);
/*803F8044 003F4E44*/ PPC::Runtime::ASM::rlwinm(context->r30, context->r31, 0, 1, 1);
/*803F8048 003F4E48*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*803F804C 003F4E4C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*803F8050 003F4E50*/ PPC::Runtime::ASM::li(context->r6, 0xf);
/*803F8054 003F4E54*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetBlendMode);
/*803F8058 003F4E58*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 4, 4);
/*803F805C 003F4E5C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r31, 1, 2);
/*803F8060 003F4E60*/ PPC::Runtime::ASM::xori(context->r0, context->r3, 0x1);
/*803F8064 003F4E64*/ PPC::Runtime::ASM::rlwinm(context->r31, context->r31, 0, 2, 2);
/*803F8068 003F4E68*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F806C 003F4E6C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*803F8070 003F4E70*/ PPC::Runtime::ASM::beq(.L_803F8078);
/*803F8074 003F4E74*/ PPC::Runtime::ASM::li(context->r4, 0x7);
RUNTIME_PPC_JUMP_LABEL(.L_803F8078, 0x803F8078) //this is a jump label
/*803F8078 003F4E78*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*803F807C 003F4E7C*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetZMode);
/*803F8080 003F4E80*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803F8084 003F4E84*/ PPC::Runtime::ASM::bne(.L_803F80B4);
/*803F8088 003F4E88*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803F808C 003F4E8C*/ PPC::Runtime::ASM::beq(.L_803F80B4);
/*803F8090 003F4E90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F8094 003F4E94*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetZCompLoc);
/*803F8098 003F4E98*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*803F809C 003F4E9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803F80A0 003F4EA0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803F80A4 003F4EA4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*803F80A8 003F4EA8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803F80AC 003F4EAC*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetAlphaCompare);
/*803F80B0 003F4EB0*/ PPC::Runtime::ASM::b(.L_803F80D4);
RUNTIME_PPC_JUMP_LABEL(.L_803F80B4, 0x803F80B4) //this is a jump label
/*803F80B4 003F4EB4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F80B8 003F4EB8*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetZCompLoc);
/*803F80BC 003F4EBC*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*803F80C0 003F4EC0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803F80C4 003F4EC4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803F80C8 003F4EC8*/ PPC::Runtime::ASM::li(context->r6, 0x7);
/*803F80CC 003F4ECC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803F80D0 003F4ED0*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetAlphaCompare);
RUNTIME_PPC_JUMP_LABEL(.L_803F80D4, 0x803F80D4) //this is a jump label
/*803F80D4 003F4ED4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F80D8 003F4ED8*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorDither);
RUNTIME_PPC_JUMP_LABEL(.L_803F80DC, 0x803F80DC) //this is a jump label
/*803F80DC 003F4EDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F80E0 003F4EE0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F80E4 003F4EE4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F80E8 003F4EE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F80EC 003F4EEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F80F0 003F4EF0*/ PPC::Runtime::ASM::blr();
}