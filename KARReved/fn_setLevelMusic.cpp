//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000AF5C.hpp"
#include "fn_stGetStageKind_10bgm?.hpp"
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_80007E34.hpp"
#include "fn_80007E8C.hpp"
#include "fn_80049E24.hpp"
#include "fn_stGetCurrentStageKind_UraBgmChanceRate.hpp"
#include "fn_stGetCurrentStageKind_UraBgmId?.hpp"
#include "fn_lbLoadMusicLocation.hpp"
#include "fn_stGetCurrentStageKind_BgmId.hpp"
#include "fn_lbLoadMusicLocation.hpp"
#include "fn_lbLoadMusicLocation.hpp"



void fn_setLevelMusic(PPC::Runtime::GCContext* context)
{
/*8000FE34 0000CC34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8000FE38 0000CC38*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000FE3C 0000CC3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8000FE40 0000CC40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8000FE44 0000CC44*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8000FE48 0000CC48*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000FE4C 0000CC4C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8000FE50 0000CC50*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000FE54 0000CC54*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8000FE58 0000CC58*/ PPC::Runtime::ASM::bl(fn_8000AF5C);
/*8000FE5C 0000CC5C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8000FE60 0000CC60*/ PPC::Runtime::ASM::bne(.L_8000FF58);
/*8000FE64 0000CC64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r30));
/* 8000FE68 0000CC68  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8000FE6C 0000CC6C*/ PPC::Runtime::ASM::beq(.L_8000FF58);
/*8000FE70 0000CC70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa98, context->r30));
/*8000FE74 0000CC74*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8000FE78 0000CC78*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8000FE7C 0000CC7C*/ PPC::Runtime::ASM::bne(.L_8000FF54);
/*8000FE80 0000CC80*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa97, context->r30));
/*8000FE84 0000CC84*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8000FE88 0000CC88*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8000FE8C 0000CC8C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_10bgm?);
/*8000FE90 0000CC90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000FE94 0000CC94*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*8000FE98 0000CC98*/ PPC::Runtime::ASM::beq(.L_8000FEF8);
/*8000FE9C 0000CC9C*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*8000FEA0 0000CCA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8000FEA4 0000CCA4*/ PPC::Runtime::ASM::beq(.L_8000FEE0);
/*8000FEA8 0000CCA8*/ PPC::Runtime::ASM::srawi.(context->r0, context->r31, 16);
/*8000FEAC 0000CCAC*/ PPC::Runtime::ASM::bne(.L_8000FEC4);
/*8000FEB0 0000CCB0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 16);
/*8000FEB4 0000CCB4*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8000FEB8 0000CCB8*/ PPC::Runtime::ASM::bl(fn_80007E34);
/*8000FEBC 0000CCBC*/ PPC::Runtime::ASM::extsb(context->r29, context->r3);
/*8000FEC0 0000CCC0*/ PPC::Runtime::ASM::b(.L_8000FEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8000FEC4, 0x8000FEC4) //this is a jump label
/*8000FEC4 0000CCC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8000FEC8 0000CCC8*/ PPC::Runtime::ASM::bne(.L_8000FEFC);
/*8000FECC 0000CCCC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 16);
/*8000FED0 0000CCD0*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8000FED4 0000CCD4*/ PPC::Runtime::ASM::bl(fn_80007E8C);
/*8000FED8 0000CCD8*/ PPC::Runtime::ASM::extsb(context->r29, context->r3);
/*8000FEDC 0000CCDC*/ PPC::Runtime::ASM::b(.L_8000FEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8000FEE0, 0x8000FEE0) //this is a jump label
/*8000FEE0 0000CCE0*/ PPC::Runtime::ASM::srawi(context->r0, context->r31, 16);
/*8000FEE4 0000CCE4*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r31, 24);
/*8000FEE8 0000CCE8*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*8000FEEC 0000CCEC*/ PPC::Runtime::ASM::bl(fn_80049E24);
/*8000FEF0 0000CCF0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8000FEF4 0000CCF4*/ PPC::Runtime::ASM::b(.L_8000FEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8000FEF8, 0x8000FEF8) //this is a jump label
/*8000FEF8 0000CCF8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8000FEFC, 0x8000FEFC) //this is a jump label
/*8000FEFC 0000CCFC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8000FF00 0000CD00*/ PPC::Runtime::ASM::beq(.L_8000FF34);
/*8000FF04 0000CD04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa99, context->r30));
/*8000FF08 0000CD08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8000FF0C 0000CD0C*/ PPC::Runtime::ASM::beq(.L_8000FF18);
/*8000FF10 0000CD10*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*8000FF14 0000CD14*/ PPC::Runtime::ASM::b(.L_8000FF34);
RUNTIME_PPC_JUMP_LABEL(.L_8000FF18, 0x8000FF18) //this is a jump label
/*8000FF18 0000CD18*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind_UraBgmChanceRate);
/*8000FF1C 0000CD1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000FF20 0000CD20*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*8000FF24 0000CD24*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8000FF28 0000CD28*/ PPC::Runtime::ASM::cmpw(context->r31, context->r3);
/*8000FF2C 0000CD2C*/ PPC::Runtime::ASM::ble(.L_8000FF34);
/*8000FF30 0000CD30*/ PPC::Runtime::ASM::li(context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8000FF34, 0x8000FF34) //this is a jump label
/*8000FF34 0000CD34*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8000FF38 0000CD38*/ PPC::Runtime::ASM::beq(.L_8000FF48);
/*8000FF3C 0000CD3C*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind_UraBgmId?);
/*8000FF40 0000CD40*/ PPC::Runtime::ASM::bl(fn_lbLoadMusicLocation);
/*8000FF44 0000CD44*/ PPC::Runtime::ASM::b(.L_8000FF58);
RUNTIME_PPC_JUMP_LABEL(.L_8000FF48, 0x8000FF48) //this is a jump label
/*8000FF48 0000CD48*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind_BgmId);
/*8000FF4C 0000CD4C*/ PPC::Runtime::ASM::bl(fn_lbLoadMusicLocation);
/*8000FF50 0000CD50*/ PPC::Runtime::ASM::b(.L_8000FF58);
RUNTIME_PPC_JUMP_LABEL(.L_8000FF54, 0x8000FF54) //this is a jump label
/*8000FF54 0000CD54*/ PPC::Runtime::ASM::bl(fn_lbLoadMusicLocation);
RUNTIME_PPC_JUMP_LABEL(.L_8000FF58, 0x8000FF58) //this is a jump label
/*8000FF58 0000CD58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8000FF5C 0000CD5C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8000FF60 0000CD60*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8000FF64 0000CD64*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000FF68 0000CD68*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8000FF6C 0000CD6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000FF70 0000CD70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8000FF74 0000CD74*/ PPC::Runtime::ASM::blr();
}