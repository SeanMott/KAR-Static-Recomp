//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D85C0.hpp"
#include "fn_801EBFF0.hpp"
#include "fn_801D9264.hpp"
#include "fn_801ED330.hpp"
#include "fn_801ED3A8.hpp"
#include "fn_801ED3A8.hpp"
#include "fn_801EC5CC.hpp"
#include "fn_801DA6A8.hpp"
#include "fn_801EC78C.hpp"
#include "fn_801ECAE4.hpp"
#include "fn_801ECD74.hpp"
#include "fn_801ECDA8.hpp"
#include "fn_801ECE70.hpp"
#include "fn_801ECF20.hpp"
#include "fn_accelerateStar.hpp"
#include "fn_801ED74C.hpp"
#include "fn_801CC480.hpp"
#include "fn_801EC118.hpp"
#include "fn_801EC33C.hpp"
#include "fn_801EDC74.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_RunPush_3_HandleBoostPhysics(PPC::Runtime::GCContext* context)
{
/*801EF364 001EC164*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF368 001EC168*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF36C 001EC16C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF370 001EC170*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF374 001EC174*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EF378 001EC178*/ PPC::Runtime::ASM::bl(fn_801D85C0);
/*801EF37C 001EC17C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF380 001EC180*/ PPC::Runtime::ASM::bl(fn_801EBFF0);
/*801EF384 001EC184*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF388 001EC188*/ PPC::Runtime::ASM::bl(fn_801D9264);
/*801EF38C 001EC18C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF390 001EC190*/ PPC::Runtime::ASM::bl(fn_801ED330);
/*801EF394 001EC194*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/* 801EF398 001EC198  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801EF39C 001EC19C*/ PPC::Runtime::ASM::beq(.L_801EF3B0);
/*801EF3A0 001EC1A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF3A4 001EC1A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3A8 001EC1A8*/ PPC::Runtime::ASM::bl(fn_801ED3A8);
/*801EF3AC 001EC1AC*/ PPC::Runtime::ASM::b(.L_801EF3C4);
RUNTIME_PPC_JUMP_LABEL(.L_801EF3B0, 0x801EF3B0) //this is a jump label
/*801EF3B0 001EC1B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EF3B4 001EC1B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3B8 001EC1B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*801EF3BC 001EC1BC*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*801EF3C0 001EC1C0*/ PPC::Runtime::ASM::bl(fn_801ED3A8);
RUNTIME_PPC_JUMP_LABEL(.L_801EF3C4, 0x801EF3C4) //this is a jump label
/*801EF3C4 001EC1C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3C8 001EC1C8*/ PPC::Runtime::ASM::bl(fn_801EC5CC);
/*801EF3CC 001EC1CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3D0 001EC1D0*/ PPC::Runtime::ASM::bl(fn_801DA6A8);
/*801EF3D4 001EC1D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3D8 001EC1D8*/ PPC::Runtime::ASM::bl(fn_801EC78C);
/*801EF3DC 001EC1DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3E0 001EC1E0*/ PPC::Runtime::ASM::bl(fn_801ECAE4);
/*801EF3E4 001EC1E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3E8 001EC1E8*/ PPC::Runtime::ASM::bl(fn_801ECD74);
/*801EF3EC 001EC1EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3F0 001EC1F0*/ PPC::Runtime::ASM::bl(fn_801ECDA8);
/*801EF3F4 001EC1F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF3F8 001EC1F8*/ PPC::Runtime::ASM::bl(fn_801ECE70);
/*801EF3FC 001EC1FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF400 001EC200*/ PPC::Runtime::ASM::bl(fn_801ECF20);
/*801EF404 001EC204*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF408 001EC208*/ PPC::Runtime::ASM::bl(fn_accelerateStar);
/*801EF40C 001EC20C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF410 001EC210*/ PPC::Runtime::ASM::bl(fn_801ED74C);
/*801EF414 001EC214*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/* 801EF418 001EC218  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801EF41C 001EC21C*/ PPC::Runtime::ASM::beq(.L_801EF428);
/*801EF420 001EC220*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF424 001EC224*/ PPC::Runtime::ASM::bl(fn_801CC480);
RUNTIME_PPC_JUMP_LABEL(.L_801EF428, 0x801EF428) //this is a jump label
/*801EF428 001EC228*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF42C 001EC22C*/ PPC::Runtime::ASM::bl(fn_801EC118);
/*801EF430 001EC230*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF434 001EC234*/ PPC::Runtime::ASM::bl(fn_801EC33C);
/*801EF438 001EC238*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF43C 001EC23C*/ PPC::Runtime::ASM::bl(fn_801EDC74);
/*801EF440 001EC240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF444 001EC244*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF448 001EC248*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF44C 001EC24C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF450 001EC250*/ PPC::Runtime::ASM::blr();
}